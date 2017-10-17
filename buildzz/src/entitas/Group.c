/** updated by adriac */
/* Group.c generated by valac 0.34.9, the Vala compiler
 * generated from Group.vala, do not modify */

/* ******************************************************************************
 *# MIT License
 *
 * Copyright (c) 2015-2017 Bruce Davidson &lt;darkoverlordofdata@gmail.com&gt;
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * 'Software'), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>
#include <SDL2/SDL_rect.h>

typedef struct _EntitasGroup EntitasGroup;

#define ENTITAS_TYPE_ENTITY (entitas_entity_get_type ())

#define ENTITAS_TYPE_TRANSFORM (entitas_transform_get_type ())

#define SDX_MATH_TYPE_VECTOR2 (sdx_math_vector2_get_type ())
typedef struct _SdxMathVector2 SdxMathVector2;
typedef struct _SdxGraphicsSprite SdxGraphicsSprite;
typedef struct _EntitasTransform EntitasTransform;
typedef struct _EntitasEventEntityChanged EntitasEventEntityChanged;
typedef struct _EntitasEventEntityReleased EntitasEventEntityReleased;
typedef struct _EntitasEventComponentReplaced EntitasEventComponentReplaced;

#define ENTITAS_TYPE_BACKGROUND (entitas_background_get_type ())
typedef struct _EntitasBackground EntitasBackground;

#define ENTITAS_TYPE_BULLET (entitas_bullet_get_type ())
typedef struct _EntitasBullet EntitasBullet;

#define ENTITAS_TYPE_ENEMY1 (entitas_enemy1_get_type ())
typedef struct _EntitasEnemy1 EntitasEnemy1;

#define ENTITAS_TYPE_ENEMY2 (entitas_enemy2_get_type ())
typedef struct _EntitasEnemy2 EntitasEnemy2;

#define ENTITAS_TYPE_ENEMY3 (entitas_enemy3_get_type ())
typedef struct _EntitasEnemy3 EntitasEnemy3;

#define ENTITAS_TYPE_EXPIRES (entitas_expires_get_type ())
typedef struct _EntitasExpires EntitasExpires;

#define ENTITAS_TYPE_HEALTH (entitas_health_get_type ())
typedef struct _EntitasHealth EntitasHealth;

#define ENTITAS_TYPE_HUD (entitas_hud_get_type ())
typedef struct _EntitasHud EntitasHud;

#define ENTITAS_TYPE_LAYER (entitas_layer_get_type ())
typedef struct _EntitasLayer EntitasLayer;

#define ENTITAS_TYPE_PLAYER (entitas_player_get_type ())
typedef struct _EntitasPlayer EntitasPlayer;

#define ENTITAS_TYPE_SHOW (entitas_show_get_type ())
typedef struct _EntitasShow EntitasShow;

#define ENTITAS_TYPE_SOUND (entitas_sound_get_type ())
typedef struct _SdxAudioSound SdxAudioSound;
typedef struct _EntitasSound EntitasSound;

#define ENTITAS_TYPE_TEXT (entitas_text_get_type ())
typedef SdxGraphicsSprite SdxGraphicsSpriteTextSprite;
typedef struct _EntitasText EntitasText;

#define ENTITAS_TYPE_TINT (entitas_tint_get_type ())
typedef struct _EntitasTint EntitasTint;

#define ENTITAS_TYPE_TWEEN (entitas_tween_get_type ())
typedef struct _EntitasTween EntitasTween;

#define ENTITAS_TYPE_VELOCITY (entitas_velocity_get_type ())
typedef struct _EntitasVelocity EntitasVelocity;
typedef struct _EntitasEntity EntitasEntity;
typedef struct _EntitasMatcher EntitasMatcher;
typedef struct _EntitasEventGroupChanged EntitasEventGroupChanged;
typedef struct _EntitasEventGroupUpdated EntitasEventGroupUpdated;
#define _g_list_free0(var) ((var == NULL) ? NULL : (var = (g_list_free (var), NULL)))
// symtbl.1 entitas_matcher
void entitas_matcher_release (EntitasMatcher* self);
void entitas_matcher_free (EntitasMatcher* self);
EntitasMatcher* entitas_matcher_retain (EntitasMatcher* self);
#define _entitas_matcher_release0(var) ((var == NULL) ? NULL : (var = (entitas_matcher_release (var), NULL)))
// symtbl.1 entitas_event_group_changed
void entitas_event_group_changed_release (EntitasEventGroupChanged* self);
void entitas_event_group_changed_free (EntitasEventGroupChanged* self);
EntitasEventGroupChanged* entitas_event_group_changed_retain (EntitasEventGroupChanged* self);
#define _entitas_event_group_changed_release0(var) ((var == NULL) ? NULL : (var = (entitas_event_group_changed_release (var), NULL)))
// symtbl.1 entitas_event_group_updated
void entitas_event_group_updated_release (EntitasEventGroupUpdated* self);
void entitas_event_group_updated_free (EntitasEventGroupUpdated* self);
EntitasEventGroupUpdated* entitas_event_group_updated_retain (EntitasEventGroupUpdated* self);
#define _entitas_event_group_updated_release0(var) ((var == NULL) ? NULL : (var = (entitas_event_group_updated_release (var), NULL)))
typedef struct _EntitasEventGroupChangedListener EntitasEventGroupChangedListener;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _SdxMathVector2 {
	gfloat x;
	gfloat y;
};

struct _EntitasTransform {
	SdxMathVector2* scale;
	SdxMathVector2* position;
	SDL_Rect* aabb;
	SdxGraphicsSprite* sprite;
};

struct _EntitasBackground {
	gboolean active;
};

struct _EntitasBullet {
	gboolean active;
};

struct _EntitasEnemy1 {
	gboolean active;
};

struct _EntitasEnemy2 {
	gboolean active;
};

struct _EntitasEnemy3 {
	gboolean active;
};

struct _EntitasExpires {
	gfloat value;
};

struct _EntitasHealth {
	gfloat current;
	gfloat maximum;
};

struct _EntitasHud {
	gboolean active;
};

struct _EntitasLayer {
	gint value;
};

struct _EntitasPlayer {
	gboolean active;
};

struct _EntitasShow {
	gboolean active;
};

struct _EntitasSound {
	SdxAudioSound* sound;
};

struct _EntitasText {
	gchar* text;
	SdxGraphicsSpriteTextSprite* sprite;
};

struct _EntitasTint {
	gint r;
	gint g;
	gint b;
	gint a;
};

struct _EntitasTween {
	gfloat min;
	gfloat max;
	gfloat speed;
	gboolean repeat;
	gboolean active;
};

struct _EntitasVelocity {
	gfloat x;
	gfloat y;
};

struct _EntitasEntity {
	gint id;
	gchar* name;
	gint pool;
	guint64 mask;
	EntitasTransform transform;
	EntitasEventEntityChanged* onComponentAdded;
	EntitasEventEntityChanged* onComponentRemoved;
	EntitasEventEntityReleased* onEntityReleased;
	EntitasEventComponentReplaced* onComponentReplaced;
	EntitasBackground* background;
	EntitasBullet* bullet;
	EntitasEnemy1* enemy1;
	EntitasEnemy2* enemy2;
	EntitasEnemy3* enemy3;
	EntitasExpires* expires;
	EntitasHealth* health;
	EntitasHud* hud;
	EntitasLayer* layer;
	EntitasPlayer* player;
	EntitasShow* show;
	EntitasSound* sound;
	EntitasText* text;
	EntitasTint* tint;
	EntitasTween* tween;
	EntitasVelocity* velocity;
};

struct _EntitasGroup {
	gint ref_count;
	GList* entities;
	EntitasMatcher* matcher;
	EntitasEventGroupChanged* onEntityAdded;
	EntitasEventGroupChanged* onEntityRemoved;
	EntitasEventGroupUpdated* onEntityUpdated;
};

typedef void (*EntitasEventGroupChangedHandler) (EntitasGroup* g, EntitasEntity* e, gint index, void* component, void* user_data);
struct _EntitasEventGroupChanged {
	gint ref_count;
	GPtrArray* listeners;
	EntitasEventGroupChangedHandler Dispatch;
	gpointer Dispatch_target;
	GDestroyNotify Dispatch_target_destroy_notify;
};

typedef enum  {
	ENTITAS_EXCEPTION_EntityIsNotEnabled,
	ENTITAS_EXCEPTION_EntityAlreadyHasComponent,
	ENTITAS_EXCEPTION_EntityDoesNotHaveComponent,
	ENTITAS_EXCEPTION_InvalidMatcherExpression,
	ENTITAS_EXCEPTION_EntityIsAlreadyReleased,
	ENTITAS_EXCEPTION_SingleEntity,
	ENTITAS_EXCEPTION_WorldDoesNotContainEntity
} EntitasException;
#define ENTITAS_EXCEPTION entitas_exception_quark ()


void entitas_group_free (EntitasGroup* self);
GType entitas_entity_get_type (void) G_GNUC_CONST;
GType entitas_transform_get_type (void) G_GNUC_CONST;
GType sdx_math_vector2_get_type (void) G_GNUC_CONST;
SdxMathVector2* sdx_math_vector2_dup (const SdxMathVector2* self);
void sdx_math_vector2_free (SdxMathVector2* self);
void sdx_graphics_sprite_free (SdxGraphicsSprite* self);
EntitasTransform* entitas_transform_dup (const EntitasTransform* self);
void entitas_transform_free (EntitasTransform* self);
void entitas_transform_copy (const EntitasTransform* self, EntitasTransform* dest);
void entitas_transform_destroy (EntitasTransform* self);
void entitas_event_entity_changed_free (EntitasEventEntityChanged* self);
void entitas_event_entity_released_free (EntitasEventEntityReleased* self);
void entitas_event_component_replaced_free (EntitasEventComponentReplaced* self);
GType entitas_background_get_type (void) G_GNUC_CONST;
EntitasBackground* entitas_background_dup (const EntitasBackground* self);
void entitas_background_free (EntitasBackground* self);
GType entitas_bullet_get_type (void) G_GNUC_CONST;
EntitasBullet* entitas_bullet_dup (const EntitasBullet* self);
void entitas_bullet_free (EntitasBullet* self);
GType entitas_enemy1_get_type (void) G_GNUC_CONST;
EntitasEnemy1* entitas_enemy1_dup (const EntitasEnemy1* self);
void entitas_enemy1_free (EntitasEnemy1* self);
GType entitas_enemy2_get_type (void) G_GNUC_CONST;
EntitasEnemy2* entitas_enemy2_dup (const EntitasEnemy2* self);
void entitas_enemy2_free (EntitasEnemy2* self);
GType entitas_enemy3_get_type (void) G_GNUC_CONST;
EntitasEnemy3* entitas_enemy3_dup (const EntitasEnemy3* self);
void entitas_enemy3_free (EntitasEnemy3* self);
GType entitas_expires_get_type (void) G_GNUC_CONST;
EntitasExpires* entitas_expires_dup (const EntitasExpires* self);
void entitas_expires_free (EntitasExpires* self);
GType entitas_health_get_type (void) G_GNUC_CONST;
EntitasHealth* entitas_health_dup (const EntitasHealth* self);
void entitas_health_free (EntitasHealth* self);
GType entitas_hud_get_type (void) G_GNUC_CONST;
EntitasHud* entitas_hud_dup (const EntitasHud* self);
void entitas_hud_free (EntitasHud* self);
GType entitas_layer_get_type (void) G_GNUC_CONST;
EntitasLayer* entitas_layer_dup (const EntitasLayer* self);
void entitas_layer_free (EntitasLayer* self);
GType entitas_player_get_type (void) G_GNUC_CONST;
EntitasPlayer* entitas_player_dup (const EntitasPlayer* self);
void entitas_player_free (EntitasPlayer* self);
GType entitas_show_get_type (void) G_GNUC_CONST;
EntitasShow* entitas_show_dup (const EntitasShow* self);
void entitas_show_free (EntitasShow* self);
GType entitas_sound_get_type (void) G_GNUC_CONST;
void sdx_audio_sound_free (SdxAudioSound* self);
EntitasSound* entitas_sound_dup (const EntitasSound* self);
void entitas_sound_free (EntitasSound* self);
void entitas_sound_copy (const EntitasSound* self, EntitasSound* dest);
void entitas_sound_destroy (EntitasSound* self);
GType entitas_text_get_type (void) G_GNUC_CONST;
EntitasText* entitas_text_dup (const EntitasText* self);
void entitas_text_free (EntitasText* self);
void entitas_text_copy (const EntitasText* self, EntitasText* dest);
void entitas_text_destroy (EntitasText* self);
GType entitas_tint_get_type (void) G_GNUC_CONST;
EntitasTint* entitas_tint_dup (const EntitasTint* self);
void entitas_tint_free (EntitasTint* self);
GType entitas_tween_get_type (void) G_GNUC_CONST;
EntitasTween* entitas_tween_dup (const EntitasTween* self);
void entitas_tween_free (EntitasTween* self);
GType entitas_velocity_get_type (void) G_GNUC_CONST;
EntitasVelocity* entitas_velocity_dup (const EntitasVelocity* self);
void entitas_velocity_free (EntitasVelocity* self);
EntitasEntity* entitas_entity_dup (const EntitasEntity* self);
void entitas_entity_free (EntitasEntity* self);
void entitas_entity_copy (const EntitasEntity* self, EntitasEntity* dest);
void entitas_entity_destroy (EntitasEntity* self);
void entitas_matcher_free (EntitasMatcher* self);
void entitas_event_group_changed_free (EntitasEventGroupChanged* self);
void entitas_event_group_updated_free (EntitasEventGroupUpdated* self);
static void entitas_group_instance_init (EntitasGroup * self);
EntitasGroup* entitas_group_retain (EntitasGroup* self);
void entitas_group_release (EntitasGroup* self);
void entitas_group_free (EntitasGroup* self);
// symtbl.3 EntitasGroup / entitas_group
EntitasGroup* entitas_group_retain (EntitasGroup* self);
void entitas_group_release (EntitasGroup* self);
EntitasGroup* entitas_group_new (EntitasMatcher* matcher);
// symtbl.3 EntitasEventGroupChanged / entitas_event_group_changed
EntitasEventGroupChanged* entitas_event_group_changed_retain (EntitasEventGroupChanged* self);
void entitas_event_group_changed_release (EntitasEventGroupChanged* self);
EntitasEventGroupChanged* entitas_event_group_changed_new (void);
// symtbl.3 EntitasEventGroupUpdated / entitas_event_group_updated
EntitasEventGroupUpdated* entitas_event_group_updated_retain (EntitasEventGroupUpdated* self);
void entitas_event_group_updated_release (EntitasEventGroupUpdated* self);
EntitasEventGroupUpdated* entitas_event_group_updated_new (void);
void entitas_group_HandleEntitySilently (EntitasGroup* self, EntitasEntity* entity);
gboolean entitas_matcher_Matches (EntitasMatcher* self, EntitasEntity* entity);
void entitas_group_AddEntitySilently (EntitasGroup* self, EntitasEntity* entity);
void entitas_group_RemoveEntitySilently (EntitasGroup* self, EntitasEntity* entity);
void entitas_group_HandleEntity (EntitasGroup* self, EntitasEntity* entity, gint index, void* component);
void entitas_group_AddEntity (EntitasGroup* self, EntitasEntity* entity, gint index, void* component);
void entitas_group_RemoveEntity (EntitasGroup* self, EntitasEntity* entity, gint index, void* component);
void entitas_event_group_changed_listener_free (EntitasEventGroupChangedListener* self);
gboolean entitas_group_ContainsEntity (EntitasGroup* self, EntitasEntity* entity);
EntitasEntity* entitas_group_GetSingleEntity (EntitasGroup* self);
gchar* entitas_matcher_ToString (EntitasMatcher* self);
GQuark entitas_exception_quark (void);


EntitasGroup* entitas_group_retain (EntitasGroup* self) {
	EntitasGroup* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_atomic_int_add ((volatile gint *) (&self->ref_count), 1);
	result = self;
	return result;
}


void entitas_group_release (EntitasGroup* self) {
	gboolean _tmp0_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_atomic_int_dec_and_test ((volatile gint *) (&self->ref_count));
	if (_tmp0_) {
		entitas_group_free (self);
	}
}


static gpointer _entitas_matcher_retain0 (gpointer self) {
	return self ? entitas_matcher_retain (self) : NULL;
}


// symtbl.3 EntitasGroup / entitas_group
EntitasGroup* entitas_group_retain (EntitasGroup* self);
void entitas_group_release (EntitasGroup* self);
EntitasGroup* entitas_group_new (EntitasMatcher* matcher) {
	EntitasGroup* self;
	EntitasMatcher* _tmp0_ = NULL;
	EntitasMatcher* _tmp1_ = NULL;
	EntitasEventGroupChanged* _tmp2_ = NULL;
	EntitasEventGroupChanged* _tmp3_ = NULL;
	EntitasEventGroupUpdated* _tmp4_ = NULL;
	g_return_val_if_fail (matcher != NULL, NULL);
	self = g_slice_new0 (EntitasGroup);
	entitas_group_instance_init (self);
	_tmp0_ = matcher;
	_tmp1_ = _entitas_matcher_retain0 (_tmp0_);
	_entitas_matcher_release0 (self->matcher);
	self->matcher = _tmp1_;
	_tmp2_ = entitas_event_group_changed_new ();
	_entitas_event_group_changed_release0 (self->onEntityAdded);
	self->onEntityAdded = _tmp2_;
	_tmp3_ = entitas_event_group_changed_new ();
	_entitas_event_group_changed_release0 (self->onEntityRemoved);
	self->onEntityRemoved = _tmp3_;
	_tmp4_ = entitas_event_group_updated_new ();
	_entitas_event_group_updated_release0 (self->onEntityUpdated);
	self->onEntityUpdated = _tmp4_;
	return self;
}


/**
         * Handle adding and removing component from the entity without raising events
         * @param entity to handle events for
         */
void entitas_group_HandleEntitySilently (EntitasGroup* self, EntitasEntity* entity) {
	EntitasMatcher* _tmp0_ = NULL;
	EntitasEntity* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->matcher;
	_tmp1_ = entity;
	_tmp2_ = entitas_matcher_Matches (_tmp0_, _tmp1_);
	if (_tmp2_) {
		EntitasEntity* _tmp3_ = NULL;
		_tmp3_ = entity;
		entitas_group_AddEntitySilently (self, _tmp3_);
	} else {
		EntitasEntity* _tmp4_ = NULL;
		_tmp4_ = entity;
		entitas_group_RemoveEntitySilently (self, _tmp4_);
	}
}


/**
         * Handle adding and removing component from the entity and raisieevents
         * @param entity to handle events for
         * @param index of component
         * @param component address
         */
void entitas_group_HandleEntity (EntitasGroup* self, EntitasEntity* entity, gint index, void* component) {
	EntitasMatcher* _tmp0_ = NULL;
	EntitasEntity* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->matcher;
	_tmp1_ = entity;
	_tmp2_ = entitas_matcher_Matches (_tmp0_, _tmp1_);
	if (_tmp2_) {
		EntitasEntity* _tmp3_ = NULL;
		gint _tmp4_ = 0;
		void* _tmp5_ = NULL;
		_tmp3_ = entity;
		_tmp4_ = index;
		_tmp5_ = component;
		entitas_group_AddEntity (self, _tmp3_, _tmp4_, _tmp5_);
	} else {
		EntitasEntity* _tmp6_ = NULL;
		gint _tmp7_ = 0;
		void* _tmp8_ = NULL;
		_tmp6_ = entity;
		_tmp7_ = index;
		_tmp8_ = component;
		entitas_group_RemoveEntity (self, _tmp6_, _tmp7_, _tmp8_);
	}
}


/**
         * Add entity without raising events
         * @param entity to add to group
         */
void entitas_group_AddEntitySilently (EntitasGroup* self, EntitasEntity* entity) {
	GList* _tmp0_ = NULL;
	EntitasEntity* _tmp1_ = NULL;
	GList* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->entities;
	_tmp1_ = entity;
	_tmp2_ = g_list_find (_tmp0_, _tmp1_);
	if (_tmp2_ == NULL) {
		EntitasEntity* _tmp3_ = NULL;
		_tmp3_ = entity;
		self->entities = g_list_insert (self->entities, _tmp3_, 0);
	}
}


/**
         * Add entity and raise events
         * @param entity to add
         * @param index of component
         * @param component address
         */
void entitas_group_AddEntity (EntitasGroup* self, EntitasEntity* entity, gint index, void* component) {
	GList* _tmp0_ = NULL;
	EntitasEntity* _tmp1_ = NULL;
	GList* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->entities;
	_tmp1_ = entity;
	_tmp2_ = g_list_find (_tmp0_, _tmp1_);
	if (_tmp2_ == NULL) {
		EntitasEntity* _tmp3_ = NULL;
		EntitasEventGroupChanged* _tmp4_ = NULL;
		EntitasEventGroupChangedHandler _tmp5_ = NULL;
		void* _tmp5__target = NULL;
		EntitasEntity* _tmp6_ = NULL;
		gint _tmp7_ = 0;
		void* _tmp8_ = NULL;
		_tmp3_ = entity;
		self->entities = g_list_insert (self->entities, _tmp3_, 0);
		_tmp4_ = self->onEntityAdded;
		_tmp5_ = _tmp4_->Dispatch;
		_tmp5__target = _tmp4_->Dispatch_target;
		_tmp6_ = entity;
		_tmp7_ = index;
		_tmp8_ = component;
		_tmp5_ (self, _tmp6_, _tmp7_, _tmp8_, _tmp5__target);
	}
}


/**
         * Remove entity without raising events
         * @param entity to remove
         */
void entitas_group_RemoveEntitySilently (EntitasGroup* self, EntitasEntity* entity) {
	GList* _tmp0_ = NULL;
	EntitasEntity* _tmp1_ = NULL;
	GList* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->entities;
	_tmp1_ = entity;
	_tmp2_ = g_list_find (_tmp0_, _tmp1_);
	if (_tmp2_ != NULL) {
		EntitasEntity* _tmp3_ = NULL;
		_tmp3_ = entity;
		self->entities = g_list_remove (self->entities, _tmp3_);
	}
}


/**
         * Remove entity and raise events
         * @param entity to remove
         * @param index of component
         * @param component address
         */
void entitas_group_RemoveEntity (EntitasGroup* self, EntitasEntity* entity, gint index, void* component) {
	GList* _tmp0_ = NULL;
	EntitasEntity* _tmp1_ = NULL;
	GList* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->entities;
	_tmp1_ = entity;
	_tmp2_ = g_list_find (_tmp0_, _tmp1_);
	if (_tmp2_ != NULL) {
		EntitasEntity* _tmp3_ = NULL;
		EntitasEventGroupChanged* _tmp4_ = NULL;
		EntitasEventGroupChangedHandler _tmp5_ = NULL;
		void* _tmp5__target = NULL;
		EntitasEntity* _tmp6_ = NULL;
		gint _tmp7_ = 0;
		void* _tmp8_ = NULL;
		_tmp3_ = entity;
		self->entities = g_list_remove (self->entities, _tmp3_);
		_tmp4_ = self->onEntityRemoved;
		_tmp5_ = _tmp4_->Dispatch;
		_tmp5__target = _tmp4_->Dispatch_target;
		_tmp6_ = entity;
		_tmp7_ = index;
		_tmp8_ = component;
		_tmp5_ (self, _tmp6_, _tmp7_, _tmp8_, _tmp5__target);
	}
}


/**
         * Check if group has this entity
         *
         * @param entity to look for
         * @return boolean true if found, else false
         */
gboolean entitas_group_ContainsEntity (EntitasGroup* self, EntitasEntity* entity) {
	gboolean result = FALSE;
	GList* _tmp0_ = NULL;
	EntitasEntity* _tmp1_ = NULL;
	GList* _tmp2_ = NULL;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->entities;
	_tmp1_ = entity;
	_tmp2_ = g_list_find (_tmp0_, _tmp1_);
	result = _tmp2_ != NULL;
	return result;
}


/**
         * Gets an entity singleton.
         * If a group has more than 1 entity, this is an error condition.
         *
         * @return entitas.IEntity
         */
static GList* g_list_get_Head (GList* self) {
	GList* result;
	GList* _tmp0_ = NULL;
	_tmp0_ = g_list_first (self);
	result = _tmp0_;
	return result;
}


EntitasEntity* entitas_group_GetSingleEntity (EntitasGroup* self) {
	EntitasEntity* result = NULL;
	guint c = 0U;
	GList* _tmp0_ = NULL;
	guint _tmp1_ = 0U;
	guint _tmp2_ = 0U;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->entities;
	_tmp1_ = g_list_length (_tmp0_);
	c = _tmp1_;
	_tmp2_ = c;
	if (_tmp2_ == ((guint) 1)) {
		GList* _tmp3_ = NULL;
		GList* _tmp4_ = NULL;
		GList* _tmp5_ = NULL;
		gconstpointer _tmp6_ = NULL;
		_tmp3_ = self->entities;
		_tmp4_ = g_list_get_Head (_tmp3_);
		_tmp5_ = _tmp4_;
		_tmp6_ = _tmp5_->data;
		result = (EntitasEntity*) _tmp6_;
		return result;
	} else {
		guint _tmp7_ = 0U;
		_tmp7_ = c;
		if (_tmp7_ == ((guint) 0)) {
			result = NULL;
			return result;
		} else {
			EntitasMatcher* _tmp8_ = NULL;
			gchar* _tmp9_ = NULL;
			gchar* _tmp10_ = NULL;
			GError* _tmp11_ = NULL;
			GError* _tmp12_ = NULL;
			_tmp8_ = self->matcher;
			_tmp9_ = entitas_matcher_ToString (_tmp8_);
			_tmp10_ = _tmp9_;
			_tmp11_ = g_error_new_literal (ENTITAS_EXCEPTION, ENTITAS_EXCEPTION_SingleEntity, _tmp10_);
			_tmp12_ = _tmp11_;
			_g_free0 (_tmp10_);
			_inner_error_ = _tmp12_;
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return NULL;
		}
	}
}


static void entitas_group_instance_init (EntitasGroup * self) {
	self->ref_count = 1;
}


void entitas_group_free (EntitasGroup* self) {
	_g_list_free0 (self->entities);
	_entitas_matcher_release0 (self->matcher);
	_entitas_event_group_changed_release0 (self->onEntityAdded);
	_entitas_event_group_changed_release0 (self->onEntityRemoved);
	_entitas_event_group_updated_release0 (self->onEntityUpdated);
	g_slice_free (EntitasGroup, self);
}


