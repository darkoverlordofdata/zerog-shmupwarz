/** updated by adriac */
/* main.c generated by valac 0.34.9, the Vala compiler
 * generated from main.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>

typedef struct _SdxUiComponent SdxUiComponent;
typedef SdxUiComponent SdxUiWindow;
typedef struct _SdxAbstractGame SdxAbstractGame;
typedef SdxAbstractGame Game;
// symtbl.1 sdx_abstract_game
void sdx_abstract_game_release (SdxAbstractGame* self);
void sdx_abstract_game_free (SdxAbstractGame* self);
SdxAbstractGame* sdx_abstract_game_retain (SdxAbstractGame* self);
#define _sdx_abstract_game_release0(var) ((var == NULL) ? NULL : (var = (sdx_abstract_game_release (var), NULL)))
// symtbl.1 sdx_ui_component
void sdx_ui_component_release (SdxUiComponent* self);
void sdx_ui_component_free (SdxUiComponent* self);
SdxUiComponent* sdx_ui_component_retain (SdxUiComponent* self);
#define _sdx_ui_component_release0(var) ((var == NULL) ? NULL : (var = (sdx_ui_component_release (var), NULL)))


extern gboolean sdx_running;

gint _vala_main (const gchar* args, int args_length1);
void sdx_ui_component_free (SdxUiComponent* self);
// symtbl.3 SdxUiWindow / sdx_ui_window
SdxUiWindow* sdx_ui_window_retain (SdxUiWindow* self);
void sdx_ui_window_release (SdxUiWindow* self);
SdxUiWindow* sdx_ui_window_new (gint w, gint h, const gchar* name);
void sdx_abstract_game_free (SdxAbstractGame* self);
// symtbl.3 Game / game
Game* game_retain (Game* self);
void game_release (Game* self);
Game* game_new (SdxUiWindow* window);
void sdx_abstract_game_Start (SdxAbstractGame* self);
void sdx_GameLoop (SdxAbstractGame* game);


/**
 * Start the game
 *
 */
gint _vala_main (const gchar* args, int args_length1) {
	gint result = 0;
	SdxUiWindow* window = NULL;
	SdxUiWindow* _tmp0_ = NULL;
	Game* game = NULL;
	SdxUiWindow* _tmp1_ = NULL;
	Game* _tmp2_ = NULL;
	Game* _tmp3_ = NULL;
	_tmp0_ = sdx_ui_window_new (720, 512, "ShmupWarz");
	window = _tmp0_;
	_tmp1_ = window;
	_tmp2_ = game_new (_tmp1_);
	game = _tmp2_;
	_tmp3_ = game;
	sdx_abstract_game_Start ((SdxAbstractGame*) _tmp3_);
	while (TRUE) {
		gboolean _tmp4_ = FALSE;
		Game* _tmp5_ = NULL;
		_tmp4_ = sdx_running;
		if (!_tmp4_) {
			break;
		}
		_tmp5_ = game;
		sdx_GameLoop ((SdxAbstractGame*) _tmp5_);
	}
	result = 0;
	_sdx_abstract_game_release0 (game);
	_sdx_ui_component_release0 (window);
	return result;
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
	return _vala_main (argv, argc);
}



