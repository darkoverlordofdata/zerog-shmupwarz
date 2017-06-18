/* Camera.c generated by valac 0.34.8, the Vala compiler
 * generated from Camera.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <float.h>
#include <math.h>

typedef struct _sdxgraphicsCamera sdxgraphicsCamera;

#define SDX_GRAPHICS_CAMERA_TYPE_KIND (sdx_graphics_camera_kind_get_type ())

#define SDX_MATH_TYPE_VECTOR2 (sdx_math_vector2_get_type ())
typedef struct _sdxmathVector2 sdxmathVector2;
typedef sdxgraphicsCamera sdxgraphicsCameraInnerCamera;
typedef sdxgraphicsCamera sdxgraphicsCameraFluidCamera;
typedef sdxgraphicsCamera sdxgraphicsCameraSimpleCamera;

typedef enum  {
	SDX_GRAPHICS_CAMERA_KIND_FluidCamera,
	SDX_GRAPHICS_CAMERA_KIND_InnerCamera,
	SDX_GRAPHICS_CAMERA_KIND_SimpleCamera
} sdxgraphicsCameraKind;

struct _sdxmathVector2 {
	gfloat x;
	gfloat y;
};

typedef void (*sdxgraphicsCameraCameraSetPosition) (sdxmathVector2* position, void* user_data);
struct _sdxgraphicsCamera {
	gint _retainCount;
	sdxgraphicsCameraKind kind;
	sdxmathVector2 position;
	sdxgraphicsCameraCameraSetPosition setPosition;
	gpointer setPosition_target;
	GDestroyNotify setPosition_target_destroy_notify;
};


extern gint sdx_width;

void sdx_graphics_camera_free (sdxgraphicsCamera* self);
GType sdx_graphics_camera_kind_get_type (void) G_GNUC_CONST;
GType sdx_math_vector2_get_type (void) G_GNUC_CONST;
sdxmathVector2* sdx_math_vector2_dup (const sdxmathVector2* self);
void sdx_math_vector2_free (sdxmathVector2* self);
static void sdx_graphics_camera_instance_init (sdxgraphicsCamera * self);
static void _sdx_graphics_camera_set_position_lambda20_ (sdxmathVector2* position);
static void __sdx_graphics_camera_set_position_lambda20__sdxgraphics_camera_camera_set_position (sdxmathVector2* position, gpointer self);
sdxgraphicsCamera* sdx_graphics_camera_retain (sdxgraphicsCamera* self);
void sdx_graphics_camera_release (sdxgraphicsCamera* self);
void sdx_graphics_camera_free (sdxgraphicsCamera* self);
sdxgraphicsCamera* sdx_graphics_camera_new (void);
sdxgraphicsCameraInnerCamera* sdx_graphics_camera_inner_camera_new (gfloat x, gfloat y);
static void __lambda21_ (sdxgraphicsCameraInnerCamera* self, sdxmathVector2* player);
gfloat sdx_math_clamp (gfloat value, gfloat low, gfloat hi);
static void ___lambda21__sdxgraphics_camera_camera_set_position (sdxmathVector2* position, gpointer self);
sdxgraphicsCameraFluidCamera* sdx_graphics_camera_fluid_camera_new (gfloat x, gfloat y);
static void __lambda22_ (sdxgraphicsCameraFluidCamera* self, sdxmathVector2* player);
static void ___lambda22__sdxgraphics_camera_camera_set_position (sdxmathVector2* position, gpointer self);
sdxgraphicsCameraSimpleCamera* sdx_graphics_camera_simple_camera_new (gfloat x, gfloat y);
static void __lambda23_ (sdxgraphicsCameraSimpleCamera* self, sdxmathVector2* player);
static void ___lambda23__sdxgraphics_camera_camera_set_position (sdxmathVector2* position, gpointer self);


GType sdx_graphics_camera_kind_get_type (void) {
	static volatile gsize sdx_graphics_camera_kind_type_id__volatile = 0;
	if (g_once_init_enter (&sdx_graphics_camera_kind_type_id__volatile)) {
		static const GEnumValue values[] = {{SDX_GRAPHICS_CAMERA_KIND_FluidCamera, "SDX_GRAPHICS_CAMERA_KIND_FluidCamera", "fluidcamera"}, {SDX_GRAPHICS_CAMERA_KIND_InnerCamera, "SDX_GRAPHICS_CAMERA_KIND_InnerCamera", "innercamera"}, {SDX_GRAPHICS_CAMERA_KIND_SimpleCamera, "SDX_GRAPHICS_CAMERA_KIND_SimpleCamera", "simplecamera"}, {0, NULL, NULL}};
		GType sdx_graphics_camera_kind_type_id;
		sdx_graphics_camera_kind_type_id = g_enum_register_static ("sdxgraphicsCameraKind", values);
		g_once_init_leave (&sdx_graphics_camera_kind_type_id__volatile, sdx_graphics_camera_kind_type_id);
	}
	return sdx_graphics_camera_kind_type_id__volatile;
}


static void _sdx_graphics_camera_set_position_lambda20_ (sdxmathVector2* position) {
	g_return_if_fail (position != NULL);
}


static void __sdx_graphics_camera_set_position_lambda20__sdxgraphics_camera_camera_set_position (sdxmathVector2* position, gpointer self) {
	_sdx_graphics_camera_set_position_lambda20_ (position);
}


sdxgraphicsCamera* sdx_graphics_camera_retain (sdxgraphicsCamera* self) {
	sdxgraphicsCamera* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_atomic_int_add ((volatile gint *) (&self->_retainCount), 1);
	result = self;
	return result;
}


void sdx_graphics_camera_release (sdxgraphicsCamera* self) {
	gboolean _tmp0_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_atomic_int_dec_and_test ((volatile gint *) (&self->_retainCount));
	if (_tmp0_) {
		sdx_graphics_camera_free (self);
	}
}


sdxgraphicsCamera* sdx_graphics_camera_new (void) {
	sdxgraphicsCamera* self;
	self = g_slice_new0 (sdxgraphicsCamera);
	sdx_graphics_camera_instance_init (self);
	return self;
}


/**
             * InnerCamera
             * 
             */
static void __lambda21_ (sdxgraphicsCameraInnerCamera* self, sdxmathVector2* player) {
	gfloat area = 0.0F;
	sdxmathVector2 _tmp0_ = {0};
	gfloat _tmp1_ = 0.0F;
	gint _tmp2_ = 0;
	sdxmathVector2 _tmp3_ = {0};
	gfloat _tmp4_ = 0.0F;
	gfloat _tmp5_ = 0.0F;
	sdxmathVector2 _tmp6_ = {0};
	gfloat _tmp7_ = 0.0F;
	sdxmathVector2 _tmp8_ = {0};
	g_return_if_fail (player != NULL);
	_tmp0_ = *player;
	_tmp1_ = _tmp0_.x;
	_tmp2_ = sdx_width;
	area = _tmp1_ - (((gfloat) _tmp2_) / 2);
	_tmp3_ = ((sdxgraphicsCamera*) self)->position;
	_tmp4_ = _tmp3_.x;
	_tmp5_ = sdx_math_clamp (_tmp4_, area - 100, area + 100);
	_tmp6_ = ((sdxgraphicsCamera*) self)->position;
	_tmp7_ = _tmp6_.y;
	_tmp8_.x = _tmp5_;
	_tmp8_.y = _tmp7_;
	((sdxgraphicsCamera*) self)->position = _tmp8_;
}


static void ___lambda21__sdxgraphics_camera_camera_set_position (sdxmathVector2* position, gpointer self) {
	__lambda21_ ((sdxgraphicsCameraInnerCamera*) self, position);
}


sdxgraphicsCameraInnerCamera* sdx_graphics_camera_inner_camera_new (gfloat x, gfloat y) {
	sdxgraphicsCameraInnerCamera* self;
	gfloat _tmp0_ = 0.0F;
	gfloat _tmp1_ = 0.0F;
	sdxmathVector2 _tmp2_ = {0};
	self = (sdxgraphicsCameraInnerCamera*) sdx_graphics_camera_new ();
	((sdxgraphicsCamera*) self)->kind = SDX_GRAPHICS_CAMERA_KIND_InnerCamera;
	_tmp0_ = x;
	_tmp1_ = y;
	_tmp2_.x = _tmp0_;
	_tmp2_.y = _tmp1_;
	((sdxgraphicsCamera*) self)->position = _tmp2_;
	(((sdxgraphicsCamera*) self)->setPosition_target_destroy_notify == NULL) ? NULL : (((sdxgraphicsCamera*) self)->setPosition_target_destroy_notify (((sdxgraphicsCamera*) self)->setPosition_target), NULL);
	((sdxgraphicsCamera*) self)->setPosition = NULL;
	((sdxgraphicsCamera*) self)->setPosition_target = NULL;
	((sdxgraphicsCamera*) self)->setPosition_target_destroy_notify = NULL;
	((sdxgraphicsCamera*) self)->setPosition = ___lambda21__sdxgraphics_camera_camera_set_position;
	((sdxgraphicsCamera*) self)->setPosition_target = sdx_graphics_camera_retain (self);
	((sdxgraphicsCamera*) self)->setPosition_target_destroy_notify = sdx_graphics_camera_release;
	return self;
}


/**
             * FluidCamera
             * 
             */
static void __lambda22_ (sdxgraphicsCameraFluidCamera* self, sdxmathVector2* player) {
	gfloat dist = 0.0F;
	sdxmathVector2 _tmp0_ = {0};
	gfloat _tmp1_ = 0.0F;
	sdxmathVector2 _tmp2_ = {0};
	gfloat _tmp3_ = 0.0F;
	gint _tmp4_ = 0;
	gfloat _tmp5_ = 0.0F;
	gfloat _tmp6_ = 0.0F;
	sdxmathVector2 _tmp7_ = {0};
	gfloat _tmp8_ = 0.0F;
	sdxmathVector2 _tmp9_ = {0};
	g_return_if_fail (player != NULL);
	_tmp0_ = ((sdxgraphicsCamera*) self)->position;
	_tmp1_ = _tmp0_.x;
	_tmp2_ = *player;
	_tmp3_ = _tmp2_.x;
	_tmp4_ = sdx_width;
	dist = (_tmp1_ - _tmp3_) + (((gfloat) _tmp4_) / 2);
	_tmp5_ = ((sdxgraphicsCamera*) self)->position.x;
	((sdxgraphicsCamera*) self)->position.x = _tmp5_ + ((-0.05f) * dist);
	_tmp6_ = ((sdxgraphicsCamera*) self)->position.x;
	_tmp7_ = ((sdxgraphicsCamera*) self)->position;
	_tmp8_ = _tmp7_.y;
	_tmp9_.x = _tmp6_;
	_tmp9_.y = _tmp8_;
	((sdxgraphicsCamera*) self)->position = _tmp9_;
}


static void ___lambda22__sdxgraphics_camera_camera_set_position (sdxmathVector2* position, gpointer self) {
	__lambda22_ ((sdxgraphicsCameraFluidCamera*) self, position);
}


sdxgraphicsCameraFluidCamera* sdx_graphics_camera_fluid_camera_new (gfloat x, gfloat y) {
	sdxgraphicsCameraFluidCamera* self;
	gfloat _tmp0_ = 0.0F;
	gfloat _tmp1_ = 0.0F;
	sdxmathVector2 _tmp2_ = {0};
	self = (sdxgraphicsCameraFluidCamera*) sdx_graphics_camera_new ();
	((sdxgraphicsCamera*) self)->kind = SDX_GRAPHICS_CAMERA_KIND_FluidCamera;
	_tmp0_ = x;
	_tmp1_ = y;
	_tmp2_.x = _tmp0_;
	_tmp2_.y = _tmp1_;
	((sdxgraphicsCamera*) self)->position = _tmp2_;
	(((sdxgraphicsCamera*) self)->setPosition_target_destroy_notify == NULL) ? NULL : (((sdxgraphicsCamera*) self)->setPosition_target_destroy_notify (((sdxgraphicsCamera*) self)->setPosition_target), NULL);
	((sdxgraphicsCamera*) self)->setPosition = NULL;
	((sdxgraphicsCamera*) self)->setPosition_target = NULL;
	((sdxgraphicsCamera*) self)->setPosition_target_destroy_notify = NULL;
	((sdxgraphicsCamera*) self)->setPosition = ___lambda22__sdxgraphics_camera_camera_set_position;
	((sdxgraphicsCamera*) self)->setPosition_target = sdx_graphics_camera_retain (self);
	((sdxgraphicsCamera*) self)->setPosition_target_destroy_notify = sdx_graphics_camera_release;
	return self;
}


/**
             * SimpleCamera
             * 
             */
static void __lambda23_ (sdxgraphicsCameraSimpleCamera* self, sdxmathVector2* player) {
	sdxmathVector2 _tmp0_ = {0};
	gfloat _tmp1_ = 0.0F;
	gint _tmp2_ = 0;
	sdxmathVector2 _tmp3_ = {0};
	gfloat _tmp4_ = 0.0F;
	sdxmathVector2 _tmp5_ = {0};
	g_return_if_fail (player != NULL);
	_tmp0_ = *player;
	_tmp1_ = _tmp0_.x;
	_tmp2_ = sdx_width;
	_tmp3_ = ((sdxgraphicsCamera*) self)->position;
	_tmp4_ = _tmp3_.y;
	_tmp5_.x = _tmp1_ - (((gfloat) _tmp2_) / 2);
	_tmp5_.y = _tmp4_;
	((sdxgraphicsCamera*) self)->position = _tmp5_;
}


static void ___lambda23__sdxgraphics_camera_camera_set_position (sdxmathVector2* position, gpointer self) {
	__lambda23_ ((sdxgraphicsCameraSimpleCamera*) self, position);
}


sdxgraphicsCameraSimpleCamera* sdx_graphics_camera_simple_camera_new (gfloat x, gfloat y) {
	sdxgraphicsCameraSimpleCamera* self;
	gfloat _tmp0_ = 0.0F;
	gfloat _tmp1_ = 0.0F;
	sdxmathVector2 _tmp2_ = {0};
	self = (sdxgraphicsCameraSimpleCamera*) sdx_graphics_camera_new ();
	((sdxgraphicsCamera*) self)->kind = SDX_GRAPHICS_CAMERA_KIND_SimpleCamera;
	_tmp0_ = x;
	_tmp1_ = y;
	_tmp2_.x = _tmp0_;
	_tmp2_.y = _tmp1_;
	((sdxgraphicsCamera*) self)->position = _tmp2_;
	(((sdxgraphicsCamera*) self)->setPosition_target_destroy_notify == NULL) ? NULL : (((sdxgraphicsCamera*) self)->setPosition_target_destroy_notify (((sdxgraphicsCamera*) self)->setPosition_target), NULL);
	((sdxgraphicsCamera*) self)->setPosition = NULL;
	((sdxgraphicsCamera*) self)->setPosition_target = NULL;
	((sdxgraphicsCamera*) self)->setPosition_target_destroy_notify = NULL;
	((sdxgraphicsCamera*) self)->setPosition = ___lambda23__sdxgraphics_camera_camera_set_position;
	((sdxgraphicsCamera*) self)->setPosition_target = sdx_graphics_camera_retain (self);
	((sdxgraphicsCamera*) self)->setPosition_target_destroy_notify = sdx_graphics_camera_release;
	return self;
}


static void sdx_graphics_camera_instance_init (sdxgraphicsCamera * self) {
	self->_retainCount = 1;
	self->setPosition = __sdx_graphics_camera_set_position_lambda20__sdxgraphics_camera_camera_set_position;
	self->setPosition_target = self;
	self->setPosition_target_destroy_notify = NULL;
}


void sdx_graphics_camera_free (sdxgraphicsCamera* self) {
	(self->setPosition_target_destroy_notify == NULL) ? NULL : (self->setPosition_target_destroy_notify (self->setPosition_target), NULL);
	self->setPosition = NULL;
	self->setPosition_target = NULL;
	self->setPosition_target_destroy_notify = NULL;
	g_slice_free (sdxgraphicsCamera, self);
}


