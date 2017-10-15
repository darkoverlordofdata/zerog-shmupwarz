/** updated by adriac */
/* graphics.c generated by valac 0.34.9, the Vala compiler
 * generated from graphics.vala, do not modify */

/* ******************************************************************************
 * Copyright 2017 darkoverlordofdata.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ******************************************************************************/

#include <glib.h>
#include <glib-object.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>
#include <string.h>


#define SDX_GRAPHICS_TYPE_BLIT (sdx_graphics_blit_get_type ())
typedef struct _SdxGraphicsBlit SdxGraphicsBlit;

struct _SdxGraphicsBlit {
	SDL_Rect source;
	SDL_Rect dest;
	SDL_RendererFlip flip;
};

typedef SdxGraphicsBlit* (*SdxGraphicsCompositor) (gint x, gint y, int* result_length1, void* user_data);


GType sdx_graphics_blit_get_type (void) G_GNUC_CONST;
SdxGraphicsBlit* sdx_graphics_blit_dup (const SdxGraphicsBlit* self);
void sdx_graphics_blit_free (SdxGraphicsBlit* self);


SdxGraphicsBlit* sdx_graphics_blit_dup (const SdxGraphicsBlit* self) {
	SdxGraphicsBlit* dup;
	dup = g_new0 (SdxGraphicsBlit, 1);
	memcpy (dup, self, sizeof (SdxGraphicsBlit));
	return dup;
}


void sdx_graphics_blit_free (SdxGraphicsBlit* self) {
	g_free (self);
}


GType sdx_graphics_blit_get_type (void) {
	static volatile gsize sdx_graphics_blit_type_id__volatile = 0;
	if (g_once_init_enter (&sdx_graphics_blit_type_id__volatile)) {
		GType sdx_graphics_blit_type_id;
		sdx_graphics_blit_type_id = g_boxed_type_register_static ("SdxGraphicsBlit", (GBoxedCopyFunc) sdx_graphics_blit_dup, (GBoxedFreeFunc) sdx_graphics_blit_free);
		g_once_init_leave (&sdx_graphics_blit_type_id__volatile, sdx_graphics_blit_type_id);
	}
	return sdx_graphics_blit_type_id__volatile;
}



