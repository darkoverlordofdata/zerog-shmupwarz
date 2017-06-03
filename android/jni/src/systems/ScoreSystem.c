/* ScoreSystem.c generated by valac 0.34.8, the Vala compiler
 * generated from ScoreSystem.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_pixels.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_surface.h>

typedef struct _systemsScoreSystem systemsScoreSystem;
typedef struct _Game Game;
typedef struct _entitasWorld entitasWorld;
typedef entitasWorld Factory;
typedef struct _entitasGroup entitasGroup;
void game_release (Game* self);
void game_free (Game* self);
Game* game_retain (Game* self);
#define _game_release0(var) ((var == NULL) ? NULL : (var = (game_release (var), NULL)))
void entitas_world_release (entitasWorld* self);
void entitas_world_free (entitasWorld* self);
entitasWorld* entitas_world_retain (entitasWorld* self);
#define _entitas_world_release0(var) ((var == NULL) ? NULL : (var = (entitas_world_release (var), NULL)))
void entitas_group_release (entitasGroup* self);
void entitas_group_free (entitasGroup* self);
entitasGroup* entitas_group_retain (entitasGroup* self);
#define _entitas_group_release0(var) ((var == NULL) ? NULL : (var = (entitas_group_release (var), NULL)))
typedef struct _entitasMatcher entitasMatcher;

#define ENTITAS_TYPE_COMPONENTS (entitas_components_get_type ())
void entitas_matcher_release (entitasMatcher* self);
void entitas_matcher_free (entitasMatcher* self);
entitasMatcher* entitas_matcher_retain (entitasMatcher* self);
#define _entitas_matcher_release0(var) ((var == NULL) ? NULL : (var = (entitas_matcher_release (var), NULL)))

#define ENTITAS_TYPE_ENTITY (entitas_entity_get_type ())

#define ENTITAS_TYPE_BACKGROUND (entitas_background_get_type ())
typedef struct _entitasBackground entitasBackground;

#define ENTITAS_TYPE_BULLET (entitas_bullet_get_type ())
typedef struct _entitasBullet entitasBullet;

#define ENTITAS_TYPE_ENEMY1 (entitas_enemy1_get_type ())
typedef struct _entitasEnemy1 entitasEnemy1;

#define ENTITAS_TYPE_ENEMY2 (entitas_enemy2_get_type ())
typedef struct _entitasEnemy2 entitasEnemy2;

#define ENTITAS_TYPE_ENEMY3 (entitas_enemy3_get_type ())
typedef struct _entitasEnemy3 entitasEnemy3;

#define ENTITAS_TYPE_EXPIRES (entitas_expires_get_type ())
typedef struct _entitasExpires entitasExpires;

#define ENTITAS_TYPE_HEALTH (entitas_health_get_type ())
typedef struct _entitasHealth entitasHealth;

#define ENTITAS_TYPE_HUD (entitas_hud_get_type ())
typedef struct _entitasHud entitasHud;

#define ENTITAS_TYPE_INDEX (entitas_index_get_type ())
typedef struct _entitasIndex entitasIndex;

#define ENTITAS_TYPE_LAYER (entitas_layer_get_type ())
typedef struct _entitasLayer entitasLayer;

#define ENTITAS_TYPE_POSITION (entitas_position_get_type ())
typedef struct _entitasPosition entitasPosition;

#define ENTITAS_TYPE_SCALE (entitas_scale_get_type ())
typedef struct _entitasScale entitasScale;

#define ENTITAS_TYPE_SPRITE (entitas_sprite_get_type ())
typedef struct _sdxgraphicsSprite sdxgraphicsSprite;
typedef struct _entitasSprite entitasSprite;

#define ENTITAS_TYPE_TEXT (entitas_text_get_type ())
typedef sdxgraphicsSprite sdxgraphicsSpriteTextSprite;
typedef struct _entitasText entitasText;

#define ENTITAS_TYPE_TINT (entitas_tint_get_type ())
typedef struct _entitasTint entitasTint;

#define ENTITAS_TYPE_TWEEN (entitas_tween_get_type ())
typedef struct _entitasTween entitasTween;

#define ENTITAS_TYPE_VELOCITY (entitas_velocity_get_type ())
typedef struct _entitasVelocity entitasVelocity;
typedef struct _entitasEntity entitasEntity;
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _sdxFont sdxFont;

#define SDX_GRAPHICS_TYPE_SCALE (sdx_graphics_scale_get_type ())
typedef struct _sdxgraphicsScale sdxgraphicsScale;

#define ENTITAS_TYPE_ISYSTEM (entitas_isystem_get_type ())
typedef struct _entitasISystem entitasISystem;

struct _systemsScoreSystem {
	gint _retainCount;
	Game* game;
	Factory* world;
	entitasGroup* group;
};

typedef enum  {
	ENTITAS_COMPONENTS_BackgroundComponent = 1,
	ENTITAS_COMPONENTS_BoundsComponent,
	ENTITAS_COMPONENTS_BulletComponent,
	ENTITAS_COMPONENTS_Enemy1Component,
	ENTITAS_COMPONENTS_Enemy2Component,
	ENTITAS_COMPONENTS_Enemy3Component,
	ENTITAS_COMPONENTS_ExpiresComponent,
	ENTITAS_COMPONENTS_HealthComponent,
	ENTITAS_COMPONENTS_HudComponent,
	ENTITAS_COMPONENTS_IndexComponent,
	ENTITAS_COMPONENTS_LayerComponent,
	ENTITAS_COMPONENTS_PositionComponent,
	ENTITAS_COMPONENTS_ScaleComponent,
	ENTITAS_COMPONENTS_SoundComponent,
	ENTITAS_COMPONENTS_SpriteComponent,
	ENTITAS_COMPONENTS_TextComponent,
	ENTITAS_COMPONENTS_TintComponent,
	ENTITAS_COMPONENTS_TweenComponent,
	ENTITAS_COMPONENTS_VelocityComponent,
	ENTITAS_COMPONENTS_COUNT = 19
} entitasComponents;

struct _entitasBackground {
	gboolean active;
};

struct _entitasBullet {
	gboolean active;
};

struct _entitasEnemy1 {
	gboolean active;
};

struct _entitasEnemy2 {
	gboolean active;
};

struct _entitasEnemy3 {
	gboolean active;
};

struct _entitasExpires {
	gdouble value;
};

struct _entitasHealth {
	gdouble current;
	gdouble maximum;
};

struct _entitasHud {
	gboolean active;
};

struct _entitasIndex {
	gint value;
	gint limit;
	gboolean vertical;
};

struct _entitasLayer {
	gint value;
};

struct _entitasPosition {
	gdouble x;
	gdouble y;
};

struct _entitasScale {
	gdouble x;
	gdouble y;
};

struct _entitasSprite {
	sdxgraphicsSprite* sprite;
	gint width;
	gint height;
};

struct _entitasText {
	gchar* text;
	sdxgraphicsSpriteTextSprite* sprite;
};

struct _entitasTint {
	gint r;
	gint g;
	gint b;
	gint a;
};

struct _entitasTween {
	gdouble min;
	gdouble max;
	gdouble speed;
	gboolean repeat;
	gboolean active;
};

struct _entitasVelocity {
	gdouble x;
	gdouble y;
};

struct _entitasEntity {
	gint id;
	gchar* name;
	gint pool;
	guint64 mask;
	entitasBackground* background;
	SDL_Rect* bounds;
	entitasBullet* bullet;
	entitasEnemy1* enemy1;
	entitasEnemy2* enemy2;
	entitasEnemy3* enemy3;
	entitasExpires* expires;
	entitasHealth* health;
	entitasHud* hud;
	entitasIndex* index;
	entitasLayer* layer;
	entitasPosition* position;
	entitasScale* scale;
	entitasSprite* sprite;
	entitasText* text;
	entitasTint* tint;
	entitasTween* tween;
	entitasVelocity* velocity;
};

struct _entitasGroup {
	gint _retainCount;
	entitasMatcher* matcher;
	GList* entities;
};

struct _sdxgraphicsScale {
	gdouble x;
	gdouble y;
};

struct _sdxgraphicsSprite {
	gint _retainCount;
	SDL_Texture* texture;
	SDL_Surface* surface;
	gint width;
	gint height;
	gint x;
	gint y;
	gint index;
	sdxgraphicsScale scale;
	SDL_Color color;
	gboolean centered;
	gint layer;
	gint id;
	gchar* path;
	gboolean isText;
};

typedef void (*entitasSystemInitialize) (void* user_data);
typedef void (*entitasSystemExecute) (gdouble delta, void* user_data);
struct _entitasISystem {
	entitasSystemInitialize initialize;
	gpointer initialize_target;
	entitasSystemExecute execute;
	gpointer execute_target;
};


extern sdxFont* sdx_smallFont;

void systems_score_system_free (systemsScoreSystem* self);
void game_free (Game* self);
void entitas_world_free (entitasWorld* self);
void entitas_group_free (entitasGroup* self);
static void systems_score_system_instance_init (systemsScoreSystem * self);
systemsScoreSystem* systems_score_system_retain (systemsScoreSystem* self);
void systems_score_system_release (systemsScoreSystem* self);
void systems_score_system_free (systemsScoreSystem* self);
systemsScoreSystem* systems_score_system_new (Game* game, Factory* world);
void systems_score_system_initialize (systemsScoreSystem* self);
void entitas_matcher_free (entitasMatcher* self);
entitasGroup* entitas_world_getGroup (entitasWorld* self, entitasMatcher* matcher);
entitasMatcher* entitas_matcher_AllOf (gint* args, int args_length1);
GType entitas_components_get_type (void) G_GNUC_CONST;
void systems_score_system_execute (systemsScoreSystem* self, gdouble delta);
GType entitas_entity_get_type (void) G_GNUC_CONST;
GType entitas_background_get_type (void) G_GNUC_CONST;
entitasBackground* entitas_background_dup (const entitasBackground* self);
void entitas_background_free (entitasBackground* self);
GType entitas_bullet_get_type (void) G_GNUC_CONST;
entitasBullet* entitas_bullet_dup (const entitasBullet* self);
void entitas_bullet_free (entitasBullet* self);
GType entitas_enemy1_get_type (void) G_GNUC_CONST;
entitasEnemy1* entitas_enemy1_dup (const entitasEnemy1* self);
void entitas_enemy1_free (entitasEnemy1* self);
GType entitas_enemy2_get_type (void) G_GNUC_CONST;
entitasEnemy2* entitas_enemy2_dup (const entitasEnemy2* self);
void entitas_enemy2_free (entitasEnemy2* self);
GType entitas_enemy3_get_type (void) G_GNUC_CONST;
entitasEnemy3* entitas_enemy3_dup (const entitasEnemy3* self);
void entitas_enemy3_free (entitasEnemy3* self);
GType entitas_expires_get_type (void) G_GNUC_CONST;
entitasExpires* entitas_expires_dup (const entitasExpires* self);
void entitas_expires_free (entitasExpires* self);
GType entitas_health_get_type (void) G_GNUC_CONST;
entitasHealth* entitas_health_dup (const entitasHealth* self);
void entitas_health_free (entitasHealth* self);
GType entitas_hud_get_type (void) G_GNUC_CONST;
entitasHud* entitas_hud_dup (const entitasHud* self);
void entitas_hud_free (entitasHud* self);
GType entitas_index_get_type (void) G_GNUC_CONST;
entitasIndex* entitas_index_dup (const entitasIndex* self);
void entitas_index_free (entitasIndex* self);
GType entitas_layer_get_type (void) G_GNUC_CONST;
entitasLayer* entitas_layer_dup (const entitasLayer* self);
void entitas_layer_free (entitasLayer* self);
GType entitas_position_get_type (void) G_GNUC_CONST;
entitasPosition* entitas_position_dup (const entitasPosition* self);
void entitas_position_free (entitasPosition* self);
GType entitas_scale_get_type (void) G_GNUC_CONST;
entitasScale* entitas_scale_dup (const entitasScale* self);
void entitas_scale_free (entitasScale* self);
GType entitas_sprite_get_type (void) G_GNUC_CONST;
void sdx_graphics_sprite_free (sdxgraphicsSprite* self);
entitasSprite* entitas_sprite_dup (const entitasSprite* self);
void entitas_sprite_free (entitasSprite* self);
void entitas_sprite_copy (const entitasSprite* self, entitasSprite* dest);
void entitas_sprite_destroy (entitasSprite* self);
GType entitas_text_get_type (void) G_GNUC_CONST;
entitasText* entitas_text_dup (const entitasText* self);
void entitas_text_free (entitasText* self);
void entitas_text_copy (const entitasText* self, entitasText* dest);
void entitas_text_destroy (entitasText* self);
GType entitas_tint_get_type (void) G_GNUC_CONST;
entitasTint* entitas_tint_dup (const entitasTint* self);
void entitas_tint_free (entitasTint* self);
GType entitas_tween_get_type (void) G_GNUC_CONST;
entitasTween* entitas_tween_dup (const entitasTween* self);
void entitas_tween_free (entitasTween* self);
GType entitas_velocity_get_type (void) G_GNUC_CONST;
entitasVelocity* entitas_velocity_dup (const entitasVelocity* self);
void entitas_velocity_free (entitasVelocity* self);
entitasEntity* entitas_entity_dup (const entitasEntity* self);
void entitas_entity_free (entitasEntity* self);
void entitas_entity_copy (const entitasEntity* self, entitasEntity* dest);
void entitas_entity_destroy (entitasEntity* self);
gboolean entitas_entity_isActive (entitasEntity *self);
void sdx_font_free (sdxFont* self);
void sdx_graphics_sprite_text_sprite_setText (sdxgraphicsSpriteTextSprite* self, const gchar* text, sdxFont* font, SDL_Color color);
GType sdx_graphics_scale_get_type (void) G_GNUC_CONST;
sdxgraphicsScale* sdx_graphics_scale_dup (const sdxgraphicsScale* self);
void sdx_graphics_scale_free (sdxgraphicsScale* self);
GType entitas_isystem_get_type (void) G_GNUC_CONST;
entitasISystem* entitas_isystem_dup (const entitasISystem* self);
void entitas_isystem_free (entitasISystem* self);
entitasISystem systems_score_system_get__ISystem (systemsScoreSystem* self);
static void _systems_score_system_initialize_entitas_system_initialize (gpointer self);
static void _systems_score_system_execute_entitas_system_execute (gdouble delta, gpointer self);

extern const SDL_Color SDX_COLOR_LimeGreen;

systemsScoreSystem* systems_score_system_retain (systemsScoreSystem* self) {
	systemsScoreSystem* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_atomic_int_add ((volatile gint *) (&self->_retainCount), 1);
	result = self;
	return result;
}


void systems_score_system_release (systemsScoreSystem* self) {
	gboolean _tmp0_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_atomic_int_dec_and_test ((volatile gint *) (&self->_retainCount));
	if (_tmp0_) {
		systems_score_system_free (self);
	}
}


static gpointer _game_retain0 (gpointer self) {
	return self ? game_retain (self) : NULL;
}


static gpointer _entitas_world_retain0 (gpointer self) {
	return self ? entitas_world_retain (self) : NULL;
}


systemsScoreSystem* systems_score_system_new (Game* game, Factory* world) {
	systemsScoreSystem* self;
	Game* _tmp0_ = NULL;
	Game* _tmp1_ = NULL;
	Factory* _tmp2_ = NULL;
	Factory* _tmp3_ = NULL;
	g_return_val_if_fail (game != NULL, NULL);
	g_return_val_if_fail (world != NULL, NULL);
	self = g_slice_new0 (systemsScoreSystem);
	systems_score_system_instance_init (self);
	_tmp0_ = game;
	_tmp1_ = _game_retain0 (_tmp0_);
	_game_release0 (self->game);
	self->game = _tmp1_;
	_tmp2_ = world;
	_tmp3_ = _entitas_world_retain0 (_tmp2_);
	_entitas_world_release0 (self->world);
	self->world = _tmp3_;
	return self;
}


void systems_score_system_initialize (systemsScoreSystem* self) {
	Factory* _tmp0_ = NULL;
	gint* _tmp1_ = NULL;
	gint* _tmp2_ = NULL;
	gint _tmp2__length1 = 0;
	entitasMatcher* _tmp3_ = NULL;
	entitasMatcher* _tmp4_ = NULL;
	entitasGroup* _tmp5_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->world;
	_tmp1_ = g_new0 (gint, 2);
	_tmp1_[0] = (gint) ENTITAS_COMPONENTS_HealthComponent;
	_tmp1_[1] = (gint) ENTITAS_COMPONENTS_TextComponent;
	_tmp2_ = _tmp1_;
	_tmp2__length1 = 2;
	_tmp3_ = entitas_matcher_AllOf (_tmp2_, 2);
	_tmp4_ = _tmp3_;
	_tmp5_ = entitas_world_getGroup ((entitasWorld*) _tmp0_, _tmp4_);
	_entitas_group_release0 (self->group);
	self->group = _tmp5_;
	_entitas_matcher_release0 (_tmp4_);
	_tmp2_ = (g_free (_tmp2_), NULL);
}


void systems_score_system_execute (systemsScoreSystem* self, gdouble delta) {
	entitasGroup* _tmp0_ = NULL;
	GList* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->group;
	_tmp1_ = _tmp0_->entities;
	{
		GList* entity_collection = NULL;
		GList* entity_it = NULL;
		entity_collection = _tmp1_;
		for (entity_it = entity_collection; entity_it != NULL; entity_it = entity_it->next) {
			entitasEntity* entity = NULL;
			entity = entity_it->data;
			{
				gboolean _tmp2_ = FALSE;
				_tmp2_ = entitas_entity_isActive (entity);
				if (_tmp2_) {
					gchar* pct = NULL;
					entitasEntity* _tmp3_ = NULL;
					entitasHealth* _tmp4_ = NULL;
					gdouble _tmp5_ = 0.0;
					entitasEntity* _tmp6_ = NULL;
					entitasHealth* _tmp7_ = NULL;
					gdouble _tmp8_ = 0.0;
					gdouble _tmp9_ = 0.0;
					gchar* _tmp10_ = NULL;
					const gchar* _tmp11_ = NULL;
					entitasEntity* _tmp12_ = NULL;
					entitasText* _tmp13_ = NULL;
					const gchar* _tmp14_ = NULL;
					_tmp3_ = entity;
					_tmp4_ = (*_tmp3_).health;
					_tmp5_ = (*_tmp4_).current;
					_tmp6_ = entity;
					_tmp7_ = (*_tmp6_).health;
					_tmp8_ = (*_tmp7_).maximum;
					_tmp9_ = fmin ((gdouble) 100, (((gdouble) _tmp5_) / ((gdouble) _tmp8_)) * 100.0);
					_tmp10_ = g_strdup_printf ("%d%%", (gint) _tmp9_);
					pct = _tmp10_;
					_tmp11_ = pct;
					_tmp12_ = entity;
					_tmp13_ = (*_tmp12_).text;
					_tmp14_ = (*_tmp13_).text;
					if (g_strcmp0 (_tmp11_, _tmp14_) != 0) {
						entitasEntity* _tmp15_ = NULL;
						entitasText* _tmp16_ = NULL;
						const gchar* _tmp17_ = NULL;
						gchar* _tmp18_ = NULL;
						entitasEntity* _tmp19_ = NULL;
						entitasText* _tmp20_ = NULL;
						sdxgraphicsSpriteTextSprite* _tmp21_ = NULL;
						const gchar* _tmp22_ = NULL;
						sdxFont* _tmp23_ = NULL;
						entitasEntity* _tmp24_ = NULL;
						entitasText* _tmp25_ = NULL;
						sdxgraphicsSpriteTextSprite* _tmp26_ = NULL;
						entitasEntity* _tmp27_ = NULL;
						entitasPosition* _tmp28_ = NULL;
						gdouble _tmp29_ = 0.0;
						entitasEntity* _tmp30_ = NULL;
						entitasText* _tmp31_ = NULL;
						sdxgraphicsSpriteTextSprite* _tmp32_ = NULL;
						entitasEntity* _tmp33_ = NULL;
						entitasPosition* _tmp34_ = NULL;
						gdouble _tmp35_ = 0.0;
						_tmp15_ = entity;
						_tmp16_ = (*_tmp15_).text;
						_tmp17_ = pct;
						_tmp18_ = g_strdup (_tmp17_);
						_g_free0 ((*_tmp16_).text);
						(*_tmp16_).text = _tmp18_;
						_tmp19_ = entity;
						_tmp20_ = (*_tmp19_).text;
						_tmp21_ = (*_tmp20_).sprite;
						_tmp22_ = pct;
						_tmp23_ = sdx_smallFont;
						sdx_graphics_sprite_text_sprite_setText (_tmp21_, _tmp22_, _tmp23_, SDX_COLOR_LimeGreen);
						_tmp24_ = entity;
						_tmp25_ = (*_tmp24_).text;
						_tmp26_ = (*_tmp25_).sprite;
						_tmp27_ = entity;
						_tmp28_ = (*_tmp27_).position;
						_tmp29_ = (*_tmp28_).x;
						((sdxgraphicsSprite*) _tmp26_)->x = (gint) _tmp29_;
						_tmp30_ = entity;
						_tmp31_ = (*_tmp30_).text;
						_tmp32_ = (*_tmp31_).sprite;
						_tmp33_ = entity;
						_tmp34_ = (*_tmp33_).position;
						_tmp35_ = (*_tmp34_).y;
						((sdxgraphicsSprite*) _tmp32_)->y = (gint) _tmp35_;
					}
					_g_free0 (pct);
				}
			}
		}
	}
}


static void _systems_score_system_initialize_entitas_system_initialize (gpointer self) {
	systems_score_system_initialize ((systemsScoreSystem*) self);
}


static void _systems_score_system_execute_entitas_system_execute (gdouble delta, gpointer self) {
	systems_score_system_execute ((systemsScoreSystem*) self, delta);
}


entitasISystem systems_score_system_get__ISystem (systemsScoreSystem* self) {
	entitasISystem result;
	entitasISystem _tmp0_ = {0};
	_tmp0_.initialize = _systems_score_system_initialize_entitas_system_initialize;
	_tmp0_.initialize_target = self;
	_tmp0_.execute = _systems_score_system_execute_entitas_system_execute;
	_tmp0_.execute_target = self;
	result = _tmp0_;
	return result;
}


static void systems_score_system_instance_init (systemsScoreSystem * self) {
	self->_retainCount = 1;
}


void systems_score_system_free (systemsScoreSystem* self) {
	_game_release0 (self->game);
	_entitas_world_release0 (self->world);
	_entitas_group_release0 (self->group);
	g_slice_free (systemsScoreSystem, self);
}



