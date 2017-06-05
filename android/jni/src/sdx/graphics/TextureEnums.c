/* TextureEnums.c generated by valac 0.34.8, the Vala compiler
 * generated from TextureEnums.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>


#define SDX_GRAPHICS_TYPE_TEXTURE_FILTER (sdx_graphics_texture_filter_get_type ())
#define _g_free0(var) (var = (g_free (var), NULL))

#define SDX_GRAPHICS_TYPE_TEXTURE_WRAP (sdx_graphics_texture_wrap_get_type ())

#define SDX_GRAPHICS_TYPE_FORMAT (sdx_graphics_format_get_type ())

typedef enum  {
	SDX_GRAPHICS_TEXTURE_FILTER_Nearest,
	SDX_GRAPHICS_TEXTURE_FILTER_Linear,
	SDX_GRAPHICS_TEXTURE_FILTER_MipMap,
	SDX_GRAPHICS_TEXTURE_FILTER_MipMapNearestNearest,
	SDX_GRAPHICS_TEXTURE_FILTER_MipMapLinearNearest,
	SDX_GRAPHICS_TEXTURE_FILTER_MipMapNearestLinear,
	SDX_GRAPHICS_TEXTURE_FILTER_MipMapLinearLinear
} sdxgraphicsTextureFilter;

typedef enum  {
	SDX_SDL_EXCEPTION_Initialization,
	SDX_SDL_EXCEPTION_ImageInitialization,
	SDX_SDL_EXCEPTION_TtfInitialization,
	SDX_SDL_EXCEPTION_TextureFilteringNotEnabled,
	SDX_SDL_EXCEPTION_OpenWindow,
	SDX_SDL_EXCEPTION_CreateRenderer,
	SDX_SDL_EXCEPTION_InvalidForPlatform,
	SDX_SDL_EXCEPTION_UnableToLoadResource,
	SDX_SDL_EXCEPTION_UnableToLoadSurface,
	SDX_SDL_EXCEPTION_UnableToLoadTexture,
	SDX_SDL_EXCEPTION_NullPointer,
	SDX_SDL_EXCEPTION_NoSuchElement,
	SDX_SDL_EXCEPTION_IllegalStateException,
	SDX_SDL_EXCEPTION_RuntimeException,
	SDX_SDL_EXCEPTION_NotReached
} sdxSdlException;
#define SDX_SDL_EXCEPTION sdx_sdl_exception_quark ()
typedef enum  {
	SDX_GRAPHICS_TEXTURE_WRAP_ClampToEdge = 1,
	SDX_GRAPHICS_TEXTURE_WRAP_Repeat = 2
} sdxgraphicsTextureWrap;

typedef enum  {
	SDX_GRAPHICS_FORMAT_Alpha,
	SDX_GRAPHICS_FORMAT_Intensity,
	SDX_GRAPHICS_FORMAT_LuminanceAlpha,
	SDX_GRAPHICS_FORMAT_RGB565,
	SDX_GRAPHICS_FORMAT_RGBA4444,
	SDX_GRAPHICS_FORMAT_RGB888,
	SDX_GRAPHICS_FORMAT_RGBA8888
} sdxgraphicsFormat;



GType sdx_graphics_texture_filter_get_type (void) G_GNUC_CONST;
sdxgraphicsTextureFilter sdx_graphics_texture_filter_from (const gchar* value);
GQuark sdx_sdl_exception_quark (void);
gboolean sdx_graphics_texture_filter_isMipMap (sdxgraphicsTextureFilter self);
gchar* sdx_graphics_texture_filter_to_string (sdxgraphicsTextureFilter self);
GType sdx_graphics_texture_wrap_get_type (void) G_GNUC_CONST;
sdxgraphicsTextureWrap sdx_graphics_texture_wrap_from (const gchar* value);
gchar* sdx_graphics_texture_wrap_to_string (sdxgraphicsTextureWrap self);
GType sdx_graphics_format_get_type (void) G_GNUC_CONST;
sdxgraphicsFormat sdx_graphics_format_from (const gchar* value);
gchar* sdx_graphics_format_to_string (sdxgraphicsFormat self);


sdxgraphicsTextureFilter sdx_graphics_texture_filter_from (const gchar* value) {
	sdxgraphicsTextureFilter result = 0;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	GQuark _tmp3_ = 0U;
	static GQuark _tmp2_label0 = 0;
	static GQuark _tmp2_label1 = 0;
	static GQuark _tmp2_label2 = 0;
	static GQuark _tmp2_label3 = 0;
	static GQuark _tmp2_label4 = 0;
	static GQuark _tmp2_label5 = 0;
	static GQuark _tmp2_label6 = 0;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (value != NULL, 0);
	_tmp0_ = value;
	_tmp1_ = _tmp0_;
	_tmp3_ = (NULL == _tmp1_) ? 0 : g_quark_from_string (_tmp1_);
	if (_tmp3_ == ((0 != _tmp2_label0) ? _tmp2_label0 : (_tmp2_label0 = g_quark_from_static_string ("Nearest")))) {
		switch (0) {
			default:
			{
				result = SDX_GRAPHICS_TEXTURE_FILTER_Nearest;
				return result;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label1) ? _tmp2_label1 : (_tmp2_label1 = g_quark_from_static_string ("Linear")))) {
		switch (0) {
			default:
			{
				result = SDX_GRAPHICS_TEXTURE_FILTER_Linear;
				return result;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label2) ? _tmp2_label2 : (_tmp2_label2 = g_quark_from_static_string ("MipMap")))) {
		switch (0) {
			default:
			{
				result = SDX_GRAPHICS_TEXTURE_FILTER_MipMap;
				return result;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label3) ? _tmp2_label3 : (_tmp2_label3 = g_quark_from_static_string ("MipMapNearestNearest")))) {
		switch (0) {
			default:
			{
				result = SDX_GRAPHICS_TEXTURE_FILTER_MipMapNearestNearest;
				return result;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label4) ? _tmp2_label4 : (_tmp2_label4 = g_quark_from_static_string ("MipMapLinearNearest")))) {
		switch (0) {
			default:
			{
				result = SDX_GRAPHICS_TEXTURE_FILTER_MipMapLinearNearest;
				return result;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label5) ? _tmp2_label5 : (_tmp2_label5 = g_quark_from_static_string ("MipMapNearestLinear")))) {
		switch (0) {
			default:
			{
				result = SDX_GRAPHICS_TEXTURE_FILTER_MipMapNearestLinear;
				return result;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label6) ? _tmp2_label6 : (_tmp2_label6 = g_quark_from_static_string ("MipMapLinearLinear")))) {
		switch (0) {
			default:
			{
				result = SDX_GRAPHICS_TEXTURE_FILTER_MipMapLinearLinear;
				return result;
			}
		}
	} else {
		switch (0) {
			default:
			{
				const gchar* _tmp4_ = NULL;
				gchar* _tmp5_ = NULL;
				gchar* _tmp6_ = NULL;
				gchar* _tmp7_ = NULL;
				gchar* _tmp8_ = NULL;
				GError* _tmp9_ = NULL;
				GError* _tmp10_ = NULL;
				_tmp4_ = value;
				_tmp5_ = g_strconcat ("TextureFilter.from[", _tmp4_, NULL);
				_tmp6_ = _tmp5_;
				_tmp7_ = g_strconcat (_tmp6_, "]", NULL);
				_tmp8_ = _tmp7_;
				_tmp9_ = g_error_new_literal (SDX_SDL_EXCEPTION, SDX_SDL_EXCEPTION_NotReached, _tmp8_);
				_tmp10_ = _tmp9_;
				_g_free0 (_tmp8_);
				_g_free0 (_tmp6_);
				_inner_error_ = _tmp10_;
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return 0;
			}
		}
	}
}


gboolean sdx_graphics_texture_filter_isMipMap (sdxgraphicsTextureFilter self) {
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	if (self != SDX_GRAPHICS_TEXTURE_FILTER_Nearest) {
		_tmp0_ = self != SDX_GRAPHICS_TEXTURE_FILTER_Linear;
	} else {
		_tmp0_ = FALSE;
	}
	result = _tmp0_;
	return result;
}


gchar* sdx_graphics_texture_filter_to_string (sdxgraphicsTextureFilter self) {
	gchar* result = NULL;
	GError * _inner_error_ = NULL;
	switch (self) {
		case SDX_GRAPHICS_TEXTURE_FILTER_Nearest:
		{
			gchar* _tmp0_ = NULL;
			_tmp0_ = g_strdup ("Nearest");
			result = _tmp0_;
			return result;
		}
		case SDX_GRAPHICS_TEXTURE_FILTER_Linear:
		{
			gchar* _tmp1_ = NULL;
			_tmp1_ = g_strdup ("Linear");
			result = _tmp1_;
			return result;
		}
		case SDX_GRAPHICS_TEXTURE_FILTER_MipMap:
		{
			gchar* _tmp2_ = NULL;
			_tmp2_ = g_strdup ("MipMap");
			result = _tmp2_;
			return result;
		}
		case SDX_GRAPHICS_TEXTURE_FILTER_MipMapNearestNearest:
		{
			gchar* _tmp3_ = NULL;
			_tmp3_ = g_strdup ("MipMapNearestNearest");
			result = _tmp3_;
			return result;
		}
		case SDX_GRAPHICS_TEXTURE_FILTER_MipMapLinearNearest:
		{
			gchar* _tmp4_ = NULL;
			_tmp4_ = g_strdup ("MipMapLinearNearest");
			result = _tmp4_;
			return result;
		}
		case SDX_GRAPHICS_TEXTURE_FILTER_MipMapNearestLinear:
		{
			gchar* _tmp5_ = NULL;
			_tmp5_ = g_strdup ("MipMapNearestLinear");
			result = _tmp5_;
			return result;
		}
		case SDX_GRAPHICS_TEXTURE_FILTER_MipMapLinearLinear:
		{
			gchar* _tmp6_ = NULL;
			_tmp6_ = g_strdup ("MipMapLinearLinear");
			result = _tmp6_;
			return result;
		}
		default:
		{
			gchar* _tmp7_ = NULL;
			gchar* _tmp8_ = NULL;
			gchar* _tmp9_ = NULL;
			gchar* _tmp10_ = NULL;
			gchar* _tmp11_ = NULL;
			gchar* _tmp12_ = NULL;
			GError* _tmp13_ = NULL;
			GError* _tmp14_ = NULL;
			_tmp7_ = sdx_graphics_texture_filter_to_string (self);
			_tmp8_ = _tmp7_;
			_tmp9_ = g_strconcat ("TextureFilter.to_string[", _tmp8_, NULL);
			_tmp10_ = _tmp9_;
			_tmp11_ = g_strconcat (_tmp10_, "]", NULL);
			_tmp12_ = _tmp11_;
			_tmp13_ = g_error_new_literal (SDX_SDL_EXCEPTION, SDX_SDL_EXCEPTION_NotReached, _tmp12_);
			_tmp14_ = _tmp13_;
			_g_free0 (_tmp12_);
			_g_free0 (_tmp10_);
			_g_free0 (_tmp8_);
			_inner_error_ = _tmp14_;
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
}


GType sdx_graphics_texture_filter_get_type (void) {
	static volatile gsize sdx_graphics_texture_filter_type_id__volatile = 0;
	if (g_once_init_enter (&sdx_graphics_texture_filter_type_id__volatile)) {
		static const GEnumValue values[] = {{SDX_GRAPHICS_TEXTURE_FILTER_Nearest, "SDX_GRAPHICS_TEXTURE_FILTER_Nearest", "nearest"}, {SDX_GRAPHICS_TEXTURE_FILTER_Linear, "SDX_GRAPHICS_TEXTURE_FILTER_Linear", "linear"}, {SDX_GRAPHICS_TEXTURE_FILTER_MipMap, "SDX_GRAPHICS_TEXTURE_FILTER_MipMap", "mipmap"}, {SDX_GRAPHICS_TEXTURE_FILTER_MipMapNearestNearest, "SDX_GRAPHICS_TEXTURE_FILTER_MipMapNearestNearest", "mipmapnearestnearest"}, {SDX_GRAPHICS_TEXTURE_FILTER_MipMapLinearNearest, "SDX_GRAPHICS_TEXTURE_FILTER_MipMapLinearNearest", "mipmaplinearnearest"}, {SDX_GRAPHICS_TEXTURE_FILTER_MipMapNearestLinear, "SDX_GRAPHICS_TEXTURE_FILTER_MipMapNearestLinear", "mipmapnearestlinear"}, {SDX_GRAPHICS_TEXTURE_FILTER_MipMapLinearLinear, "SDX_GRAPHICS_TEXTURE_FILTER_MipMapLinearLinear", "mipmaplinearlinear"}, {0, NULL, NULL}};
		GType sdx_graphics_texture_filter_type_id;
		sdx_graphics_texture_filter_type_id = g_enum_register_static ("sdxgraphicsTextureFilter", values);
		g_once_init_leave (&sdx_graphics_texture_filter_type_id__volatile, sdx_graphics_texture_filter_type_id);
	}
	return sdx_graphics_texture_filter_type_id__volatile;
}


sdxgraphicsTextureWrap sdx_graphics_texture_wrap_from (const gchar* value) {
	sdxgraphicsTextureWrap result = 0;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	GQuark _tmp3_ = 0U;
	static GQuark _tmp2_label0 = 0;
	static GQuark _tmp2_label1 = 0;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (value != NULL, 0);
	_tmp0_ = value;
	_tmp1_ = _tmp0_;
	_tmp3_ = (NULL == _tmp1_) ? 0 : g_quark_from_string (_tmp1_);
	if (_tmp3_ == ((0 != _tmp2_label0) ? _tmp2_label0 : (_tmp2_label0 = g_quark_from_static_string ("ClampToEdge")))) {
		switch (0) {
			default:
			{
				result = SDX_GRAPHICS_TEXTURE_WRAP_ClampToEdge;
				return result;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label1) ? _tmp2_label1 : (_tmp2_label1 = g_quark_from_static_string ("Repeat")))) {
		switch (0) {
			default:
			{
				result = SDX_GRAPHICS_TEXTURE_WRAP_Repeat;
				return result;
			}
		}
	} else {
		switch (0) {
			default:
			{
				const gchar* _tmp4_ = NULL;
				gchar* _tmp5_ = NULL;
				gchar* _tmp6_ = NULL;
				gchar* _tmp7_ = NULL;
				gchar* _tmp8_ = NULL;
				GError* _tmp9_ = NULL;
				GError* _tmp10_ = NULL;
				_tmp4_ = value;
				_tmp5_ = g_strconcat ("TextureWrap.from[", _tmp4_, NULL);
				_tmp6_ = _tmp5_;
				_tmp7_ = g_strconcat (_tmp6_, "]", NULL);
				_tmp8_ = _tmp7_;
				_tmp9_ = g_error_new_literal (SDX_SDL_EXCEPTION, SDX_SDL_EXCEPTION_NotReached, _tmp8_);
				_tmp10_ = _tmp9_;
				_g_free0 (_tmp8_);
				_g_free0 (_tmp6_);
				_inner_error_ = _tmp10_;
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return 0;
			}
		}
	}
}


gchar* sdx_graphics_texture_wrap_to_string (sdxgraphicsTextureWrap self) {
	gchar* result = NULL;
	GError * _inner_error_ = NULL;
	switch (self) {
		case SDX_GRAPHICS_TEXTURE_WRAP_ClampToEdge:
		{
			gchar* _tmp0_ = NULL;
			_tmp0_ = g_strdup ("ClampToEdge");
			result = _tmp0_;
			return result;
		}
		case SDX_GRAPHICS_TEXTURE_WRAP_Repeat:
		{
			gchar* _tmp1_ = NULL;
			_tmp1_ = g_strdup ("Repeat");
			result = _tmp1_;
			return result;
		}
		default:
		{
			gchar* _tmp2_ = NULL;
			gchar* _tmp3_ = NULL;
			gchar* _tmp4_ = NULL;
			gchar* _tmp5_ = NULL;
			gchar* _tmp6_ = NULL;
			gchar* _tmp7_ = NULL;
			GError* _tmp8_ = NULL;
			GError* _tmp9_ = NULL;
			_tmp2_ = sdx_graphics_texture_wrap_to_string (self);
			_tmp3_ = _tmp2_;
			_tmp4_ = g_strconcat ("TextureWrap.to_string[", _tmp3_, NULL);
			_tmp5_ = _tmp4_;
			_tmp6_ = g_strconcat (_tmp5_, "]", NULL);
			_tmp7_ = _tmp6_;
			_tmp8_ = g_error_new_literal (SDX_SDL_EXCEPTION, SDX_SDL_EXCEPTION_NotReached, _tmp7_);
			_tmp9_ = _tmp8_;
			_g_free0 (_tmp7_);
			_g_free0 (_tmp5_);
			_g_free0 (_tmp3_);
			_inner_error_ = _tmp9_;
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
}


GType sdx_graphics_texture_wrap_get_type (void) {
	static volatile gsize sdx_graphics_texture_wrap_type_id__volatile = 0;
	if (g_once_init_enter (&sdx_graphics_texture_wrap_type_id__volatile)) {
		static const GEnumValue values[] = {{SDX_GRAPHICS_TEXTURE_WRAP_ClampToEdge, "SDX_GRAPHICS_TEXTURE_WRAP_ClampToEdge", "clamptoedge"}, {SDX_GRAPHICS_TEXTURE_WRAP_Repeat, "SDX_GRAPHICS_TEXTURE_WRAP_Repeat", "repeat"}, {0, NULL, NULL}};
		GType sdx_graphics_texture_wrap_type_id;
		sdx_graphics_texture_wrap_type_id = g_enum_register_static ("sdxgraphicsTextureWrap", values);
		g_once_init_leave (&sdx_graphics_texture_wrap_type_id__volatile, sdx_graphics_texture_wrap_type_id);
	}
	return sdx_graphics_texture_wrap_type_id__volatile;
}


sdxgraphicsFormat sdx_graphics_format_from (const gchar* value) {
	sdxgraphicsFormat result = 0;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	GQuark _tmp3_ = 0U;
	static GQuark _tmp2_label0 = 0;
	static GQuark _tmp2_label1 = 0;
	static GQuark _tmp2_label2 = 0;
	static GQuark _tmp2_label3 = 0;
	static GQuark _tmp2_label4 = 0;
	static GQuark _tmp2_label5 = 0;
	static GQuark _tmp2_label6 = 0;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (value != NULL, 0);
	_tmp0_ = value;
	_tmp1_ = _tmp0_;
	_tmp3_ = (NULL == _tmp1_) ? 0 : g_quark_from_string (_tmp1_);
	if (_tmp3_ == ((0 != _tmp2_label0) ? _tmp2_label0 : (_tmp2_label0 = g_quark_from_static_string ("Alpha")))) {
		switch (0) {
			default:
			{
				result = SDX_GRAPHICS_FORMAT_Alpha;
				return result;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label1) ? _tmp2_label1 : (_tmp2_label1 = g_quark_from_static_string ("Intensity")))) {
		switch (0) {
			default:
			{
				result = SDX_GRAPHICS_FORMAT_Intensity;
				return result;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label2) ? _tmp2_label2 : (_tmp2_label2 = g_quark_from_static_string ("LuminanceAlpha")))) {
		switch (0) {
			default:
			{
				result = SDX_GRAPHICS_FORMAT_LuminanceAlpha;
				return result;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label3) ? _tmp2_label3 : (_tmp2_label3 = g_quark_from_static_string ("RGB565")))) {
		switch (0) {
			default:
			{
				result = SDX_GRAPHICS_FORMAT_RGB565;
				return result;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label4) ? _tmp2_label4 : (_tmp2_label4 = g_quark_from_static_string ("RGBA4444")))) {
		switch (0) {
			default:
			{
				result = SDX_GRAPHICS_FORMAT_RGBA4444;
				return result;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label5) ? _tmp2_label5 : (_tmp2_label5 = g_quark_from_static_string ("RGB888")))) {
		switch (0) {
			default:
			{
				result = SDX_GRAPHICS_FORMAT_RGB888;
				return result;
			}
		}
	} else if (_tmp3_ == ((0 != _tmp2_label6) ? _tmp2_label6 : (_tmp2_label6 = g_quark_from_static_string ("RGBA8888")))) {
		switch (0) {
			default:
			{
				result = SDX_GRAPHICS_FORMAT_RGBA8888;
				return result;
			}
		}
	} else {
		switch (0) {
			default:
			{
				const gchar* _tmp4_ = NULL;
				gchar* _tmp5_ = NULL;
				gchar* _tmp6_ = NULL;
				gchar* _tmp7_ = NULL;
				gchar* _tmp8_ = NULL;
				GError* _tmp9_ = NULL;
				GError* _tmp10_ = NULL;
				_tmp4_ = value;
				_tmp5_ = g_strconcat ("Format.from[", _tmp4_, NULL);
				_tmp6_ = _tmp5_;
				_tmp7_ = g_strconcat (_tmp6_, "]", NULL);
				_tmp8_ = _tmp7_;
				_tmp9_ = g_error_new_literal (SDX_SDL_EXCEPTION, SDX_SDL_EXCEPTION_NotReached, _tmp8_);
				_tmp10_ = _tmp9_;
				_g_free0 (_tmp8_);
				_g_free0 (_tmp6_);
				_inner_error_ = _tmp10_;
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return 0;
			}
		}
	}
}


gchar* sdx_graphics_format_to_string (sdxgraphicsFormat self) {
	gchar* result = NULL;
	GError * _inner_error_ = NULL;
	switch (self) {
		case SDX_GRAPHICS_FORMAT_Alpha:
		{
			gchar* _tmp0_ = NULL;
			_tmp0_ = g_strdup ("Alpha");
			result = _tmp0_;
			return result;
		}
		case SDX_GRAPHICS_FORMAT_Intensity:
		{
			gchar* _tmp1_ = NULL;
			_tmp1_ = g_strdup ("Intensity");
			result = _tmp1_;
			return result;
		}
		case SDX_GRAPHICS_FORMAT_LuminanceAlpha:
		{
			gchar* _tmp2_ = NULL;
			_tmp2_ = g_strdup ("LuminanceAlpha");
			result = _tmp2_;
			return result;
		}
		case SDX_GRAPHICS_FORMAT_RGB565:
		{
			gchar* _tmp3_ = NULL;
			_tmp3_ = g_strdup ("RGB565");
			result = _tmp3_;
			return result;
		}
		case SDX_GRAPHICS_FORMAT_RGBA4444:
		{
			gchar* _tmp4_ = NULL;
			_tmp4_ = g_strdup ("RGBA4444");
			result = _tmp4_;
			return result;
		}
		case SDX_GRAPHICS_FORMAT_RGB888:
		{
			gchar* _tmp5_ = NULL;
			_tmp5_ = g_strdup ("RGB888");
			result = _tmp5_;
			return result;
		}
		case SDX_GRAPHICS_FORMAT_RGBA8888:
		{
			gchar* _tmp6_ = NULL;
			_tmp6_ = g_strdup ("RGBA8888");
			result = _tmp6_;
			return result;
		}
		default:
		{
			gchar* _tmp7_ = NULL;
			gchar* _tmp8_ = NULL;
			gchar* _tmp9_ = NULL;
			gchar* _tmp10_ = NULL;
			gchar* _tmp11_ = NULL;
			gchar* _tmp12_ = NULL;
			GError* _tmp13_ = NULL;
			GError* _tmp14_ = NULL;
			_tmp7_ = sdx_graphics_format_to_string (self);
			_tmp8_ = _tmp7_;
			_tmp9_ = g_strconcat ("Format.to_string[", _tmp8_, NULL);
			_tmp10_ = _tmp9_;
			_tmp11_ = g_strconcat (_tmp10_, "]", NULL);
			_tmp12_ = _tmp11_;
			_tmp13_ = g_error_new_literal (SDX_SDL_EXCEPTION, SDX_SDL_EXCEPTION_NotReached, _tmp12_);
			_tmp14_ = _tmp13_;
			_g_free0 (_tmp12_);
			_g_free0 (_tmp10_);
			_g_free0 (_tmp8_);
			_inner_error_ = _tmp14_;
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
}


GType sdx_graphics_format_get_type (void) {
	static volatile gsize sdx_graphics_format_type_id__volatile = 0;
	if (g_once_init_enter (&sdx_graphics_format_type_id__volatile)) {
		static const GEnumValue values[] = {{SDX_GRAPHICS_FORMAT_Alpha, "SDX_GRAPHICS_FORMAT_Alpha", "alpha"}, {SDX_GRAPHICS_FORMAT_Intensity, "SDX_GRAPHICS_FORMAT_Intensity", "intensity"}, {SDX_GRAPHICS_FORMAT_LuminanceAlpha, "SDX_GRAPHICS_FORMAT_LuminanceAlpha", "luminancealpha"}, {SDX_GRAPHICS_FORMAT_RGB565, "SDX_GRAPHICS_FORMAT_RGB565", "rgb565"}, {SDX_GRAPHICS_FORMAT_RGBA4444, "SDX_GRAPHICS_FORMAT_RGBA4444", "rgba4444"}, {SDX_GRAPHICS_FORMAT_RGB888, "SDX_GRAPHICS_FORMAT_RGB888", "rgb888"}, {SDX_GRAPHICS_FORMAT_RGBA8888, "SDX_GRAPHICS_FORMAT_RGBA8888", "rgba8888"}, {0, NULL, NULL}};
		GType sdx_graphics_format_type_id;
		sdx_graphics_format_type_id = g_enum_register_static ("sdxgraphicsFormat", values);
		g_once_init_leave (&sdx_graphics_format_type_id__volatile, sdx_graphics_format_type_id);
	}
	return sdx_graphics_format_type_id__volatile;
}


