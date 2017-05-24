/* main.c generated by valac 0.34.8, the Vala compiler
 * generated from main.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <SDL2/SDL_video.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_events.h>
#include <SDL2/SDL_surface.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_pixels.h>
#include <SDL2/SDL_image.h>

#define _SDL_DestroyWindow0(var) ((var == NULL) ? NULL : (var = (SDL_DestroyWindow (var), NULL)))
#define _SDL_DestroyRenderer0(var) ((var == NULL) ? NULL : (var = (SDL_DestroyRenderer (var), NULL)))
typedef struct _Sprite Sprite;
void sprite_release (Sprite* self);
void sprite_free (Sprite* self);
Sprite* sprite_retain (Sprite* self);
#define _sprite_release0(var) ((var == NULL) ? NULL : (var = (sprite_release (var), NULL)))
typedef struct _Text Text;
void text_release (Text* self);
void text_free (Text* self);
Text* text_retain (Text* self);
#define _text_release0(var) ((var == NULL) ? NULL : (var = (text_release (var), NULL)))
typedef struct _Zed Zed;
#define _SDL_FreeSurface0(var) ((var == NULL) ? NULL : (var = (SDL_FreeSurface (var), NULL)))

struct _Sprite {
	gint _retainCount;
	SDL_Texture* texture;
	guint16 w;
	guint16 h;
};

struct _Text {
	gint _retainCount;
	SDL_Texture* texture;
	SDL_Surface* surface;
	TTF_Font* font;
	guint16 w;
	guint16 h;
};

struct _Zed {
	gint _retainCount;
};



gint _vala_main (const gchar* args, int args_length1);
void sprite_free (Sprite* self);
Sprite* sprite_new (const gchar* file, SDL_Renderer* renderer);
void text_free (Text* self);
Text* text_new (const gchar* text, SDL_Renderer* renderer);
void zed_free (Zed* self);
static void zed_instance_init (Zed * self);
Zed* zed_retain (Zed* self);
void zed_release (Zed* self);
void zed_free (Zed* self);
Zed* zed_new (const gchar* file, SDL_Renderer* renderer);

extern const SDL_Color SDX_COLOR_LightSteelBlue;

gint _vala_main (const gchar* args, int args_length1) {
	gint result = 0;
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	SDL_Window* _tmp0_ = NULL;
	SDL_Renderer* _tmp1_ = NULL;
	gint _tmp2_ = 0;
	Sprite* sprite = NULL;
	SDL_Renderer* _tmp3_ = NULL;
	Sprite* _tmp4_ = NULL;
	Sprite* _tmp5_ = NULL;
	SDL_Texture* _tmp6_ = NULL;
	Text* text = NULL;
	SDL_Renderer* _tmp7_ = NULL;
	Text* _tmp8_ = NULL;
	gboolean done = FALSE;
	SDL_Event event = {0};
	_tmp2_ = SDL_CreateWindowAndRenderer (0, 0, (guint32) 0, &_tmp0_, &_tmp1_);
	_SDL_DestroyWindow0 (window);
	window = _tmp0_;
	_SDL_DestroyRenderer0 (renderer);
	renderer = _tmp1_;
	if (_tmp2_ < 0) {
		result = 2;
		_SDL_DestroyRenderer0 (renderer);
		_SDL_DestroyWindow0 (window);
		return result;
	}
	_tmp3_ = renderer;
	_tmp4_ = sprite_new ("assets/images/background.png", _tmp3_);
	sprite = _tmp4_;
	_tmp5_ = sprite;
	_tmp6_ = _tmp5_->texture;
	if (_tmp6_ == NULL) {
		result = 2;
		_sprite_release0 (sprite);
		_SDL_DestroyRenderer0 (renderer);
		_SDL_DestroyWindow0 (window);
		return result;
	}
	_tmp7_ = renderer;
	_tmp8_ = text_new ("Dude!", _tmp7_);
	text = _tmp8_;
	done = FALSE;
	while (TRUE) {
		gboolean _tmp9_ = FALSE;
		SDL_Event _tmp10_ = {0};
		Text* _tmp22_ = NULL;
		SDL_Texture* _tmp23_ = NULL;
		SDL_Renderer* _tmp30_ = NULL;
		SDL_Renderer* _tmp31_ = NULL;
		_tmp9_ = done;
		if (!(!_tmp9_)) {
			break;
		}
		SDL_WaitEvent (&_tmp10_);
		 (event);
		event = _tmp10_;
		{
			gboolean _tmp11_ = FALSE;
			_tmp11_ = TRUE;
			while (TRUE) {
				gboolean _tmp14_ = FALSE;
				gboolean _tmp15_ = FALSE;
				SDL_Event _tmp16_ = {0};
				SDL_EventType _tmp17_ = 0;
				if (!_tmp11_) {
					SDL_Event _tmp12_ = {0};
					gint _tmp13_ = 0;
					_tmp13_ = SDL_PollEvent (&_tmp12_);
					 (event);
					event = _tmp12_;
					if (!(_tmp13_ > 0)) {
						break;
					}
				}
				_tmp11_ = FALSE;
				_tmp16_ = event;
				_tmp17_ = _tmp16_.type;
				if (_tmp17_ == SDL_QUIT) {
					_tmp15_ = TRUE;
				} else {
					SDL_Event _tmp18_ = {0};
					SDL_EventType _tmp19_ = 0;
					_tmp18_ = event;
					_tmp19_ = _tmp18_.type;
					_tmp15_ = _tmp19_ == SDL_KEYDOWN;
				}
				if (_tmp15_) {
					_tmp14_ = TRUE;
				} else {
					SDL_Event _tmp20_ = {0};
					SDL_EventType _tmp21_ = 0;
					_tmp20_ = event;
					_tmp21_ = _tmp20_.type;
					_tmp14_ = _tmp21_ == SDL_FINGERDOWN;
				}
				if (_tmp14_) {
					done = TRUE;
				}
			}
		}
		_tmp22_ = text;
		_tmp23_ = _tmp22_->texture;
		if (_tmp23_ == NULL) {
			SDL_Renderer* _tmp24_ = NULL;
			_tmp24_ = renderer;
			SDL_SetRenderDrawColor (_tmp24_, (guint8) 0x00, (guint8) 0x00, (guint8) 0xff, (guint8) 0xFF);
		} else {
			SDL_Renderer* _tmp25_ = NULL;
			guint8 _tmp26_ = 0U;
			guint8 _tmp27_ = 0U;
			guint8 _tmp28_ = 0U;
			guint8 _tmp29_ = 0U;
			_tmp25_ = renderer;
			_tmp26_ = SDX_COLOR_LightSteelBlue.r;
			_tmp27_ = SDX_COLOR_LightSteelBlue.g;
			_tmp28_ = SDX_COLOR_LightSteelBlue.b;
			_tmp29_ = SDX_COLOR_LightSteelBlue.a;
			SDL_SetRenderDrawColor (_tmp25_, _tmp26_, _tmp27_, _tmp28_, _tmp29_);
		}
		_tmp30_ = renderer;
		SDL_RenderClear (_tmp30_);
		_tmp31_ = renderer;
		SDL_RenderPresent (_tmp31_);
	}
	result = 0;
	 (event);
	_text_release0 (text);
	_sprite_release0 (sprite);
	_SDL_DestroyRenderer0 (renderer);
	_SDL_DestroyWindow0 (window);
	return result;
}


int main (int argc, char ** argv) {
#if !GLIB_CHECK_VERSION (2,35,0)
	g_type_init ();
#endif
	return _vala_main (argv, argc);
}


Zed* zed_retain (Zed* self) {
	Zed* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_atomic_int_add ((volatile gint *) (&self->_retainCount), 1);
	result = self;
	return result;
}


void zed_release (Zed* self) {
	gboolean _tmp0_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_atomic_int_dec_and_test ((volatile gint *) (&self->_retainCount));
	if (_tmp0_) {
		zed_free (self);
	}
}


Zed* zed_new (const gchar* file, SDL_Renderer* renderer) {
	Zed* self;
	SDL_Surface* never = NULL;
	const gchar* _tmp0_ = NULL;
	SDL_Surface* _tmp1_ = NULL;
	g_return_val_if_fail (file != NULL, NULL);
	g_return_val_if_fail (renderer != NULL, NULL);
	self = g_slice_new0 (Zed);
	zed_instance_init (self);
	_tmp0_ = file;
	_tmp1_ = IMG_Load (_tmp0_);
	never = _tmp1_;
	_SDL_FreeSurface0 (never);
	return self;
}


static void zed_instance_init (Zed * self) {
	self->_retainCount = 1;
}


void zed_free (Zed* self) {
	g_slice_free (Zed, self);
}



