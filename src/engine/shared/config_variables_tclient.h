// This file can be included several times.

#ifndef MACRO_CONFIG_INT
#error "The config macros must be defined"
#define MACRO_CONFIG_INT(Name, ScriptName, Def, Min, Max, Save, Desc) ;
#define MACRO_CONFIG_COL(Name, ScriptName, Def, Save, Desc) ;
#define MACRO_CONFIG_STR(Name, ScriptName, Len, Def, Save, Desc) ;
#endif

MACRO_CONFIG_INT(ClRunOnJoinConsole, tc_run_on_join_console, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Whether to use run on join in chat or console")
MACRO_CONFIG_INT(ClRunOnJoinDelay, tc_run_on_join_delay, 2, 7, 50000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Tick Delay before using run on join")

MACRO_CONFIG_INT(ClShowFrozenText, tc_frozen_tees_text, 0, 0, 2, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show how many tees in your team are currently frozen. (0 - off, 1 - show alive, 2 - show frozen)")
MACRO_CONFIG_INT(ClShowFrozenHud, tc_frozen_tees_hud, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show frozen tee HUD")
MACRO_CONFIG_INT(ClShowFrozenHudSkins, tc_frozen_tees_hud_skins, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Use ninja skin, or darkened skin for frozen tees on hud")

MACRO_CONFIG_INT(ClFrozenHudTeeSize, tc_frozen_tees_size, 15, 8, 20, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Size of tees in frozen tee hud. (Default : 15)")
MACRO_CONFIG_INT(ClFrozenMaxRows, tc_frozen_tees_max_rows, 1, 1, 6, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Maximum number of rows in frozen tee HUD display")
MACRO_CONFIG_INT(ClFrozenHudTeamOnly, tc_frozen_tees_only_inteam, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Only render frozen tee HUD display while in team")

MACRO_CONFIG_INT(ClPingNameCircle, tc_nameplate_ping_circle, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Shows a circle next to nameplate to indicate ping")

MACRO_CONFIG_INT(ClSpecmenuID, tc_spec_menu_ID, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Shows player IDs in spectate menu")

MACRO_CONFIG_INT(ClLimitMouseToScreen, tc_limit_mouse_to_screen, 0, 0, 2, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Limit mouse to screen boundries")
MACRO_CONFIG_INT(ClScaleMouseDistance, tc_scale_mouse_distance, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Improve mouse precision by scaling max distance to 1000")

MACRO_CONFIG_INT(ClHammerRotatesWithCursor, tc_hammer_rotates_with_cursor, 0, 0, 2, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Allow your hammer to rotate like other weapons")

MACRO_CONFIG_INT(ClMiniVoteHud, tc_mini_vote_hud, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "When enabled makes the vote UI small")

// Anti Latency Tools
MACRO_CONFIG_INT(ClRemoveAnti, tc_remove_anti, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Removes some amount of antiping & player prediction in freeze")
MACRO_CONFIG_INT(ClUnfreezeLagTicks, tc_remove_anti_ticks, 5, 0, 20, CFGFLAG_CLIENT | CFGFLAG_SAVE, "The biggest amount of prediction ticks that are removed")
MACRO_CONFIG_INT(ClUnfreezeLagDelayTicks, tc_remove_anti_delay_ticks, 25, 5, 150, CFGFLAG_CLIENT | CFGFLAG_SAVE, "How many ticks it takes to remove the maximum prediction after being frozen")

MACRO_CONFIG_INT(ClUnpredOthersInFreeze, tc_unpred_others_in_freeze, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Dont predict other players if you are frozen")
MACRO_CONFIG_INT(ClPredMarginInFreeze, tc_pred_margin_in_freeze, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "enable changing prediction margin while frozen")
MACRO_CONFIG_INT(ClPredMarginInFreezeAmount, tc_pred_margin_in_freeze_amount, 15, 0, 2000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Set what your prediction margin while frozen should be")

MACRO_CONFIG_INT(ClShowOthersGhosts, tc_show_others_ghosts, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show ghosts for other players in their unpredicted position")
MACRO_CONFIG_INT(ClSwapGhosts, tc_swap_ghosts, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show predicted players as ghost and normal players as unpredicted")
MACRO_CONFIG_INT(ClHideFrozenGhosts, tc_hide_frozen_ghosts, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Hide Ghosts of other players if they are frozen")

MACRO_CONFIG_INT(ClPredGhostsAlpha, tc_pred_ghosts_alpha, 100, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Alpha of predicted ghosts (0-100)")
MACRO_CONFIG_INT(ClUnpredGhostsAlpha, tc_unpred_ghosts_alpha, 50, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Alpha of unpredicted ghosts (0-100)")
MACRO_CONFIG_INT(ClRenderGhostAsCircle, tc_render_ghost_as_circle, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Render Ghosts as circles instead of tee")

// MACRO_CONFIG_INT(ClHookLineSize, tc_hook_line_width, 0, 0, 20, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Adjustable hookline width, set to 0 for old default rendering")

MACRO_CONFIG_INT(ClShowCenterLines, tc_show_center, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Draws lines to show the center of your screen/hitbox")
MACRO_CONFIG_INT(ClNameplatesSkinInfo, tc_nameplates_skin_info, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Shows skin name and colors in nameplates")

// MACRO_CONFIG_INT(ClFreeGhost, tc_freeghost, 0, 0, 1, CFGFLAG_CLIENT , "")

MACRO_CONFIG_INT(ClFastInput, tc_fast_input, 0, 0, 5, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Uses input for prediction up to 20ms faster")
MACRO_CONFIG_INT(ClFastInputOthers, tc_fast_input_others, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Do an extra 1 tick (20ms) for other tees with your fast inputs. (increases visual latency, makes dragging easier)")

MACRO_CONFIG_INT(ClAntiPingImproved, tc_antiping_improved, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Different antiping smoothing algorithm, not compatible with cl_antiping_smooth")
MACRO_CONFIG_INT(ClAntiPingNegativeBuffer, tc_antiping_negative_buffer, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Helps in Gores. Allows internal certainty value to be negative which causes more conservative prediction")
MACRO_CONFIG_INT(ClAntiPingStableDirection, tc_antiping_stable_direction, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Predicts optimistically along the tees stable axis to reduce delay in gaining overall stability")
MACRO_CONFIG_INT(ClAntiPingUncertaintyScale, tc_antiping_uncertainty_scale, 150, 25, 400, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Determines uncertainty duration as a factor of ping, 100 = 1.0")

MACRO_CONFIG_INT(ClColorFreeze, tc_color_freeze, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Use skin colors for frozen tees")
MACRO_CONFIG_INT(ClColorFreezeDarken, tc_color_freeze_darken, 90, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Makes color of tees darker when in freeze (0-100)")
MACRO_CONFIG_INT(ClColorFreezeFeet, tc_color_freeze_feet, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Also use color for frozen tee feet")

// Revert Variables
MACRO_CONFIG_INT(ClSmoothPredictionMargin, tc_prediction_margin_smooth, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Makes prediction margin transition smooth, causes worse ping jitter adjustment (reverts a ddnet change)")
// MACRO_CONFIG_INT(ClFreezeStars, tc_freeze_stars, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show old freeze stars")

// Outline Variables
MACRO_CONFIG_INT(ClOutline, tc_outline, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Draws outlines")
MACRO_CONFIG_INT(ClOutlineEntities, tc_outline_in_entities, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Only show outlines in entities")
MACRO_CONFIG_INT(ClOutlineFreeze, tc_outline_freeze, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Draws outline around freeze and deep")
MACRO_CONFIG_INT(ClOutlineKill, tc_outline_kill, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Draws outline around kill")
MACRO_CONFIG_INT(ClOutlineUnFreeze, tc_outline_unfreeze, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Draws outline around unfreeze and undeep")
MACRO_CONFIG_INT(ClOutlineTele, tc_outline_tele, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Draws outline around teleporters")
MACRO_CONFIG_INT(ClOutlineSolid, tc_outline_solid, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Draws outline around hook and unhook")
MACRO_CONFIG_INT(ClOutlineWidth, tc_outline_width, 5, 1, 16, CFGFLAG_CLIENT | CFGFLAG_SAVE, "(1-16) Width of freeze outline")
MACRO_CONFIG_INT(ClOutlineAlpha, tc_outline_alpha, 50, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "(0-100) Outline alpha")
MACRO_CONFIG_INT(ClOutlineAlphaSolid, tc_outline_alpha_solid, 100, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "(0-100) Outline solids alpha")
MACRO_CONFIG_COL(ClOutlineColorSolid, tc_outline_color_solid, 0, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Solid outline color") // 0 0 0
MACRO_CONFIG_COL(ClOutlineColorFreeze, tc_outline_color_freeze, 0, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Freeze outline color") // 0 0 0
MACRO_CONFIG_COL(ClOutlineColorTele, tc_outline_color_tele, 0, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Tele outline color") // 0 0 0
MACRO_CONFIG_COL(ClOutlineColorUnfreeze, tc_outline_color_unfreeze, 0, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Unfreeze outline color") // 0 0 0
MACRO_CONFIG_COL(ClOutlineColorKill, tc_outline_color_kill, 0, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Unfreeze outline color") // 0 0 0

// Indicator Variables
MACRO_CONFIG_COL(ClIndicatorAlive, tc_indicator_alive, 255, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Color of alive tees in player indicator")
MACRO_CONFIG_COL(ClIndicatorFreeze, tc_indicator_freeze, 65407, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Color of frozen tees in player indicator")
MACRO_CONFIG_COL(ClIndicatorSaved, tc_indicator_dead, 0, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Color of tees who is getting saved in player indicator")
MACRO_CONFIG_INT(ClIndicatorOffset, tc_indicator_offset, 42, 16, 200, CFGFLAG_CLIENT | CFGFLAG_SAVE, "(16-128) Offset of indicator position")
MACRO_CONFIG_INT(ClIndicatorOffsetMax, tc_indicator_offset_max, 100, 16, 200, CFGFLAG_CLIENT | CFGFLAG_SAVE, "(16-128) Max indicator offset for variable offset setting")
MACRO_CONFIG_INT(ClIndicatorVariableDistance, tc_indicator_variable_distance, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Indicator circles will be further away the further the tee is")
MACRO_CONFIG_INT(ClIndicatorMaxDistance, tc_indicator_variable_max_distance, 1000, 500, 7000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Maximum tee distance for variable offset")
MACRO_CONFIG_INT(ClIndicatorRadius, tc_indicator_radius, 4, 1, 16, CFGFLAG_CLIENT | CFGFLAG_SAVE, "(1-16) indicator circle size")
MACRO_CONFIG_INT(ClIndicatorOpacity, tc_indicator_opacity, 50, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Opacity of indicator circles")
MACRO_CONFIG_INT(ClPlayerIndicator, tc_player_indicator, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show radial indicator of other tees")
MACRO_CONFIG_INT(ClPlayerIndicatorFreeze, tc_player_indicator_freeze, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Only show frozen tees in indicator")
MACRO_CONFIG_INT(ClIndicatorTeamOnly, tc_indicator_inteam, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Only show indicator while in team")
MACRO_CONFIG_INT(ClIndicatorTees, tc_indicator_tees, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show tees instead of circles")
MACRO_CONFIG_INT(ClIndicatorHideVisible, tc_indicator_hide_visible_tees, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Don't show tees that are on your screen")

// Bind Wheel
MACRO_CONFIG_INT(ClResetBindWheelMouse, tc_reset_bindwheel_mouse, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Reset position of mouse when opening bindwheel")

// Regex chat matching
MACRO_CONFIG_STR(ClRegexChatIgnore, tc_regex_chat_ignore, 512, "", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Filters out chat messages based on a regular expression.")

// Misc visual
MACRO_CONFIG_INT(ClWhiteFeet, tc_white_feet, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Render all feet as perfectly white base color")
MACRO_CONFIG_STR(ClWhiteFeetSkin, tc_white_feet_skin, 255, "x_ninja", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Base skin for white feet")

MACRO_CONFIG_INT(ClMiniDebug, tc_mini_debug, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show position and angle")

MACRO_CONFIG_INT(ClNotifyWhenLast, tc_last_notify, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Notify when you are last")
MACRO_CONFIG_STR(ClNotifyWhenLastText, tc_last_notify_text, 64, "Last!", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Text for last notify")
MACRO_CONFIG_COL(ClNotifyWhenLastColor, tc_last_notify_color, 256, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Color for last notify")
MACRO_CONFIG_INT(ClNotifyWhenLastX, tc_last_notify_x, 20, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Horizontal position for last notify as percentage of screen width")
MACRO_CONFIG_INT(ClNotifyWhenLastY, tc_last_notify_y, 1, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Vertical position for last notify as percentage of screen height")
MACRO_CONFIG_INT(ClNotifyWhenLastSize, tc_last_notify_size, 10, 0, 50, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Font size for last notify")

MACRO_CONFIG_INT(ClRenderCursorSpec, tc_cursor_in_spec, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Render your gun cursor when spectating in freeview")
MACRO_CONFIG_INT(ClRenderCursorSpecAlpha, tc_cursor_in_spec_alpha, 100, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Alpha of cursor in freeview")

MACRO_CONFIG_INT(ClRenderNameplateSpec, tc_render_nameplate_spec, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Render nameplates when spectating")

MACRO_CONFIG_INT(ClTinyTees, tc_tiny_tees, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Render tees smaller")
MACRO_CONFIG_INT(ClTinyTeesOthers, tc_tiny_tees_others, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Render other tees smaller")

MACRO_CONFIG_INT(ClCursorScale, tc_cursor_scale, 100, 0, 500, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Percentage to scale the in game cursor by as a percentage (50 = half, 200 = double)")

// Profiles
MACRO_CONFIG_INT(ClApplyProfileSkin, tc_profile_skin, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Apply skin in profiles")
MACRO_CONFIG_INT(ClApplyProfileName, tc_profile_name, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Apply name in profiles")
MACRO_CONFIG_INT(ClApplyProfileClan, tc_profile_clan, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Apply clan in profiles")
MACRO_CONFIG_INT(ClApplyProfileFlag, tc_profile_flag, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Apply flag in profiles")
MACRO_CONFIG_INT(ClApplyProfileColors, tc_profile_colors, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Apply colors in profiles")
MACRO_CONFIG_INT(ClApplyProfileEmote, tc_profile_emote, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Apply emote in profiles")

// Rainbow
MACRO_CONFIG_INT(ClRainbowTees, tc_rainbow_tees, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Turn on rainbow client side")
MACRO_CONFIG_INT(ClRainbowHook, tc_rainbow_hook, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Rainbow hook")
MACRO_CONFIG_INT(ClRainbowWeapon, tc_rainbow_weapon, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Rainbow Weapons")

MACRO_CONFIG_INT(ClRainbowOthers, tc_rainbow_others, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Turn on rainbow client side for others")
MACRO_CONFIG_INT(ClRainbowMode, tc_rainbow_mode, 1, 1, 4, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Rainbow mode (1: rainbow, 2: pulse, 3: darkness, 4: random)")
MACRO_CONFIG_INT(ClRainbowSpeed, tc_rainbow_speed, 100, 0, 10000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Rainbow speed as a percentage (50 = half speed, 200 = double speed)")

// War List
MACRO_CONFIG_INT(ClWarList, tc_warlist, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Toggles war list visuals")
MACRO_CONFIG_INT(ClWarListShowClan, tc_warlist_show_clan_if_war, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show clan in nameplate if there is a war")
MACRO_CONFIG_INT(ClWarListReason, tc_warlist_reason, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show war reason")
MACRO_CONFIG_INT(ClWarListChat, tc_warlist_chat, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show war colors in chat")
MACRO_CONFIG_INT(ClWarListScoreboard, tc_warlist_scoreboard, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show war colors in scoreboard")
MACRO_CONFIG_INT(ClWarListAllowDuplicates, tc_warlist_allow_duplicates, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Allow duplicate war entrys")
MACRO_CONFIG_INT(ClWarListSpectate, tc_warlist_spectate, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show war colors in spectator menu")

MACRO_CONFIG_INT(ClWarListIndicator, tc_warlist_indicator, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Use warlist for indicator")
MACRO_CONFIG_INT(ClWarListIndicatorColors, tc_warlist_indicator_colors, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show warlist colors instead of freeze colors")
MACRO_CONFIG_INT(ClWarListIndicatorAll, tc_warlist_indicator_all, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show all groups")
MACRO_CONFIG_INT(ClWarListIndicatorEnemy, tc_warlist_indicator_enemy, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show players from the first group")
MACRO_CONFIG_INT(ClWarListIndicatorTeam, tc_warlist_indicator_team, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show players from second group")

// Status Bar
MACRO_CONFIG_INT(ClStatusBar, tc_statusbar, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Enable status bar")

MACRO_CONFIG_INT(ClStatusBar12HourClock, tc_statusbar_12_hour_clock, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Use 12 hour clock in local time")
MACRO_CONFIG_INT(ClStatusBarLocalTimeSeocnds, tc_statusbar_local_time_seconds, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show seconds in local time")
MACRO_CONFIG_INT(ClStatusBarHeight, tc_statusbar_height, 8, 1, 16, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Height of the status bar")

MACRO_CONFIG_COL(ClStatusBarColor, tc_statusbar_color, 3221225472, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Status bar background color")
MACRO_CONFIG_COL(ClStatusBarTextColor, tc_statusbar_text_color, 4278190335, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Status bar text color")
MACRO_CONFIG_INT(ClStatusBarAlpha, tc_statusbar_alpha, 75, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Status bar background alpha")
MACRO_CONFIG_INT(ClStatusBarTextAlpha, tc_statusbar_text_alpha, 100, 0, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Status bar text alpha")

MACRO_CONFIG_INT(ClStatusBarLabels, tc_statusbar_labels, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show labels on status bar entries")
MACRO_CONFIG_STR(ClStatusBarScheme, tc_statusbar_scheme, 16, "ac pf r", CFGFLAG_CLIENT | CFGFLAG_SAVE, "The order in which to show status bar items")

// Trails
MACRO_CONFIG_INT(ClTeeTrail, tc_tee_trail, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Enable Tee trails")
MACRO_CONFIG_INT(ClTeeTrailOthers, tc_tee_trail_others, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show tee trails for other players")
MACRO_CONFIG_INT(ClTeeTrailWidth, tc_tee_trail_width, 15, 0, 20, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Tee trail width")
MACRO_CONFIG_INT(ClTeeTrailLength, tc_tee_trail_length, 25, 5, 200, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Tee trail length")
MACRO_CONFIG_INT(ClTeeTrailAlpha, tc_tee_trail_alpha, 80, 1, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Tee trail alpha")
MACRO_CONFIG_COL(ClTeeTrailColor, tc_tee_trail_color, 255, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Tee trail color")
MACRO_CONFIG_INT(ClTeeTrailTaper, tc_tee_trail_taper, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Taper tee trail over length")
MACRO_CONFIG_INT(ClTeeTrailFade, tc_tee_trail_fade, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Fade trail alpha over length")
MACRO_CONFIG_INT(ClTeeTrailColorMode, tc_tee_trail_color_mode, 1, 1, 5, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Tee trail color mode (1: Solid color, 2: Current Tee color, 3: Rainbow, 4: Color based on Tee speed, 5: Random)")

// Chat Reply
MACRO_CONFIG_INT(ClAutoReplyMuted, tc_auto_reply_muted, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Auto reply to muted players with a message")
MACRO_CONFIG_STR(ClAutoReplyMutedMessage, tc_auto_reply_muted_message, 128, "I have muted you", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Message to reply to muted players")
MACRO_CONFIG_INT(ClAutoReplyMinimized, tc_auto_reply_minimized, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Auto reply when your game is minimized")
MACRO_CONFIG_STR(ClAutoReplyMinimizedMessage, tc_auto_reply_minimized_message, 128, "I am not tabbed in", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Message to reply when your game is minimized")

// Voting
MACRO_CONFIG_INT(ClAutoVoteWhenFar, tc_auto_vote_when_far, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Auto vote no if you far on a map")
MACRO_CONFIG_STR(ClAutoVoteWhenFarMessage, tc_auto_vote_when_far_message, 128, "", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Message to send when auto far vote happens, leave empty to disable")
MACRO_CONFIG_INT(ClAutoVoteWhenFarTime, tc_auto_vote_when_far_time, 5, 0, 20, CFGFLAG_CLIENT | CFGFLAG_SAVE, "How long until auto vote far happens")

// Integration
MACRO_CONFIG_INT(ClDiscordRPC, tc_discord_rpc, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Toggle discord RPC (requires restart)")

// Font
MACRO_CONFIG_STR(ClCustomFont, tc_custom_font, 255, "DejaVu Sans", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Custom font face")

// Bg Draw
MACRO_CONFIG_INT(ClBgDrawWidth, tc_bg_draw_width, 5, 1, 50, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Width of background draw strokes")
MACRO_CONFIG_INT(ClBgDrawFadeTime, tc_bg_draw_fade_time, 120, 0, 600, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Time until strokes dissapear (0 = never)")
MACRO_CONFIG_INT(ClBgDrawMaxItems, tc_bg_draw_max_items, 128, 0, 2048, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Maximum number of strokes")
MACRO_CONFIG_COL(ClBgDrawColor, tc_bg_draw_color, 14024576, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Color of background draw strokes")

// Translate
MACRO_CONFIG_STR(ClTranslateBackend, tc_translate_backend, 32, "ftapi", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Translate backends (ftapi, libretranslate)")
MACRO_CONFIG_STR(ClTranslateTarget, tc_translate_target, 16, "en", CFGFLAG_CLIENT | CFGFLAG_SAVE, "Translate target language (must be 2 character ISO 639 code)")
MACRO_CONFIG_STR(ClTranslateEndpoint, tc_translate_endpoint, 256, "", CFGFLAG_CLIENT | CFGFLAG_SAVE, "For backends which need it, endpoint to use (must be https)")
MACRO_CONFIG_STR(ClTranslateKey, tc_translate_key, 256, "", CFGFLAG_CLIENT | CFGFLAG_SAVE, "For backends which need it, api key to use")

// Animations
MACRO_CONFIG_INT(ClAnimateWheelTime, tc_animate_wheel_time, 300, 0, 1000, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Duration of emote and bind wheel animations, in milliseconds (0 == no animation, 1000 = 1 second)")

// Pets
MACRO_CONFIG_INT(ClPetShow, tc_pet_show, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show a pet")
MACRO_CONFIG_STR(ClPetSkin, tc_pet_skin, 24, "twinbop", CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_INSENSITIVE, "Pet skin")
MACRO_CONFIG_INT(ClPetSize, tc_pet_size, 60, 10, 500, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Size of the pet as a percentage of a normal player")
MACRO_CONFIG_INT(ClPetAlpha, tc_pet_alpha, 90, 10, 100, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Alpha of pet (100 = fully opaque, 50 = half transparent)")

// Change name near finish
MACRO_CONFIG_INT(ClChangeNameNearFinish, tc_change_name_near_finish, 0, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Attempt to change your name when near finish")
MACRO_CONFIG_STR(ClFinishName, tc_finish_name, 16, "nameless tee", CFGFLAG_CLIENT | CFGFLAG_SAVE | CFGFLAG_INSENSITIVE, "Name to change to when near finish when tc_change_name_near_finish is 1")

// Flags
MACRO_CONFIG_INT(ClTClientSettingsTabs, tc_tclient_settings_tabs, 0, 0, 65536, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Bit flags to disable settings tabs")

// AAAAAAA
MACRO_CONFIG_INT(ClAmIFrozen, EEEfrz, 0, 0, 1, CFGFLAG_CLIENT, "")

// Mod
MACRO_CONFIG_INT(ClShowPlayerHitBoxes, tc_show_player_hit_boxes, 0, 0, 2, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show player hit boxes (1 = predicted, 2 = predicted and unpredicted)")
