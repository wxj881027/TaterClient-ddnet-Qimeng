/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#ifndef GAME_CLIENT_COMPONENTS_MAPLAYERS_H
#define GAME_CLIENT_COMPONENTS_MAPLAYERS_H
#include <game/client/component.h>
#include <game/client/render.h>

#include <cstdint>
#include <memory>
#include <vector>

#define INDEX_BUFFER_GROUP_WIDTH 12
#define INDEX_BUFFER_GROUP_HEIGHT 9
#define INDEX_BORDER_BUFFER_GROUP_SIZE 20

typedef char *offset_ptr_size;
typedef uintptr_t offset_ptr;
typedef unsigned int offset_ptr32;

class CCamera;
class CLayers;
class CMapImages;
class ColorRGBA;
class CMapItemGroup;
class CMapItemLayer;
class CMapItemLayerTilemap;
class CMapItemLayerQuads;

class CMapLayers : public CComponent
{
	friend class CBackground;
	friend class CMenuBackground;
	friend class CConditional;

	CLayers *m_pLayers;
	CMapImages *m_pImages;
	std::unique_ptr<CMapBasedEnvelopePointAccess> m_pEnvelopePoints;

	void MapScreenToGroup(float CenterX, float CenterY, CMapItemGroup *pGroup, float Zoom = 1.0f);
	int m_Type;

	struct STileLayerVisuals
	{
		STileLayerVisuals() :
			m_pTilesOfLayer(nullptr)
		{
			m_Width = 0;
			m_Height = 0;
			m_BufferContainerIndex = -1;
			m_IsTextured = false;
		}

		bool Init(unsigned int Width, unsigned int Height);

		~STileLayerVisuals();

		struct STileVisual
		{
			STileVisual() :
				m_IndexBufferByteOffset(0) {}

		private:
			offset_ptr32 m_IndexBufferByteOffset;

		public:
			bool DoDraw()
			{
				return (m_IndexBufferByteOffset & 0x10000000) != 0;
			}

			void Draw(bool SetDraw)
			{
				m_IndexBufferByteOffset = (SetDraw ? 0x10000000 : (offset_ptr32)0) | (m_IndexBufferByteOffset & 0xEFFFFFFF);
			}

			offset_ptr IndexBufferByteOffset()
			{
				return ((offset_ptr)(m_IndexBufferByteOffset & 0xEFFFFFFF) * 6 * sizeof(uint32_t));
			}

			void SetIndexBufferByteOffset(offset_ptr32 IndexBufferByteOff)
			{
				m_IndexBufferByteOffset = IndexBufferByteOff | (m_IndexBufferByteOffset & 0x10000000);
			}

			void AddIndexBufferByteOffset(offset_ptr32 IndexBufferByteOff)
			{
				m_IndexBufferByteOffset = ((m_IndexBufferByteOffset & 0xEFFFFFFF) + IndexBufferByteOff) | (m_IndexBufferByteOffset & 0x10000000);
			}
		};
		STileVisual *m_pTilesOfLayer;

		STileVisual m_BorderTopLeft;
		STileVisual m_BorderTopRight;
		STileVisual m_BorderBottomRight;
		STileVisual m_BorderBottomLeft;

		STileVisual m_BorderKillTile; //end of map kill tile -- game layer only

		std::vector<STileVisual> m_vBorderTop;
		std::vector<STileVisual> m_vBorderLeft;
		std::vector<STileVisual> m_vBorderRight;
		std::vector<STileVisual> m_vBorderBottom;

		unsigned int m_Width;
		unsigned int m_Height;
		int m_BufferContainerIndex;
		bool m_IsTextured;
	};
	std::vector<STileLayerVisuals *> m_vpTileLayerVisuals;

	struct SQuadLayerVisuals
	{
		SQuadLayerVisuals() :
			m_QuadNum(0), m_pQuadsOfLayer(nullptr), m_BufferContainerIndex(-1), m_IsTextured(false) {}

		struct SQuadVisual
		{
			SQuadVisual() :
				m_IndexBufferByteOffset(0) {}

			offset_ptr m_IndexBufferByteOffset;
		};

		int m_QuadNum;
		SQuadVisual *m_pQuadsOfLayer;

		int m_BufferContainerIndex;
		bool m_IsTextured;
	};
	std::vector<SQuadLayerVisuals *> m_vpQuadLayerVisuals;
	std::vector<std::vector<int>> m_vvLayerCount;
	int m_GameGroup;

	virtual CCamera *GetCurCamera();
	virtual const char *LoadingTitle() const;

public:
	bool m_OnlineOnly;

	enum
	{
		TYPE_BACKGROUND = 0,
		TYPE_BACKGROUND_FORCE,
		TYPE_FOREGROUND,
		TYPE_FULL_DESIGN,
		TYPE_ALL = -1,
	};

	CMapLayers(int Type, bool OnlineOnly = true);
	virtual ~CMapLayers();
	virtual int Sizeof() const override { return sizeof(*this); }
	virtual void OnInit() override;
	virtual void OnRender() override;
	virtual void OnMapLoad() override;

	static void EnvelopeEval(int TimeOffsetMillis, int Env, ColorRGBA &Result, size_t Channels, void *pUser);

private:
	void RenderTileLayer(int LayerIndex, const ColorRGBA &Color);
	void RenderTileBorder(int LayerIndex, const ColorRGBA &Color, int BorderX0, int BorderY0, int BorderX1, int BorderY1);
	void RenderKillTileBorder(int LayerIndex, const ColorRGBA &Color);
	void RenderQuadLayer(int LayerIndex, CMapItemLayerQuads *pQuadLayer, bool ForceRender = false);

	int GetLayerType(const CMapItemLayer *pLayer) const;
	int GetTileLayerAndOverlayCount(const CMapItemLayerTilemap *pLayerTilemap, int LayerType, void **ppTiles = nullptr) const;

	void RenderTilelayerNoTileBuffer(int ImageIndex, int LayerType, void *pTilesData, CMapItemLayerTilemap *pLayerTilemap, const ColorRGBA &Color);
	void RenderTilelayerWithTileBuffer(int ImageIndex, int LayerType, int TileLayerCounter, const ColorRGBA &Color);
	ColorRGBA GetDeathBorderColor() const;
};

#endif
