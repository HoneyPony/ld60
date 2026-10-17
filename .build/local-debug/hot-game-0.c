#include "poni/poni.h"
#include "poni/poni_hot.h"
// --- imports ---

#include "/home/emdash/Documents/ponygame/poniescript/ponyquad/ponyquad.h"
// --- tag definitions ---
#define PONI_TAG_TY10 0x8000000000000100ULL
#define PONI_TAG_TY11 0x8000000000000102ULL
#define PONI_TAG_TY12 0x8000000000000104ULL
#define PONI_TAG_TY13 0x8000000000000106ULL
#define PONI_TAG_TY14 0x8000000000000108ULL
#define PONI_TAG_TY15 0x800000000000010aULL
#define PONI_TAG_TY18 0x10cULL
#define PONI_TAG_TY38 0x10eULL
#define PONI_TAG_TY39 0x110ULL
#define PONI_TAG_TY40 0x112ULL
#define PONI_TAG_TY41 0x114ULL
#define PONI_TAG_TY42 0x116ULL
#define PONI_TAG_TY43 0x118ULL
#define PONI_TAG_TY44 0x11aULL
#define PONI_TAG_TY45 0x11cULL
#define PONI_TAG_TY46 0x11eULL
#define PONI_TAG_TY47 0x120ULL
#define PONI_TAG_TY54 0x122ULL
#define PONI_TAG_TY55 0x124ULL
#define PONI_TAG_TY56 PONI_TAG_TY45
#define PONI_TAG_TY59 0x128ULL
#define PONI_TAG_TY60 0x12aULL
#define PONI_TAG_TY61 0x12cULL
#define PONI_TAG_TY62 0x800000000000012eULL
#define PONI_TAG_TY63 0x130ULL
#define PONI_TAG_TY65 0x132ULL
#define PONI_TAG_TY66 0x134ULL
#define PONI_TAG_TY67 0x136ULL
#define PONI_TAG_TY68 0x138ULL
#define PONI_TAG_TY69 0x13aULL
#define PONI_TAG_TY70 0x13cULL
#define PONI_TAG_TY71 0x13eULL
#define PONI_TAG_TY72 0x140ULL
#define PONI_TAG_TY73 0x142ULL
#define PONI_TAG_TY74 0x144ULL
#define PONI_TAG_TY75 0x146ULL
#define PONI_TAG_TY76 0x148ULL
#define PONI_TAG_TY77 0x14aULL
#define PONI_TAG_TY80 0x14cULL
#define PONI_TAG_TY81 0x14eULL
#define PONI_TAG_TY82 0x150ULL

// --- string constants ---
ps_str* ps_str_const0 = NULL;

// --- struct declarations ---

struct texture2d;
struct font;
struct camera2d;
struct camera_viewport;
struct sound;
struct cl_Screen;
struct cl_UpdateSmoothing;
struct cl_StaticTiledLayer;
struct cl_Actor;
struct cl_Solid;
struct cl_Collider;
struct cl_World;
struct cl_closure;
struct cl0_closure;
// --- struct declarations (ps_tuple) ---
struct ps_range_ie_62;

// --- struct declarations (ps_array) ---
struct ps_arr_6;
struct ps_arr_47;
struct ps_arr_42;
struct ps_arr_40;
struct ps_dynarr_6;
struct ps_dynarr_47;
struct ps_dynarr_42;
struct ps_dynarr_40;

// --- sig types ---
typedef ps_bool (*ps_sigraw_23)(struct poni_gc_context*, ps_int, void*);
typedef struct ps_sig_23 { ps_sigraw_23 fun; void* closure; } ps_sig_23;
typedef ps_int (*ps_sigraw_38)(struct poni_gc_context*, ps_int, ps_int, void*);
typedef struct ps_sig_38 { ps_sigraw_38 fun; void* closure; } ps_sig_38;
typedef ps_int (*ps_sigraw_57)(struct poni_gc_context*, ps_int, ps_vec2, ps_vec2i, void*);
typedef struct ps_sig_57 { ps_sigraw_57 fun; void* closure; } ps_sig_57;
typedef struct cl_Actor* (*ps_sigraw_53)(struct poni_gc_context*, ps_vec2, ps_vec2i, void*);
typedef struct ps_sig_53 { ps_sigraw_53 fun; void* closure; } ps_sig_53;
typedef void (*ps_sigraw_18)(struct poni_gc_context*, void*);
typedef struct ps_sig_18 { ps_sigraw_18 fun; void* closure; } ps_sig_18;
typedef void (*ps_sigraw_37)(struct poni_gc_context*, ps_float, void*);
typedef struct ps_sig_37 { ps_sigraw_37 fun; void* closure; } ps_sig_37;
typedef ps_int (*ps_sigraw_56)(struct poni_gc_context*, ps_vec2, void*);
typedef struct ps_sig_56 { ps_sigraw_56 fun; void* closure; } ps_sig_56;
typedef void (*ps_sigraw_2)(struct poni_gc_context*, ps_vec4, void*);
typedef struct ps_sig_2 { ps_sigraw_2 fun; void* closure; } ps_sig_2;
typedef void (*ps_sigraw_48)(struct poni_gc_context*, struct camera2d*, void*);
typedef struct ps_sig_48 { ps_sigraw_48 fun; void* closure; } ps_sig_48;
typedef void (*ps_sigraw_52)(struct poni_gc_context*, struct texture2d*, ps_vec2, ps_float, ps_float, ps_vec4, void*);
typedef struct ps_sig_52 { ps_sigraw_52 fun; void* closure; } ps_sig_52;
typedef ps_int (*ps_sigraw_36)(struct poni_gc_context*, ps_float, void*);
typedef struct ps_sig_36 { ps_sigraw_36 fun; void* closure; } ps_sig_36;
typedef ps_int (*ps_sigraw_59)(struct poni_gc_context*, ps_int, void*);
typedef struct ps_sig_59 { ps_sigraw_59 fun; void* closure; } ps_sig_59;
typedef ps_float (*ps_sigraw_5)(struct poni_gc_context*, void*);
typedef struct ps_sig_5 { ps_sigraw_5 fun; void* closure; } ps_sig_5;
typedef ps_int (*ps_sigraw_55)(struct poni_gc_context*, ps_vec2, ps_vec2i, void*);
typedef struct ps_sig_55 { ps_sigraw_55 fun; void* closure; } ps_sig_55;
typedef ps_vec2 (*ps_sigraw_24)(struct poni_gc_context*, void*);
typedef struct ps_sig_24 { ps_sigraw_24 fun; void* closure; } ps_sig_24;
typedef ps_bool (*ps_sigraw_58)(struct poni_gc_context*, struct cl_Actor*, ps_float, void*);
typedef struct ps_sig_58 { ps_sigraw_58 fun; void* closure; } ps_sig_58;
typedef ps_vec2 (*ps_sigraw_31)(struct poni_gc_context*, ps_vec2, void*);
typedef struct ps_sig_31 { ps_sigraw_31 fun; void* closure; } ps_sig_31;
typedef void (*ps_sigraw_4)(struct poni_gc_context*, ps_vec2, ps_vec2, ps_vec4, void*);
typedef struct ps_sig_4 { ps_sigraw_4 fun; void* closure; } ps_sig_4;

// --- struct definitions (ps_tuple) ---
struct ps_range_ie_62 {
	ps_int left;
	ps_int right;
};

// --- struct definitions (ps_array) ---
struct ps_arr_6 {
	struct ps_array_header header;
	ps_int contents[];
};
struct ps_arr_47 {
	struct ps_array_header header;
	struct cl_Solid* contents[];
};
struct ps_arr_42 {
	struct ps_array_header header;
	struct cl_StaticTiledLayer* contents[];
};
struct ps_arr_40 {
	struct ps_array_header header;
	struct cl_Actor* contents[];
};
struct ps_dynarr_6 {
	struct ps_dynarray_header header;
};
struct ps_dynarr_47 {
	struct ps_dynarray_header header;
};
struct ps_dynarr_42 {
	struct ps_dynarray_header header;
};
struct ps_dynarr_40 {
	struct ps_dynarray_header header;
};

// --- struct definitions ---
struct cl_Screen {
	struct ps_object object;
	ps_vec2 v_offset;
	ps_float v4_scale;
	ps_vec2 v_target_offset;
	ps_vec2 v_target_size;
	ps_vec4 v_bg_color;
	struct camera2d* v0_camera;
};
struct cl_UpdateSmoothing {
	struct ps_object object;
	ps_float v_avg_dt;
	ps_float v_accumulator;
	ps_bool v_do_init;
};
struct cl_StaticTiledLayer {
	struct ps_object object;
	struct ps_dynarr_6* v_colliders;
	ps_float v_tile_width;
	ps_float v_tile_height;
	ps_int v_width;
	ps_int v_tag;
};
struct cl_Actor {
	struct ps_object object;
	struct cl_Collider* v_collider;
};
struct cl_Solid {
	struct ps_object object;
	struct cl_Collider* v0_collider;
};
struct cl_Collider {
	struct ps_object object;
	ps_bool v_collidable;
	ps_bool v_squished;
	ps_vec2 v0_pos;
	ps_vec2i v7_size;
	ps_vec2 v_remainder;
	struct ps_dynarr_47* v_squishers;
	ps_bool v_descent;
	ps_bool v_seen_wood;
};
struct cl_World {
	struct ps_object object;
	struct ps_dynarr_42* v_layers;
	struct ps_dynarr_40* v_actors;
	struct ps_dynarr_47* v_solids;
};
struct cl_closure {
	struct ps_object object;
	struct cl0_closure *parent;
	ps_float v0_tile_width;
	ps_float v0_tile_height;
	ps_int v_layer_width;
	ps_int v_layer_height;
	struct cl_StaticTiledLayer* v0_layer;
	ps_int v_layer_tag;
};
struct cl0_closure {
	struct ps_object object;
	struct cl_World *parent;
	ps_int v0_tag;
};
// --- global variables ---
struct cl_Screen* *v_screen;
struct cl_World* *v_world;
struct cl_Actor* *v_player;
ps_vec2 *v_player_speed;
struct cl_UpdateSmoothing* *v_update_smoothing;
ps_int *v_T_EMPTY;
ps_int *v_T_SOLID;
ps_int *v_T_JUMP_THROUGH;
ps_int *v_T_COLLIDER;
ps_int *v_K_SPACE;
ps_int *v_K_APOSTROPHE;
ps_int *v_K_COMMA;
ps_int *v_K_MINUS;
ps_int *v_K_PERIOD;
ps_int *v_K_SLASH;
ps_int *v_K_0;
ps_int *v_K_1;
ps_int *v_K_2;
ps_int *v_K_3;
ps_int *v_K_4;
ps_int *v_K_5;
ps_int *v_K_6;
ps_int *v_K_7;
ps_int *v_K_8;
ps_int *v_K_9;
ps_int *v_K_SEMICOLON;
ps_int *v_K_EQUAL;
ps_int *v_K_A;
ps_int *v_K_B;
ps_int *v_K_C;
ps_int *v_K_D;
ps_int *v_K_E;
ps_int *v_K_F;
ps_int *v_K_G;
ps_int *v_K_H;
ps_int *v_K_I;
ps_int *v_K_J;
ps_int *v_K_K;
ps_int *v_K_L;
ps_int *v_K_M;
ps_int *v_K_N;
ps_int *v_K_O;
ps_int *v_K_P;
ps_int *v_K_Q;
ps_int *v_K_R;
ps_int *v_K_S;
ps_int *v_K_T;
ps_int *v_K_U;
ps_int *v_K_V;
ps_int *v_K_W;
ps_int *v_K_X;
ps_int *v_K_Y;
ps_int *v_K_Z;
ps_int *v_K_LEFTBRACKET;
ps_int *v_K_BACKSLASH;
ps_int *v_K_RIGHTBRACKET;
ps_int *v_K_GRAVEACCENT;
ps_int *v_K_WORLD1;
ps_int *v_K_WORLD2;
ps_int *v_K_ESCAPE;
ps_int *v_K_ENTER;
ps_int *v_K_TAB;
ps_int *v_K_BACKSPACE;
ps_int *v_K_INSERT;
ps_int *v_K_DELETE;
ps_int *v_K_RIGHT;
ps_int *v_K_LEFT;
ps_int *v_K_DOWN;
ps_int *v_K_UP;
ps_int *v_K_PAGEUP;
ps_int *v_K_PAGEDOWN;
ps_int *v_K_HOME;
ps_int *v_K_END;
ps_int *v_K_CAPSLOCK;
ps_int *v_K_SCROLLLOCK;
ps_int *v_K_NUMLOCK;
ps_int *v_K_PRINTSCREEN;
ps_int *v_K_PAUSE;
ps_int *v_K_F1;
ps_int *v_K_F2;
ps_int *v_K_F3;
ps_int *v_K_F4;
ps_int *v_K_F5;
ps_int *v_K_F6;
ps_int *v_K_F7;
ps_int *v_K_F8;
ps_int *v_K_F9;
ps_int *v_K_F10;
ps_int *v_K_F11;
ps_int *v_K_F12;
ps_int *v_K_F13;
ps_int *v_K_F14;
ps_int *v_K_F15;
ps_int *v_K_F16;
ps_int *v_K_F17;
ps_int *v_K_F18;
ps_int *v_K_F19;
ps_int *v_K_F20;
ps_int *v_K_F21;
ps_int *v_K_F22;
ps_int *v_K_F23;
ps_int *v_K_F24;
ps_int *v_K_F25;
ps_int *v_K_KP0;
ps_int *v_K_KP1;
ps_int *v_K_KP2;
ps_int *v_K_KP3;
ps_int *v_K_KP4;
ps_int *v_K_KP5;
ps_int *v_K_KP6;
ps_int *v_K_KP7;
ps_int *v_K_KP8;
ps_int *v_K_KP9;
ps_int *v_K_KPDECIMAL;
ps_int *v_K_KPDIVIDE;
ps_int *v_K_KPMULTIPLY;
ps_int *v_K_KPSUBTRACT;
ps_int *v_K_KPADD;
ps_int *v_K_KPENTER;
ps_int *v_K_KPEQUAL;
ps_int *v_K_LEFTSHIFT;
ps_int *v_K_LEFTCONTROL;
ps_int *v_K_LEFTALT;
ps_int *v_K_LEFTSUPER;
ps_int *v_K_RIGHTSHIFT;
ps_int *v_K_RIGHTCONTROL;
ps_int *v_K_RIGHTALT;
ps_int *v_K_RIGHTSUPER;
ps_int *v_K_MENU;
ps_int *v_K_BACK;
ps_int *v_K_UNKNOWN;
ps_int *v_MOUSE_LEFT;
ps_int *v_MOUSE_MIDDLE;
ps_int *v_MOUSE_RIGHT;
ps_int *v_FILTER_LINEAR;
ps_int *v_FILTER_NEAREST;

// --- function declarations ---
void clear_background(PONI_ABI(ps_vec4 v_color));
void draw_line(PONI_ABI(ps_vec2 v_from, ps_vec2 v_to, ps_float v_thickness, ps_vec4 v0_color));
void draw_rectangle(PONI_ABI(ps_vec2 v_at, ps_vec2 v_size, ps_vec4 v1_color));
ps_float screen_width(PONI_ABI());
ps_float screen_height(PONI_ABI());
struct sound* load_sound(PONI_ABI(ps_strbuf* v_path));
void play_sound_once(PONI_ABI(struct sound* v_sound));
void play_sound_looping(PONI_ABI(struct sound* v0_sound));
void pq_stop_sound(PONI_ABI(struct sound* v1_sound));
ps_bool pq_is_sound_loaded(PONI_ABI(struct sound* v2_sound));
struct font* load_font(PONI_ABI(ps_strbuf* v0_path));
ps_vec3 draw_text(PONI_ABI(ps_strbuf* v_text, ps_vec2 v0_at, ps_float v0_size, ps_vec4 v2_color));
ps_vec3 draw_texts(PONI_ABI(ps_strbuf* v0_text, ps_vec2 v1_at, ps_float v1_size, ps_float v_scale, ps_vec4 v3_color));
ps_vec3 draw_text_font(PONI_ABI(ps_strbuf* v1_text, struct font* v_font, ps_vec2 v2_at, ps_float v2_size, ps_vec4 v4_color));
ps_vec3 draw_text_fonts(PONI_ABI(ps_strbuf* v2_text, struct font* v0_font, ps_vec2 v3_at, ps_float v3_size, ps_float v0_scale, ps_vec4 v5_color));
ps_vec3 measure_text_font(PONI_ABI(ps_strbuf* v3_text, struct font* v1_font, ps_float v4_size));
ps_vec3 measure_text_fonts(PONI_ABI(ps_strbuf* v4_text, struct font* v2_font, ps_float v5_size, ps_float v1_scale));
ps_bool pq_is_font_loaded(PONI_ABI(struct font* v3_font));
void set_camera(PONI_ABI(struct camera2d* v_camera));
void set_default_camera(PONI_ABI());
struct texture2d* load_texture(PONI_ABI(ps_strbuf* v1_path));
void draw_texture(PONI_ABI(struct texture2d* v_texture, ps_vec2 v_position, ps_vec4 v6_color));
void draw_texture_rot(PONI_ABI(struct texture2d* v0_texture, ps_vec2 v0_position, ps_float v_rotation, ps_vec4 v7_color));
void draw_texture_rot_scale(PONI_ABI(struct texture2d* v1_texture, ps_vec2 v1_position, ps_float v0_rotation, ps_float v2_scale, ps_vec4 v8_color));
ps_bool is_key_down(PONI_ABI(ps_int v_key));
ps_bool is_key_pressed(PONI_ABI(ps_int v0_key));
ps_bool is_key_released(PONI_ABI(ps_int v1_key));
ps_bool is_mouse_button_down(PONI_ABI(ps_int v_button));
ps_bool is_mouse_button_pressed(PONI_ABI(ps_int v0_button));
ps_bool is_mouse_button_released(PONI_ABI(ps_int v1_button));
ps_vec2 mouse_position(PONI_ABI());
ps_vec2 mouse_position_local(PONI_ABI());
ps_vec2 mouse_delta_position(PONI_ABI());
ps_vec2 pq_mouse_wheel(PONI_ABI());
ps_float get_frame_time(PONI_ABI());
ps_float get_time(PONI_ABI());
ps_int get_fps(PONI_ABI());
ps_vec3 hsl_to_rgb(PONI_ABI(ps_vec3 v_hsl));
ps_vec4 hsla_to_rgba(PONI_ABI(ps_vec4 v_hsla));
ps_vec3 rgb_to_hsl(PONI_ABI(ps_vec3 v_rgb));
ps_vec4 rgba_to_hsla(PONI_ABI(ps_vec4 v_rgba));
void set_canvas(PONI_ABI(ps_vec2 v6_size));
void clear_canvas(PONI_ABI());
void set_default_filter_mode(PONI_ABI(ps_int v_mode));
ps_float pq_len_vec2(PONI_ABI(ps_vec2 v_v));
ps_float pq_len_vec3(PONI_ABI(ps_vec2 v0_v));
ps_float pq_len_vec4(PONI_ABI(ps_vec2 v1_v));
ps_vec2 pq_norm_vec2(PONI_ABI(ps_vec2 v2_v));
ps_vec3 pq_norm_vec3(PONI_ABI(ps_vec2 v3_v));
ps_vec4 pq_norm_vec4(PONI_ABI(ps_vec2 v4_v));
ps_float pq_atan2(PONI_ABI(ps_vec2 v_xy));
ps_float pq_pow(PONI_ABI(ps_float v_base, ps_float v_exp));
ps_vec2i pq_round2(PONI_ABI(ps_vec2 v5_v));
ps_int pq_round(PONI_ABI(ps_float v_f));
ps_int pq_floor(PONI_ABI(ps_float v0_f));
void pq_gl_push_rotation(PONI_ABI(ps_float v1_rotation));
void pq_gl_push_scale(PONI_ABI(ps_vec2 v3_scale));
void pq_gl_push_translation(PONI_ABI(ps_vec2 v_translation));
void pq_gl_pop(PONI_ABI());
void pq_seed_random_with_time(PONI_ABI());
ps_int pq_randi_range(PONI_ABI(ps_int v_low, ps_int v_high));
ps_float pq_randf_range(PONI_ABI(ps_float v0_low, ps_float v0_high));
void f_init_world(PONI_ABI());
void f_update_dt(PONI_ABI(ps_float v_dt));
void f_draw(PONI_ABI());
ps_vec2 f_convert_coord(PONI_ABI(ps_vec2 v0_x));
ps_vec2 f_inverse_convert(PONI_ABI(ps_vec2 v1_x));
void f_draw_bg(PONI_ABI());
void f_update(PONI_ABI());
void f_draw_texture_(PONI_ABI(struct texture2d* v_tex, ps_vec2 v_pos, ps_float v_rot, ps_float v5_scale, ps_vec4 v9_color));
ps_vec2 f_mouse(PONI_ABI());
ps_float f_compute_dt(PONI_ABI());
void f0_update(PONI_ABI());
void update(PONI_ABI());
ps_int f_tile_or(PONI_ABI(ps_int v_s, ps_int v_other));
struct cl_Actor* f_add_actor(PONI_ABI(ps_vec2 v1_pos, ps_vec2i v8_size));
struct cl_Solid* f_add_solid(PONI_ABI(ps_vec2 v2_pos, ps_vec2i v9_size));
ps_int f_collide_solids(PONI_ABI(ps_vec2 v3_pos, ps_vec2i v10_size));
ps_int f_check(PONI_ABI(ps_vec2 v5_pos));
ps_int f_collide_tag(PONI_ABI(ps_int v0_tag, ps_vec2 v4_pos, ps_vec2i v11_size));
ps_bool f_move_v(PONI_ABI(struct cl_Actor* v0_actor, ps_float v_dy));
ps_bool f_move_h(PONI_ABI(struct cl_Actor* v1_actor, ps_float v_dx));
ps_int f_signum(PONI_ABI(ps_int v4_x));
void poni_init_strings(struct poni_gc_context *ctx) {
	ps_str_const0 = ps_str_from_literal(ctx, "large dt: ");
}

// --- gc support ---
static inline size_t
poni_get_type_stride(uint64_t tag) {
	switch(tag) {
		// Memory safety: Don't let us access an invalid size.
		default:
			abort();
			return 0;
		case PONI_TAG_STRCONST:
		case PONI_TAG_STR:
		case PONI_TAG_STRBUF:
		case PONI_TAG_ARRAY:
		case PONI_TAG_DYNARRAY:
			return sizeof(void*);
		case PONI_TAG_FLOAT: return sizeof(ps_float);
		case PONI_TAG_INT:   return sizeof(ps_int);
		case PONI_TAG_BOOL:  return sizeof(ps_bool);
		case PONI_TAG_TY10: return sizeof(ps_vec2);
		case PONI_TAG_TY11: return sizeof(ps_vec3);
		case PONI_TAG_TY12: return sizeof(ps_vec4);
		case PONI_TAG_TY13: return sizeof(ps_vec2i);
		case PONI_TAG_TY14: return sizeof(ps_vec3i);
		case PONI_TAG_TY15: return sizeof(ps_vec4i);
		case PONI_TAG_TY62: return sizeof(struct ps_range_ie_62);
		case PONI_TAG_TY38:
		case PONI_TAG_TY39:
		case PONI_TAG_TY40:
		case PONI_TAG_TY41:
		case PONI_TAG_TY42:
		case PONI_TAG_TY43:
		case PONI_TAG_TY44:
		case PONI_TAG_TY45:
		case PONI_TAG_TY46:
		case PONI_TAG_TY47:
		case PONI_TAG_TY54:
		case PONI_TAG_TY55:
		case PONI_TAG_TY81:
		case PONI_TAG_TY82:
			return sizeof(void*);
		case PONI_TAG_TY18:
		case PONI_TAG_TY59:
		case PONI_TAG_TY60:
		case PONI_TAG_TY61:
		case PONI_TAG_TY63:
		case PONI_TAG_TY65:
		case PONI_TAG_TY66:
		case PONI_TAG_TY67:
		case PONI_TAG_TY68:
		case PONI_TAG_TY69:
		case PONI_TAG_TY70:
		case PONI_TAG_TY71:
		case PONI_TAG_TY72:
		case PONI_TAG_TY73:
		case PONI_TAG_TY74:
		case PONI_TAG_TY75:
		case PONI_TAG_TY76:
		case PONI_TAG_TY77:
		case PONI_TAG_TY80:
			return sizeof(struct { void (*fn)(void); void *closure; });
	}
}
static inline ps_bool
poni_is_value_type(uint64_t tag) { return !!(tag & 0x8000000000000000ULL); }
void
poni_gc_visit_valuetype(struct poni_gc *gc, void *object, uint64_t tag) {
	switch(tag) {
	case PONI_TAG_TY10: break;
	case PONI_TAG_TY11: break;
	case PONI_TAG_TY12: break;
	case PONI_TAG_TY13: break;
	case PONI_TAG_TY14: break;
	case PONI_TAG_TY15: break;
	case PONI_TAG_TY59: {
		ps_sig_53 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	case PONI_TAG_TY60: {
		ps_sig_23 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	case PONI_TAG_TY61: {
		ps_sig_58 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	case PONI_TAG_TY63: {
		ps_sig_4 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	case PONI_TAG_TY65: {
		ps_sig_5 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	case PONI_TAG_TY66: {
		ps_sig_48 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	case PONI_TAG_TY67: {
		ps_sig_52 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	case PONI_TAG_TY68: {
		ps_sig_31 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	case PONI_TAG_TY69: {
		ps_sig_24 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	case PONI_TAG_TY70: {
		ps_sig_18 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	case PONI_TAG_TY71: {
		ps_sig_37 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	case PONI_TAG_TY72: {
		ps_sig_2 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	case PONI_TAG_TY73: {
		ps_sig_55 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	case PONI_TAG_TY74: {
		ps_sig_57 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	case PONI_TAG_TY75: {
		ps_sig_36 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	case PONI_TAG_TY76: {
		ps_sig_56 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	case PONI_TAG_TY77: {
		ps_sig_38 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	case PONI_TAG_TY80: {
		ps_sig_59 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	}
}
void
poni_gc_visit_object(struct poni_gc *gc, void *object) {
    uint64_t tag = *(uint64_t*)object;
    switch(tag & 0xFFFFFFFFFFFFFFFEULL) {
		case PONI_TAG_STRCONST:
		case PONI_TAG_STR:
			break; // Nothing to do
		case PONI_TAG_STRBUF: {
			struct ps_strbuf *self = object;
			poni_gc_mark(gc, self->buffer);
			break;
		}
		case PONI_TAG_ARRAY: {
			struct ps_array_header *header = object;
			char *elem_root = (char*)object + sizeof(struct ps_array_header);
			if(poni_is_value_type(header->type)) {
				// As an optimization, never visit any objects inside an
				// array of primitive types. We should probably have an additional
				// type info function that tells us whether we need to iterate
				// here.
				if(header->type == PONI_TAG_INT || header->type == PONI_TAG_FLOAT
					|| header->type == PONI_TAG_BOOL)
				{ break; }

				size_t stride = poni_get_type_stride(header->type);

				// For value types, the inner objects do not themselves need
				// to be marked; so instead of going through the gc marker,
				// instead just visit them directly.
				for(ps_int i = 0; i < header->length; ++i) {
					poni_gc_visit_valuetype(gc, elem_root, header->type);
					elem_root += stride;
				}
			}
			else {
				size_t stride = poni_get_type_stride(header->type);

				for(ps_int i = 0; i < header->length; ++i) {
					uintptr_t as_ptr = *(uintptr_t*)(elem_root);
					poni_gc_mark(gc, (void*)as_ptr);
					elem_root += stride;
				}
			}
			break;
		}
		case PONI_TAG_DYNARRAY: {
			struct ps_dynarray_header *header = object;
			// For memory safety reasons, we need to be walking a known-good
			// pointer. So, store the pointer ahead of time, as its size
			// is immutable.
			//
			// We also cannot directly mark the inner buffer. The problem is
			// that it may have undefined contents, outside of the boundaries
			// of this array. So, instead we directly mark the inner buffer,
			// and then walk the children manually.
			struct ps_array_header *inner = header->buffer;
			poni_gc_mark(gc, inner);
			char *elem_root = (char*)inner + sizeof(struct ps_array_header);

			// Note that although the DynArray's length might be changed by
			// another thread, we shouldn't have any code that can invalidate
			// existing objects in the array (aside from maybe this code).
			//
			// So even if the length decreases after we read it, we shouldn't
			// end up reading an invalid object.
			//
			// (*writes* to the length will perhaps have to be atomic-acquire?
			// they *must* occur *after* any writes to the buffer contents).
			ps_int length = header->length;
			if(inner->length < length) { length = inner->length; }

			// Now the rest of the logic is essentially the same as the regular
			// arrays.
			if(poni_is_value_type(header->type)) {
				if(header->type == PONI_TAG_INT || header->type == PONI_TAG_FLOAT
					|| header->type == PONI_TAG_BOOL)
				{ break; }

				size_t stride = poni_get_type_stride(header->type);

				for(ps_int i = 0; i < length; ++i) {
					poni_gc_visit_valuetype(gc, elem_root, header->type);
					elem_root += stride;
				}
			}
			else {
				size_t stride = poni_get_type_stride(header->type);

				for(ps_int i = 0; i < length; ++i) {
					uintptr_t as_ptr = *(uintptr_t*)(elem_root);
					poni_gc_mark(gc, (void*)as_ptr);
					elem_root += stride;
				}
			}

			break;
		}
	case PONI_TAG_TY38: {
		struct cl_Screen *self = object;
		poni_gc_mark(gc, self->v0_camera);
		break;
	}
	case PONI_TAG_TY39: {
		struct cl_World *self = object;
		poni_gc_mark(gc, self->v_layers);
		poni_gc_mark(gc, self->v_actors);
		poni_gc_mark(gc, self->v_solids);
		break;
	}
	case PONI_TAG_TY40: {
		struct cl_Actor *self = object;
		poni_gc_mark(gc, self->v_collider);
		break;
	}
	case PONI_TAG_TY41: {
		struct cl_Collider *self = object;
		poni_gc_mark(gc, self->v_squishers);
		break;
	}
	case PONI_TAG_TY42: {
		struct cl_StaticTiledLayer *self = object;
		poni_gc_mark(gc, self->v_colliders);
		break;
	}
	case PONI_TAG_TY43: {
		struct texture2d *self = object;
		break;
	}
	case PONI_TAG_TY44: {
		struct camera2d *self = object;
		poni_gc_mark(gc, self->viewport);
		break;
	}
	case PONI_TAG_TY45: {
		struct camera_viewport *self = object;
		break;
	}
	case PONI_TAG_TY46: {
		struct cl_UpdateSmoothing *self = object;
		break;
	}
	case PONI_TAG_TY47: {
		struct cl_Solid *self = object;
		poni_gc_mark(gc, self->v0_collider);
		break;
	}
	case PONI_TAG_TY54: {
		struct sound *self = object;
		break;
	}
	case PONI_TAG_TY55: {
		struct font *self = object;
		break;
	}
	case PONI_TAG_TY81: {
		struct cl_closure *self = object;
		poni_gc_mark(gc, self->parent);
		poni_gc_mark(gc, self->v0_layer);
		break;
	}
	case PONI_TAG_TY82: {
		struct cl0_closure *self = object;
		poni_gc_mark(gc, self->parent);
		break;
	}
	}
}
void
poni_gc_visit_roots(struct poni_gc *gc) {
	poni_gc_mark(gc, (*v_screen));
	poni_gc_mark(gc, (*v_world));
	poni_gc_mark(gc, (*v_player));
	poni_gc_mark(gc, (*v_update_smoothing));
	poni_gc_mark(gc, ps_str_const0);
}
size_t
poni_gc_get_allocation_size(void *object) {
	uint64_t tag = *(uint64_t*)object;
	switch(tag) {
		// Memory safety: Don't let us access an invalid size.
		default:
			abort();
			return 0;
		case PONI_TAG_STRCONST:
		case PONI_TAG_STR:
		{
			struct ps_str *self = object;
			return sizeof(*self) + self->length;
		}
		case PONI_TAG_STRBUF: {
			return sizeof(struct ps_strbuf);
		}
		case PONI_TAG_ARRAY: {
			struct ps_array_header *header = object;
			size_t stride = poni_get_type_stride(header->type);
			return sizeof(*header) + stride * header->length;
		}
		case PONI_TAG_DYNARRAY: {
			return sizeof(struct ps_dynarray_header);
		}
	case PONI_TAG_INT: return sizeof(ps_int);
	case PONI_TAG_FLOAT: return sizeof(ps_float);
	case PONI_TAG_BOOL: return sizeof(ps_bool);
	case PONI_TAG_TY10: return sizeof(ps_vec2);
	case PONI_TAG_TY11: return sizeof(ps_vec3);
	case PONI_TAG_TY12: return sizeof(ps_vec4);
	case PONI_TAG_TY13: return sizeof(ps_vec2i);
	case PONI_TAG_TY14: return sizeof(ps_vec3i);
	case PONI_TAG_TY15: return sizeof(ps_vec4i);
	case PONI_TAG_TY18: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY38: return sizeof(*(struct cl_Screen*)(0));
	case PONI_TAG_TY39: return sizeof(*(struct cl_World*)(0));
	case PONI_TAG_TY40: return sizeof(*(struct cl_Actor*)(0));
	case PONI_TAG_TY41: return sizeof(*(struct cl_Collider*)(0));
	case PONI_TAG_TY42: return sizeof(*(struct cl_StaticTiledLayer*)(0));
	case PONI_TAG_TY43: return sizeof(*(struct texture2d*)(0));
	case PONI_TAG_TY44: return sizeof(*(struct camera2d*)(0));
	case PONI_TAG_TY45: return sizeof(*(struct camera_viewport*)(0));
	case PONI_TAG_TY46: return sizeof(*(struct cl_UpdateSmoothing*)(0));
	case PONI_TAG_TY47: return sizeof(*(struct cl_Solid*)(0));
	case PONI_TAG_TY54: return sizeof(*(struct sound*)(0));
	case PONI_TAG_TY55: return sizeof(*(struct font*)(0));
	case PONI_TAG_TY59: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY60: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY61: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY62: return sizeof(struct ps_range_ie_62);
	case PONI_TAG_TY63: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY65: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY66: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY67: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY68: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY69: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY70: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY71: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY72: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY73: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY74: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY75: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY76: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY77: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY80: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY81: return sizeof(*(struct cl_closure*)(0));
	case PONI_TAG_TY82: return sizeof(*(struct cl0_closure*)(0));
	}
}

void poni_init_globals(struct poni_gc_context *ctx) {
	bool existed = false;
	v_screen = poni_hot_lookup("struct cl_Screen* (*v_screen);", sizeof((*v_screen)), &existed);
	if(!existed) {
		struct cl_Screen* t0 = poni_gc_alloc_tagged(ctx, sizeof(struct cl_Screen), PONI_TAG_TY38);
		t0->v_bg_color = ps_mk_vec4(((ps_float)0.49019608), ((ps_float)0.5294118), ((ps_float)0.46666667), ((ps_float)1));
		t0->v_target_size = ps_mk_vec2(((ps_float)240), ((ps_float)180));
		t0->v_offset = ps_mk_vec2(((ps_float)0), ((ps_float)0));
		t0->v4_scale = ((ps_float)1);
		t0->v_target_offset = ps_mk_vec2(((ps_float)0), ((ps_float)0));
		struct camera2d* t1 = poni_gc_alloc_tagged(ctx, sizeof(struct camera2d), PONI_TAG_TY44);
		t1->rotation = ((ps_float)0);
		t1->zoom = ps_mk_vec2(((ps_float)1.0), ((ps_float)1.0));
		t1->target = ps_mk_vec2(((ps_float)0), ((ps_float)0));
		t1->offset = ps_mk_vec2(((ps_float)0), ((ps_float)0));
		struct camera_viewport* t3 = poni_gc_alloc_tagged(ctx, sizeof(struct camera_viewport), PONI_TAG_TY45);
		t3->offset = ps_mk_vec2(((ps_float)0), ((ps_float)0));
		t3->size = ps_mk_vec2(((ps_float)0), ((ps_float)0));
		struct camera_viewport* t2;
		t2 = (t3);
		t1->viewport = t2;
		t0->v0_camera = t1;
		(*v_screen) = t0;
	}
	v_world = poni_hot_lookup("struct cl_World* (*v_world);", sizeof((*v_world)), &existed);
	if(!existed) {
		struct cl_World* t4 = poni_gc_alloc_tagged(ctx, sizeof(struct cl_World), PONI_TAG_TY39);
		struct ps_arr_42* t6;
		struct ps_dynarr_42* t5; PONI_INIT_DYNARRAY(t6, t5, sizeof(struct cl_StaticTiledLayer*), 0, 0, PONI_TAG_TY42)
		t4->v_layers = t5;
		struct ps_arr_40* t8;
		struct ps_dynarr_40* t7; PONI_INIT_DYNARRAY(t8, t7, sizeof(struct cl_Actor*), 0, 0, PONI_TAG_TY40)
		t4->v_actors = t7;
		struct ps_arr_47* t10;
		struct ps_dynarr_47* t9; PONI_INIT_DYNARRAY(t10, t9, sizeof(struct cl_Solid*), 0, 0, PONI_TAG_TY47)
		t4->v_solids = t9;
		(*v_world) = t4;
	}
	v_player = poni_hot_lookup("struct cl_Actor* (*v_player);", sizeof((*v_player)), &existed);
	if(!existed) {
		struct cl_Actor* t11 = poni_gc_alloc_tagged(ctx, sizeof(struct cl_Actor), PONI_TAG_TY40);
		struct cl_Collider* t12 = poni_gc_alloc_tagged(ctx, sizeof(struct cl_Collider), PONI_TAG_TY41);
		t12->v7_size = ps_mk_vec2i(((ps_int)0), ((ps_int)0));
		t12->v0_pos = ps_mk_vec2(((ps_float)0), ((ps_float)0));
		t12->v_collidable = ((ps_bool)1);
		t12->v_squished = ((ps_bool)0);
		t12->v_remainder = ps_mk_vec2(((ps_float)0), ((ps_float)0));
		struct ps_arr_47* t14;
		struct ps_dynarr_47* t13; PONI_INIT_DYNARRAY(t14, t13, sizeof(struct cl_Solid*), 0, 0, PONI_TAG_TY47)
		t12->v_squishers = t13;
		t12->v_descent = ((ps_bool)0);
		t12->v_seen_wood = ((ps_bool)0);
		t11->v_collider = t12;
		(*v_player) = t11;
	}
	v_player_speed = poni_hot_lookup("ps_vec2 (*v_player_speed);", sizeof((*v_player_speed)), &existed);
	if(!existed) {
		(*v_player_speed) = ps_mk_vec2(((ps_float)0), ((ps_float)0));
	}
	v_update_smoothing = poni_hot_lookup("struct cl_UpdateSmoothing* (*v_update_smoothing);", sizeof((*v_update_smoothing)), &existed);
	if(!existed) {
		struct cl_UpdateSmoothing* t15 = poni_gc_alloc_tagged(ctx, sizeof(struct cl_UpdateSmoothing), PONI_TAG_TY46);
		t15->v_avg_dt = ((ps_float)0.003);
		t15->v_accumulator = ((ps_float)0);
		t15->v_do_init = ((ps_bool)1);
		(*v_update_smoothing) = t15;
	}
	v_T_EMPTY = poni_hot_lookup("ps_int (*v_T_EMPTY);", sizeof((*v_T_EMPTY)), &existed);
	if(!existed) {
		(*v_T_EMPTY) = ((ps_int)0);
	}
	v_T_SOLID = poni_hot_lookup("ps_int (*v_T_SOLID);", sizeof((*v_T_SOLID)), &existed);
	if(!existed) {
		(*v_T_SOLID) = ((ps_int)1);
	}
	v_T_JUMP_THROUGH = poni_hot_lookup("ps_int (*v_T_JUMP_THROUGH);", sizeof((*v_T_JUMP_THROUGH)), &existed);
	if(!existed) {
		(*v_T_JUMP_THROUGH) = ((ps_int)2);
	}
	v_T_COLLIDER = poni_hot_lookup("ps_int (*v_T_COLLIDER);", sizeof((*v_T_COLLIDER)), &existed);
	if(!existed) {
		(*v_T_COLLIDER) = ((ps_int)3);
	}
	v_K_SPACE = poni_hot_lookup("ps_int (*v_K_SPACE);", sizeof((*v_K_SPACE)), &existed);
	if(!existed) {
		(*v_K_SPACE) = ((ps_int)32);
	}
	v_K_APOSTROPHE = poni_hot_lookup("ps_int (*v_K_APOSTROPHE);", sizeof((*v_K_APOSTROPHE)), &existed);
	if(!existed) {
		(*v_K_APOSTROPHE) = ((ps_int)39);
	}
	v_K_COMMA = poni_hot_lookup("ps_int (*v_K_COMMA);", sizeof((*v_K_COMMA)), &existed);
	if(!existed) {
		(*v_K_COMMA) = ((ps_int)44);
	}
	v_K_MINUS = poni_hot_lookup("ps_int (*v_K_MINUS);", sizeof((*v_K_MINUS)), &existed);
	if(!existed) {
		(*v_K_MINUS) = ((ps_int)45);
	}
	v_K_PERIOD = poni_hot_lookup("ps_int (*v_K_PERIOD);", sizeof((*v_K_PERIOD)), &existed);
	if(!existed) {
		(*v_K_PERIOD) = ((ps_int)46);
	}
	v_K_SLASH = poni_hot_lookup("ps_int (*v_K_SLASH);", sizeof((*v_K_SLASH)), &existed);
	if(!existed) {
		(*v_K_SLASH) = ((ps_int)47);
	}
	v_K_0 = poni_hot_lookup("ps_int (*v_K_0);", sizeof((*v_K_0)), &existed);
	if(!existed) {
		(*v_K_0) = ((ps_int)48);
	}
	v_K_1 = poni_hot_lookup("ps_int (*v_K_1);", sizeof((*v_K_1)), &existed);
	if(!existed) {
		(*v_K_1) = ((ps_int)49);
	}
	v_K_2 = poni_hot_lookup("ps_int (*v_K_2);", sizeof((*v_K_2)), &existed);
	if(!existed) {
		(*v_K_2) = ((ps_int)50);
	}
	v_K_3 = poni_hot_lookup("ps_int (*v_K_3);", sizeof((*v_K_3)), &existed);
	if(!existed) {
		(*v_K_3) = ((ps_int)51);
	}
	v_K_4 = poni_hot_lookup("ps_int (*v_K_4);", sizeof((*v_K_4)), &existed);
	if(!existed) {
		(*v_K_4) = ((ps_int)52);
	}
	v_K_5 = poni_hot_lookup("ps_int (*v_K_5);", sizeof((*v_K_5)), &existed);
	if(!existed) {
		(*v_K_5) = ((ps_int)53);
	}
	v_K_6 = poni_hot_lookup("ps_int (*v_K_6);", sizeof((*v_K_6)), &existed);
	if(!existed) {
		(*v_K_6) = ((ps_int)54);
	}
	v_K_7 = poni_hot_lookup("ps_int (*v_K_7);", sizeof((*v_K_7)), &existed);
	if(!existed) {
		(*v_K_7) = ((ps_int)55);
	}
	v_K_8 = poni_hot_lookup("ps_int (*v_K_8);", sizeof((*v_K_8)), &existed);
	if(!existed) {
		(*v_K_8) = ((ps_int)56);
	}
	v_K_9 = poni_hot_lookup("ps_int (*v_K_9);", sizeof((*v_K_9)), &existed);
	if(!existed) {
		(*v_K_9) = ((ps_int)57);
	}
	v_K_SEMICOLON = poni_hot_lookup("ps_int (*v_K_SEMICOLON);", sizeof((*v_K_SEMICOLON)), &existed);
	if(!existed) {
		(*v_K_SEMICOLON) = ((ps_int)59);
	}
	v_K_EQUAL = poni_hot_lookup("ps_int (*v_K_EQUAL);", sizeof((*v_K_EQUAL)), &existed);
	if(!existed) {
		(*v_K_EQUAL) = ((ps_int)61);
	}
	v_K_A = poni_hot_lookup("ps_int (*v_K_A);", sizeof((*v_K_A)), &existed);
	if(!existed) {
		(*v_K_A) = ((ps_int)65);
	}
	v_K_B = poni_hot_lookup("ps_int (*v_K_B);", sizeof((*v_K_B)), &existed);
	if(!existed) {
		(*v_K_B) = ((ps_int)66);
	}
	v_K_C = poni_hot_lookup("ps_int (*v_K_C);", sizeof((*v_K_C)), &existed);
	if(!existed) {
		(*v_K_C) = ((ps_int)67);
	}
	v_K_D = poni_hot_lookup("ps_int (*v_K_D);", sizeof((*v_K_D)), &existed);
	if(!existed) {
		(*v_K_D) = ((ps_int)68);
	}
	v_K_E = poni_hot_lookup("ps_int (*v_K_E);", sizeof((*v_K_E)), &existed);
	if(!existed) {
		(*v_K_E) = ((ps_int)69);
	}
	v_K_F = poni_hot_lookup("ps_int (*v_K_F);", sizeof((*v_K_F)), &existed);
	if(!existed) {
		(*v_K_F) = ((ps_int)70);
	}
	v_K_G = poni_hot_lookup("ps_int (*v_K_G);", sizeof((*v_K_G)), &existed);
	if(!existed) {
		(*v_K_G) = ((ps_int)71);
	}
	v_K_H = poni_hot_lookup("ps_int (*v_K_H);", sizeof((*v_K_H)), &existed);
	if(!existed) {
		(*v_K_H) = ((ps_int)72);
	}
	v_K_I = poni_hot_lookup("ps_int (*v_K_I);", sizeof((*v_K_I)), &existed);
	if(!existed) {
		(*v_K_I) = ((ps_int)73);
	}
	v_K_J = poni_hot_lookup("ps_int (*v_K_J);", sizeof((*v_K_J)), &existed);
	if(!existed) {
		(*v_K_J) = ((ps_int)74);
	}
	v_K_K = poni_hot_lookup("ps_int (*v_K_K);", sizeof((*v_K_K)), &existed);
	if(!existed) {
		(*v_K_K) = ((ps_int)75);
	}
	v_K_L = poni_hot_lookup("ps_int (*v_K_L);", sizeof((*v_K_L)), &existed);
	if(!existed) {
		(*v_K_L) = ((ps_int)76);
	}
	v_K_M = poni_hot_lookup("ps_int (*v_K_M);", sizeof((*v_K_M)), &existed);
	if(!existed) {
		(*v_K_M) = ((ps_int)77);
	}
	v_K_N = poni_hot_lookup("ps_int (*v_K_N);", sizeof((*v_K_N)), &existed);
	if(!existed) {
		(*v_K_N) = ((ps_int)78);
	}
	v_K_O = poni_hot_lookup("ps_int (*v_K_O);", sizeof((*v_K_O)), &existed);
	if(!existed) {
		(*v_K_O) = ((ps_int)79);
	}
	v_K_P = poni_hot_lookup("ps_int (*v_K_P);", sizeof((*v_K_P)), &existed);
	if(!existed) {
		(*v_K_P) = ((ps_int)80);
	}
	v_K_Q = poni_hot_lookup("ps_int (*v_K_Q);", sizeof((*v_K_Q)), &existed);
	if(!existed) {
		(*v_K_Q) = ((ps_int)81);
	}
	v_K_R = poni_hot_lookup("ps_int (*v_K_R);", sizeof((*v_K_R)), &existed);
	if(!existed) {
		(*v_K_R) = ((ps_int)82);
	}
	v_K_S = poni_hot_lookup("ps_int (*v_K_S);", sizeof((*v_K_S)), &existed);
	if(!existed) {
		(*v_K_S) = ((ps_int)83);
	}
	v_K_T = poni_hot_lookup("ps_int (*v_K_T);", sizeof((*v_K_T)), &existed);
	if(!existed) {
		(*v_K_T) = ((ps_int)84);
	}
	v_K_U = poni_hot_lookup("ps_int (*v_K_U);", sizeof((*v_K_U)), &existed);
	if(!existed) {
		(*v_K_U) = ((ps_int)85);
	}
	v_K_V = poni_hot_lookup("ps_int (*v_K_V);", sizeof((*v_K_V)), &existed);
	if(!existed) {
		(*v_K_V) = ((ps_int)86);
	}
	v_K_W = poni_hot_lookup("ps_int (*v_K_W);", sizeof((*v_K_W)), &existed);
	if(!existed) {
		(*v_K_W) = ((ps_int)87);
	}
	v_K_X = poni_hot_lookup("ps_int (*v_K_X);", sizeof((*v_K_X)), &existed);
	if(!existed) {
		(*v_K_X) = ((ps_int)88);
	}
	v_K_Y = poni_hot_lookup("ps_int (*v_K_Y);", sizeof((*v_K_Y)), &existed);
	if(!existed) {
		(*v_K_Y) = ((ps_int)89);
	}
	v_K_Z = poni_hot_lookup("ps_int (*v_K_Z);", sizeof((*v_K_Z)), &existed);
	if(!existed) {
		(*v_K_Z) = ((ps_int)90);
	}
	v_K_LEFTBRACKET = poni_hot_lookup("ps_int (*v_K_LEFTBRACKET);", sizeof((*v_K_LEFTBRACKET)), &existed);
	if(!existed) {
		(*v_K_LEFTBRACKET) = ((ps_int)91);
	}
	v_K_BACKSLASH = poni_hot_lookup("ps_int (*v_K_BACKSLASH);", sizeof((*v_K_BACKSLASH)), &existed);
	if(!existed) {
		(*v_K_BACKSLASH) = ((ps_int)92);
	}
	v_K_RIGHTBRACKET = poni_hot_lookup("ps_int (*v_K_RIGHTBRACKET);", sizeof((*v_K_RIGHTBRACKET)), &existed);
	if(!existed) {
		(*v_K_RIGHTBRACKET) = ((ps_int)93);
	}
	v_K_GRAVEACCENT = poni_hot_lookup("ps_int (*v_K_GRAVEACCENT);", sizeof((*v_K_GRAVEACCENT)), &existed);
	if(!existed) {
		(*v_K_GRAVEACCENT) = ((ps_int)96);
	}
	v_K_WORLD1 = poni_hot_lookup("ps_int (*v_K_WORLD1);", sizeof((*v_K_WORLD1)), &existed);
	if(!existed) {
		(*v_K_WORLD1) = ((ps_int)256);
	}
	v_K_WORLD2 = poni_hot_lookup("ps_int (*v_K_WORLD2);", sizeof((*v_K_WORLD2)), &existed);
	if(!existed) {
		(*v_K_WORLD2) = ((ps_int)257);
	}
	v_K_ESCAPE = poni_hot_lookup("ps_int (*v_K_ESCAPE);", sizeof((*v_K_ESCAPE)), &existed);
	if(!existed) {
		(*v_K_ESCAPE) = ((ps_int)65307);
	}
	v_K_ENTER = poni_hot_lookup("ps_int (*v_K_ENTER);", sizeof((*v_K_ENTER)), &existed);
	if(!existed) {
		(*v_K_ENTER) = ((ps_int)65293);
	}
	v_K_TAB = poni_hot_lookup("ps_int (*v_K_TAB);", sizeof((*v_K_TAB)), &existed);
	if(!existed) {
		(*v_K_TAB) = ((ps_int)65289);
	}
	v_K_BACKSPACE = poni_hot_lookup("ps_int (*v_K_BACKSPACE);", sizeof((*v_K_BACKSPACE)), &existed);
	if(!existed) {
		(*v_K_BACKSPACE) = ((ps_int)65288);
	}
	v_K_INSERT = poni_hot_lookup("ps_int (*v_K_INSERT);", sizeof((*v_K_INSERT)), &existed);
	if(!existed) {
		(*v_K_INSERT) = ((ps_int)65379);
	}
	v_K_DELETE = poni_hot_lookup("ps_int (*v_K_DELETE);", sizeof((*v_K_DELETE)), &existed);
	if(!existed) {
		(*v_K_DELETE) = ((ps_int)65535);
	}
	v_K_RIGHT = poni_hot_lookup("ps_int (*v_K_RIGHT);", sizeof((*v_K_RIGHT)), &existed);
	if(!existed) {
		(*v_K_RIGHT) = ((ps_int)65363);
	}
	v_K_LEFT = poni_hot_lookup("ps_int (*v_K_LEFT);", sizeof((*v_K_LEFT)), &existed);
	if(!existed) {
		(*v_K_LEFT) = ((ps_int)65361);
	}
	v_K_DOWN = poni_hot_lookup("ps_int (*v_K_DOWN);", sizeof((*v_K_DOWN)), &existed);
	if(!existed) {
		(*v_K_DOWN) = ((ps_int)65364);
	}
	v_K_UP = poni_hot_lookup("ps_int (*v_K_UP);", sizeof((*v_K_UP)), &existed);
	if(!existed) {
		(*v_K_UP) = ((ps_int)65362);
	}
	v_K_PAGEUP = poni_hot_lookup("ps_int (*v_K_PAGEUP);", sizeof((*v_K_PAGEUP)), &existed);
	if(!existed) {
		(*v_K_PAGEUP) = ((ps_int)65365);
	}
	v_K_PAGEDOWN = poni_hot_lookup("ps_int (*v_K_PAGEDOWN);", sizeof((*v_K_PAGEDOWN)), &existed);
	if(!existed) {
		(*v_K_PAGEDOWN) = ((ps_int)65366);
	}
	v_K_HOME = poni_hot_lookup("ps_int (*v_K_HOME);", sizeof((*v_K_HOME)), &existed);
	if(!existed) {
		(*v_K_HOME) = ((ps_int)65360);
	}
	v_K_END = poni_hot_lookup("ps_int (*v_K_END);", sizeof((*v_K_END)), &existed);
	if(!existed) {
		(*v_K_END) = ((ps_int)65367);
	}
	v_K_CAPSLOCK = poni_hot_lookup("ps_int (*v_K_CAPSLOCK);", sizeof((*v_K_CAPSLOCK)), &existed);
	if(!existed) {
		(*v_K_CAPSLOCK) = ((ps_int)65509);
	}
	v_K_SCROLLLOCK = poni_hot_lookup("ps_int (*v_K_SCROLLLOCK);", sizeof((*v_K_SCROLLLOCK)), &existed);
	if(!existed) {
		(*v_K_SCROLLLOCK) = ((ps_int)65300);
	}
	v_K_NUMLOCK = poni_hot_lookup("ps_int (*v_K_NUMLOCK);", sizeof((*v_K_NUMLOCK)), &existed);
	if(!existed) {
		(*v_K_NUMLOCK) = ((ps_int)65407);
	}
	v_K_PRINTSCREEN = poni_hot_lookup("ps_int (*v_K_PRINTSCREEN);", sizeof((*v_K_PRINTSCREEN)), &existed);
	if(!existed) {
		(*v_K_PRINTSCREEN) = ((ps_int)64797);
	}
	v_K_PAUSE = poni_hot_lookup("ps_int (*v_K_PAUSE);", sizeof((*v_K_PAUSE)), &existed);
	if(!existed) {
		(*v_K_PAUSE) = ((ps_int)65299);
	}
	v_K_F1 = poni_hot_lookup("ps_int (*v_K_F1);", sizeof((*v_K_F1)), &existed);
	if(!existed) {
		(*v_K_F1) = ((ps_int)65470);
	}
	v_K_F2 = poni_hot_lookup("ps_int (*v_K_F2);", sizeof((*v_K_F2)), &existed);
	if(!existed) {
		(*v_K_F2) = ((ps_int)65471);
	}
	v_K_F3 = poni_hot_lookup("ps_int (*v_K_F3);", sizeof((*v_K_F3)), &existed);
	if(!existed) {
		(*v_K_F3) = ((ps_int)65472);
	}
	v_K_F4 = poni_hot_lookup("ps_int (*v_K_F4);", sizeof((*v_K_F4)), &existed);
	if(!existed) {
		(*v_K_F4) = ((ps_int)65473);
	}
	v_K_F5 = poni_hot_lookup("ps_int (*v_K_F5);", sizeof((*v_K_F5)), &existed);
	if(!existed) {
		(*v_K_F5) = ((ps_int)65474);
	}
	v_K_F6 = poni_hot_lookup("ps_int (*v_K_F6);", sizeof((*v_K_F6)), &existed);
	if(!existed) {
		(*v_K_F6) = ((ps_int)65475);
	}
	v_K_F7 = poni_hot_lookup("ps_int (*v_K_F7);", sizeof((*v_K_F7)), &existed);
	if(!existed) {
		(*v_K_F7) = ((ps_int)65476);
	}
	v_K_F8 = poni_hot_lookup("ps_int (*v_K_F8);", sizeof((*v_K_F8)), &existed);
	if(!existed) {
		(*v_K_F8) = ((ps_int)65477);
	}
	v_K_F9 = poni_hot_lookup("ps_int (*v_K_F9);", sizeof((*v_K_F9)), &existed);
	if(!existed) {
		(*v_K_F9) = ((ps_int)65478);
	}
	v_K_F10 = poni_hot_lookup("ps_int (*v_K_F10);", sizeof((*v_K_F10)), &existed);
	if(!existed) {
		(*v_K_F10) = ((ps_int)65479);
	}
	v_K_F11 = poni_hot_lookup("ps_int (*v_K_F11);", sizeof((*v_K_F11)), &existed);
	if(!existed) {
		(*v_K_F11) = ((ps_int)65480);
	}
	v_K_F12 = poni_hot_lookup("ps_int (*v_K_F12);", sizeof((*v_K_F12)), &existed);
	if(!existed) {
		(*v_K_F12) = ((ps_int)65481);
	}
	v_K_F13 = poni_hot_lookup("ps_int (*v_K_F13);", sizeof((*v_K_F13)), &existed);
	if(!existed) {
		(*v_K_F13) = ((ps_int)65482);
	}
	v_K_F14 = poni_hot_lookup("ps_int (*v_K_F14);", sizeof((*v_K_F14)), &existed);
	if(!existed) {
		(*v_K_F14) = ((ps_int)65483);
	}
	v_K_F15 = poni_hot_lookup("ps_int (*v_K_F15);", sizeof((*v_K_F15)), &existed);
	if(!existed) {
		(*v_K_F15) = ((ps_int)65484);
	}
	v_K_F16 = poni_hot_lookup("ps_int (*v_K_F16);", sizeof((*v_K_F16)), &existed);
	if(!existed) {
		(*v_K_F16) = ((ps_int)65485);
	}
	v_K_F17 = poni_hot_lookup("ps_int (*v_K_F17);", sizeof((*v_K_F17)), &existed);
	if(!existed) {
		(*v_K_F17) = ((ps_int)65486);
	}
	v_K_F18 = poni_hot_lookup("ps_int (*v_K_F18);", sizeof((*v_K_F18)), &existed);
	if(!existed) {
		(*v_K_F18) = ((ps_int)65487);
	}
	v_K_F19 = poni_hot_lookup("ps_int (*v_K_F19);", sizeof((*v_K_F19)), &existed);
	if(!existed) {
		(*v_K_F19) = ((ps_int)65488);
	}
	v_K_F20 = poni_hot_lookup("ps_int (*v_K_F20);", sizeof((*v_K_F20)), &existed);
	if(!existed) {
		(*v_K_F20) = ((ps_int)65489);
	}
	v_K_F21 = poni_hot_lookup("ps_int (*v_K_F21);", sizeof((*v_K_F21)), &existed);
	if(!existed) {
		(*v_K_F21) = ((ps_int)65490);
	}
	v_K_F22 = poni_hot_lookup("ps_int (*v_K_F22);", sizeof((*v_K_F22)), &existed);
	if(!existed) {
		(*v_K_F22) = ((ps_int)65491);
	}
	v_K_F23 = poni_hot_lookup("ps_int (*v_K_F23);", sizeof((*v_K_F23)), &existed);
	if(!existed) {
		(*v_K_F23) = ((ps_int)65492);
	}
	v_K_F24 = poni_hot_lookup("ps_int (*v_K_F24);", sizeof((*v_K_F24)), &existed);
	if(!existed) {
		(*v_K_F24) = ((ps_int)65493);
	}
	v_K_F25 = poni_hot_lookup("ps_int (*v_K_F25);", sizeof((*v_K_F25)), &existed);
	if(!existed) {
		(*v_K_F25) = ((ps_int)65494);
	}
	v_K_KP0 = poni_hot_lookup("ps_int (*v_K_KP0);", sizeof((*v_K_KP0)), &existed);
	if(!existed) {
		(*v_K_KP0) = ((ps_int)65456);
	}
	v_K_KP1 = poni_hot_lookup("ps_int (*v_K_KP1);", sizeof((*v_K_KP1)), &existed);
	if(!existed) {
		(*v_K_KP1) = ((ps_int)65457);
	}
	v_K_KP2 = poni_hot_lookup("ps_int (*v_K_KP2);", sizeof((*v_K_KP2)), &existed);
	if(!existed) {
		(*v_K_KP2) = ((ps_int)65458);
	}
	v_K_KP3 = poni_hot_lookup("ps_int (*v_K_KP3);", sizeof((*v_K_KP3)), &existed);
	if(!existed) {
		(*v_K_KP3) = ((ps_int)65459);
	}
	v_K_KP4 = poni_hot_lookup("ps_int (*v_K_KP4);", sizeof((*v_K_KP4)), &existed);
	if(!existed) {
		(*v_K_KP4) = ((ps_int)65460);
	}
	v_K_KP5 = poni_hot_lookup("ps_int (*v_K_KP5);", sizeof((*v_K_KP5)), &existed);
	if(!existed) {
		(*v_K_KP5) = ((ps_int)65461);
	}
	v_K_KP6 = poni_hot_lookup("ps_int (*v_K_KP6);", sizeof((*v_K_KP6)), &existed);
	if(!existed) {
		(*v_K_KP6) = ((ps_int)65462);
	}
	v_K_KP7 = poni_hot_lookup("ps_int (*v_K_KP7);", sizeof((*v_K_KP7)), &existed);
	if(!existed) {
		(*v_K_KP7) = ((ps_int)65463);
	}
	v_K_KP8 = poni_hot_lookup("ps_int (*v_K_KP8);", sizeof((*v_K_KP8)), &existed);
	if(!existed) {
		(*v_K_KP8) = ((ps_int)65464);
	}
	v_K_KP9 = poni_hot_lookup("ps_int (*v_K_KP9);", sizeof((*v_K_KP9)), &existed);
	if(!existed) {
		(*v_K_KP9) = ((ps_int)65465);
	}
	v_K_KPDECIMAL = poni_hot_lookup("ps_int (*v_K_KPDECIMAL);", sizeof((*v_K_KPDECIMAL)), &existed);
	if(!existed) {
		(*v_K_KPDECIMAL) = ((ps_int)65454);
	}
	v_K_KPDIVIDE = poni_hot_lookup("ps_int (*v_K_KPDIVIDE);", sizeof((*v_K_KPDIVIDE)), &existed);
	if(!existed) {
		(*v_K_KPDIVIDE) = ((ps_int)65455);
	}
	v_K_KPMULTIPLY = poni_hot_lookup("ps_int (*v_K_KPMULTIPLY);", sizeof((*v_K_KPMULTIPLY)), &existed);
	if(!existed) {
		(*v_K_KPMULTIPLY) = ((ps_int)65450);
	}
	v_K_KPSUBTRACT = poni_hot_lookup("ps_int (*v_K_KPSUBTRACT);", sizeof((*v_K_KPSUBTRACT)), &existed);
	if(!existed) {
		(*v_K_KPSUBTRACT) = ((ps_int)65453);
	}
	v_K_KPADD = poni_hot_lookup("ps_int (*v_K_KPADD);", sizeof((*v_K_KPADD)), &existed);
	if(!existed) {
		(*v_K_KPADD) = ((ps_int)65451);
	}
	v_K_KPENTER = poni_hot_lookup("ps_int (*v_K_KPENTER);", sizeof((*v_K_KPENTER)), &existed);
	if(!existed) {
		(*v_K_KPENTER) = ((ps_int)65421);
	}
	v_K_KPEQUAL = poni_hot_lookup("ps_int (*v_K_KPEQUAL);", sizeof((*v_K_KPEQUAL)), &existed);
	if(!existed) {
		(*v_K_KPEQUAL) = ((ps_int)65469);
	}
	v_K_LEFTSHIFT = poni_hot_lookup("ps_int (*v_K_LEFTSHIFT);", sizeof((*v_K_LEFTSHIFT)), &existed);
	if(!existed) {
		(*v_K_LEFTSHIFT) = ((ps_int)65505);
	}
	v_K_LEFTCONTROL = poni_hot_lookup("ps_int (*v_K_LEFTCONTROL);", sizeof((*v_K_LEFTCONTROL)), &existed);
	if(!existed) {
		(*v_K_LEFTCONTROL) = ((ps_int)65507);
	}
	v_K_LEFTALT = poni_hot_lookup("ps_int (*v_K_LEFTALT);", sizeof((*v_K_LEFTALT)), &existed);
	if(!existed) {
		(*v_K_LEFTALT) = ((ps_int)65513);
	}
	v_K_LEFTSUPER = poni_hot_lookup("ps_int (*v_K_LEFTSUPER);", sizeof((*v_K_LEFTSUPER)), &existed);
	if(!existed) {
		(*v_K_LEFTSUPER) = ((ps_int)65515);
	}
	v_K_RIGHTSHIFT = poni_hot_lookup("ps_int (*v_K_RIGHTSHIFT);", sizeof((*v_K_RIGHTSHIFT)), &existed);
	if(!existed) {
		(*v_K_RIGHTSHIFT) = ((ps_int)65506);
	}
	v_K_RIGHTCONTROL = poni_hot_lookup("ps_int (*v_K_RIGHTCONTROL);", sizeof((*v_K_RIGHTCONTROL)), &existed);
	if(!existed) {
		(*v_K_RIGHTCONTROL) = ((ps_int)65508);
	}
	v_K_RIGHTALT = poni_hot_lookup("ps_int (*v_K_RIGHTALT);", sizeof((*v_K_RIGHTALT)), &existed);
	if(!existed) {
		(*v_K_RIGHTALT) = ((ps_int)65514);
	}
	v_K_RIGHTSUPER = poni_hot_lookup("ps_int (*v_K_RIGHTSUPER);", sizeof((*v_K_RIGHTSUPER)), &existed);
	if(!existed) {
		(*v_K_RIGHTSUPER) = ((ps_int)65516);
	}
	v_K_MENU = poni_hot_lookup("ps_int (*v_K_MENU);", sizeof((*v_K_MENU)), &existed);
	if(!existed) {
		(*v_K_MENU) = ((ps_int)65383);
	}
	v_K_BACK = poni_hot_lookup("ps_int (*v_K_BACK);", sizeof((*v_K_BACK)), &existed);
	if(!existed) {
		(*v_K_BACK) = ((ps_int)65284);
	}
	v_K_UNKNOWN = poni_hot_lookup("ps_int (*v_K_UNKNOWN);", sizeof((*v_K_UNKNOWN)), &existed);
	if(!existed) {
		(*v_K_UNKNOWN) = ((ps_int)511);
	}
	v_MOUSE_LEFT = poni_hot_lookup("ps_int (*v_MOUSE_LEFT);", sizeof((*v_MOUSE_LEFT)), &existed);
	if(!existed) {
		(*v_MOUSE_LEFT) = ((ps_int)0);
	}
	v_MOUSE_MIDDLE = poni_hot_lookup("ps_int (*v_MOUSE_MIDDLE);", sizeof((*v_MOUSE_MIDDLE)), &existed);
	if(!existed) {
		(*v_MOUSE_MIDDLE) = ((ps_int)1);
	}
	v_MOUSE_RIGHT = poni_hot_lookup("ps_int (*v_MOUSE_RIGHT);", sizeof((*v_MOUSE_RIGHT)), &existed);
	if(!existed) {
		(*v_MOUSE_RIGHT) = ((ps_int)2);
	}
	v_FILTER_LINEAR = poni_hot_lookup("ps_int (*v_FILTER_LINEAR);", sizeof((*v_FILTER_LINEAR)), &existed);
	if(!existed) {
		(*v_FILTER_LINEAR) = ((ps_int)0);
	}
	v_FILTER_NEAREST = poni_hot_lookup("ps_int (*v_FILTER_NEAREST);", sizeof((*v_FILTER_NEAREST)), &existed);
	if(!existed) {
		(*v_FILTER_NEAREST) = ((ps_int)1);
	}

}
void poni_init(struct poni_gc_context *ctx) {}
// --- function definitions ---
ps_vec2 f_convert_coord(PONI_ABI(ps_vec2 v0_x)) {
	struct cl_Screen *const this = closure;
	ps_vec2 t0;
	{
		ps_vec2 t1;
		t1.v_0 = v0_x.v_0 * this->v4_scale;
		t1.v_1 = v0_x.v_1 * this->v4_scale;
		t0 = t1;
	}
	return t0;
}
void update(PONI_ABI()) {
	{
		clear_background(ctx, ps_mk_vec4(((ps_float)0), ((ps_float)0), ((ps_float)0), ((ps_float)1)), NULL);
		f_update(ctx, (*v_screen));
		f_draw_bg(ctx, (*v_screen));
		f0_update(ctx, (*v_update_smoothing));
	}
}
ps_bool f_move_h(PONI_ABI(struct cl_Actor* v1_actor, ps_float v_dx)) {
	struct cl_World *const this = closure;
	ps_bool t0;
	{
		struct cl_Collider* t1 = v1_actor->v_collider;
		struct cl_Collider* v0_col = t1;
		ps_float t2 = v0_col->v_remainder.v_0;
		ps_float t3 = v0_col->v_remainder.v_0 = (t2 + v_dx);
		ps_float t4 = v0_col->v_remainder.v_0;
		ps_int t5 = pq_round(ctx, t4, NULL);
		ps_int v0_move = t5;
		if ((ps_bool)(v0_move != ((ps_int)0))) {
			ps_float t6 = v0_col->v_remainder.v_0;
			ps_float t7;
			t7 = ps_promote_int_to_float(v0_move);
			ps_float t8 = v0_col->v_remainder.v_0 = (t6 - t7);
			ps_int t9 = f_signum(ctx, v0_move, NULL);
			ps_int v0_sign = t9;
			for(;;) {
				if(!(ps_bool)(v0_move != ((ps_int)0))) { break; }
				{
					ps_vec2 t10 = v0_col->v0_pos;
					ps_float t11;
					t11 = ps_promote_int_to_float(v0_sign);
					ps_vec2 t12;
					t12.v_0 = t10.v_0 + ps_mk_vec2(t11, ((ps_float)0)).v_0;
					t12.v_1 = t10.v_1 + ps_mk_vec2(t11, ((ps_float)0)).v_1;
					ps_vec2i t13 = v0_col->v7_size;
					ps_int t14 = f_collide_solids(ctx, t12, t13, this);
					ps_int v5_tile = t14;
					if ((ps_bool)(v5_tile == (*v_T_JUMP_THROUGH))) {
						ps_bool t15 = v0_col->v_descent = ((ps_bool)1);
						ps_bool t16 = v0_col->v_seen_wood = ((ps_bool)1);
					}
					ps_bool t17 = (ps_bool)(v5_tile == (*v_T_EMPTY));
					if(!t17) {
						t17 = (ps_bool)(v5_tile == (*v_T_JUMP_THROUGH));
					}
					if (t17) {
						ps_float t18 = v0_col->v0_pos.v_0;
						ps_float t19;
						t19 = ps_promote_int_to_float(v0_sign);
						ps_float t20 = v0_col->v0_pos.v_0 = (t18 + t19);
						v0_move = (v0_move - v0_sign);
					}
					else {
						return ((ps_bool)0);
					}
				}
			}
		}
		t0 = ((ps_bool)1);
	}
	return t0;
}
void f_draw(PONI_ABI()) {
	{
		struct ps_dynarr_42* t0 = (*v_world)->v_layers;
		if(((ps_int)0) < 0 || ((ps_int)0) >= t0->header.length) {ps_panic(ctx, "game.poni", 51, 22, "index out of bounds"); };
		struct cl_StaticTiledLayer* t1 = ((struct ps_arr_42*)t0->header.buffer)->contents[((ps_int)0)];
		struct cl_StaticTiledLayer* v_layer = t1;
		ps_int v_y = ((ps_int)0);
		ps_int v_ndx = ((ps_int)0);
		for(;;) {
			ps_int t2 = v_layer->v_colliders->header.length;
			if(!(ps_bool)(v_ndx < t2)) { break; }
			{
				{
					struct ps_range_ie_62 t3;
					t3.left = ((ps_int)0);
					ps_int t4 = v_layer->v_width;
					t3.right = t4;
					ps_int t5 = t3.left;
					ps_int v5_x = (t5 - ((ps_int)1));
					for(;;) {
						struct ps_range_ie_62 t6;
						t6.left = ((ps_int)0);
						ps_int t7 = v_layer->v_width;
						t6.right = t7;
						ps_int t8 = t6.right;
						if(!(ps_bool)(v5_x < (t8 - ((ps_int)1)))) { break; }
						{
							v5_x = (v5_x + ((ps_int)1));
							ps_int v_x = v5_x;
							{
								struct ps_dynarr_6* t9 = v_layer->v_colliders;
								ps_int t10 = v_ndx;
								if(t10 < 0 || t10 >= t9->header.length) {ps_panic(ctx, "game.poni", 56, 29, "index out of bounds"); };
								ps_int v_tile = ((struct ps_arr_6*)t9->header.buffer)->contents[t10];
								if ((ps_bool)(v_tile != (*v_T_EMPTY))) {
									ps_vec2 t11;
									t11.v_0 = ps_promote_int_to_float(ps_mk_vec2i((v_x * ((ps_int)16)), (v_y * ((ps_int)16))).v_0);
									t11.v_1 = ps_promote_int_to_float(ps_mk_vec2i((v_x * ((ps_int)16)), (v_y * ((ps_int)16))).v_1);
									draw_rectangle(ctx, t11, ps_mk_vec2(((ps_float)16), ((ps_float)16)), ps_mk_vec4(((ps_float)0.3019608), ((ps_float)0.20784314), ((ps_float)0.8392157), ((ps_float)1)), NULL);
								}
							}
						}
					}
				}
				v_ndx = (v_ndx + ((ps_int)1));
			}
		}
		ps_vec2 t12 = (*v_player)->v_collider->v0_pos;
		draw_rectangle(ctx, t12, ps_mk_vec2(((ps_float)16), ((ps_float)16)), ps_mk_vec4(((ps_float)0.21960784), ((ps_float)0.8117647), ((ps_float)0.22745098), ((ps_float)1)), NULL);
	}
}
void f0_update(PONI_ABI()) {
	struct cl_UpdateSmoothing *const this = closure;
	{
		if (this->v_do_init) {
			f_init_world(ctx, NULL);
			this->v_do_init = ((ps_bool)0);
		}
		ps_float t0 = f_compute_dt(ctx, (*v_update_smoothing));
		ps_float v1_dt = t0;
		ps_float t1;
		if ((ps_bool)(v1_dt > ((ps_float)0.04))) {
			ps_float t2;
			t2 = ((ps_float)0.04);
			t1 = t2;
		}
		else {
			ps_float t3;
			t3 = v1_dt;
			t1 = t3;
		}
		ps_float v_actual_dt = t1;
		this->v_accumulator = (this->v_accumulator + v_actual_dt);
		ps_int v_max_counter = ((ps_int)0);
		for(;;) {
			if(!(ps_bool)(this->v_accumulator > ((ps_float)0))) { break; }
			{
				ps_float v_timestep = ((ps_float)0.0166666666667);
				f_update_dt(ctx, v_timestep, NULL);
				this->v_accumulator = (this->v_accumulator - v_timestep);
				v_max_counter = (v_max_counter + ((ps_int)1));
				if ((ps_bool)(v_max_counter >= ((ps_int)16))) {
					break;
				}
			}
		}
		f_draw(ctx, NULL);
	}
}
ps_bool f_move_v(PONI_ABI(struct cl_Actor* v0_actor, ps_float v_dy)) {
	struct cl_World *const this = closure;
	ps_bool t0;
	{
		struct cl_Collider* t1 = v0_actor->v_collider;
		struct cl_Collider* v_col = t1;
		ps_float t2 = v_col->v_remainder.v_1;
		ps_float t3 = v_col->v_remainder.v_1 = (t2 + v_dy);
		ps_float t4 = v_col->v_remainder.v_1;
		ps_int t5 = pq_round(ctx, t4, NULL);
		ps_int v_move = t5;
		if ((ps_bool)(v_move != ((ps_int)0))) {
			ps_float t6 = v_col->v_remainder.v_1;
			ps_float t7;
			t7 = ps_promote_int_to_float(v_move);
			ps_float t8 = v_col->v_remainder.v_1 = (t6 - t7);
			ps_int t9 = f_signum(ctx, v_move, NULL);
			ps_int v_sign = t9;
			for(;;) {
				if(!(ps_bool)(v_move != ((ps_int)0))) { break; }
				{
					ps_vec2 t10 = v_col->v0_pos;
					ps_float t11;
					t11 = ps_promote_int_to_float(v_sign);
					ps_vec2 t12;
					t12.v_0 = t10.v_0 + ps_mk_vec2(((ps_float)0), t11).v_0;
					t12.v_1 = t10.v_1 + ps_mk_vec2(((ps_float)0), t11).v_1;
					ps_vec2i t13 = v_col->v7_size;
					ps_int t14 = f_collide_solids(ctx, t12, t13, this);
					ps_int v3_tile = t14;
					ps_bool t15 = (ps_bool)(v3_tile == (*v_T_JUMP_THROUGH));
					if(t15) {
						ps_bool t16 = v_col->v_descent;
						t15 = t16;
					}
					if (t15) {
						ps_bool t17 = v_col->v_seen_wood = ((ps_bool)1);
					}
					ps_bool t18 = (ps_bool)(v3_tile == (*v_T_JUMP_THROUGH));
					if(t18) {
						t18 = (ps_bool)(v_sign < ((ps_int)0));
					}
					if (t18) {
						ps_bool t19 = v_col->v_seen_wood = ((ps_bool)1);
						ps_bool t20 = v_col->v_descent = ((ps_bool)1);
					}
					ps_bool t21 = (ps_bool)(v3_tile == (*v_T_EMPTY));
					if(!t21) {
						ps_bool t22 = (ps_bool)(v3_tile == (*v_T_JUMP_THROUGH));
						if(t22) {
							ps_bool t23 = v_col->v_descent;
							t22 = t23;
						}
						t21 = t22;
					}
					if (t21) {
						ps_float t24 = v_col->v0_pos.v_1;
						ps_float t25;
						t25 = ps_promote_int_to_float(v_sign);
						ps_float t26 = v_col->v0_pos.v_1 = (t24 + t25);
						v_move = (v_move - v_sign);
					}
					else {
						return ((ps_bool)0);
					}
				}
			}
		}
		ps_vec2 t27 = v_col->v0_pos;
		ps_vec2i t28 = v_col->v7_size;
		ps_int t29 = f_collide_solids(ctx, t27, t28, this);
		ps_int v4_tile = t29;
		if ((ps_bool)(v4_tile != (*v_T_JUMP_THROUGH))) {
			ps_bool t30 = v_col->v_seen_wood = ((ps_bool)0);
			ps_bool t31 = v_col->v_descent = ((ps_bool)0);
		}
		t0 = ((ps_bool)1);
	}
	return t0;
}
void f_draw_bg(PONI_ABI()) {
	struct cl_Screen *const this = closure;
	{
		ps_vec2 t0;
		t0.v_0 = -this->v_target_size.v_0;
		t0.v_1 = -this->v_target_size.v_1;
		ps_vec2 t1;
		t1.v_0 = t0.v_0 / ((ps_int)2);
		t1.v_1 = t0.v_1 / ((ps_int)2);
		ps_vec2 t2;
		t2.v_0 = t1.v_0 - this->v_target_offset.v_0;
		t2.v_1 = t1.v_1 - this->v_target_offset.v_1;
		draw_rectangle(ctx, t2, this->v_target_size, this->v_bg_color, NULL);
	}
}
struct cl_Actor* f_add_actor(PONI_ABI(ps_vec2 v1_pos, ps_vec2i v8_size)) {
	struct cl_World *const this = closure;
	struct cl_Actor* t0;
	{
		ps_int t1 = f_collide_solids(ctx, v1_pos, v8_size, this);
		ps_int v0_tile = t1;
		ps_bool v0_descent = ((ps_bool)0);
		ps_bool v0_seen_wood = ((ps_bool)0);
		if ((ps_bool)(v0_tile == (*v_T_JUMP_THROUGH))) {
			v0_descent = ((ps_bool)1);
			v0_seen_wood = ((ps_bool)1);
		}
		struct cl_Collider* t2 = poni_gc_alloc_tagged(ctx, sizeof(struct cl_Collider), PONI_TAG_TY41);
		t2->v0_pos = v1_pos;
		t2->v7_size = v8_size;
		t2->v_descent = v0_descent;
		t2->v_seen_wood = v0_seen_wood;
		t2->v_collidable = ((ps_bool)1);
		t2->v_squished = ((ps_bool)0);
		t2->v_remainder = ps_mk_vec2(((ps_float)0), ((ps_float)0));
		struct ps_arr_47* t4;
		struct ps_dynarr_47* t3; PONI_INIT_DYNARRAY(t4, t3, sizeof(struct cl_Solid*), 0, 0, PONI_TAG_TY47)
		t2->v_squishers = t3;
		struct cl_Collider* v1_collider = t2;
		struct cl_Actor* t5 = poni_gc_alloc_tagged(ctx, sizeof(struct cl_Actor), PONI_TAG_TY40);
		t5->v_collider = v1_collider;
		struct cl_Actor* v_actor = t5;
		ps_int t6 = this->v_actors->header.length;
		if(t6 < ((struct ps_arr_40*)this->v_actors->header.buffer)->header.length) {
			((struct ps_arr_40*)this->v_actors->header.buffer)->contents[t6] = v_actor;
		}
		else {
			this->v_actors->header.buffer = poni_array_ensure(ctx, this->v_actors->header.buffer, sizeof(struct cl_Actor*), t6);
			((struct ps_arr_40*)this->v_actors->header.buffer)->contents[t6] = v_actor;
		}
		this->v_actors->header.length += 1;
		t0 = v_actor;
	}
	return t0;
}
void f_update_dt(PONI_ABI(ps_float v_dt)) {
	{
		ps_float t0 = (*v_player_speed).v_1;
		ps_float t1 = (*v_player_speed).v_1 = (t0 + (v_dt * ((ps_float)500.0)));
		ps_bool t2 = is_key_down(ctx, (*v_K_LEFT), NULL);
		if (t2) {
			ps_float t3 = (*v_player_speed).v_0 = (-((ps_float)100));
		}
		else {
			ps_bool t4 = is_key_down(ctx, (*v_K_RIGHT), NULL);
			if (t4) {
				ps_float t5 = (*v_player_speed).v_0 = ((ps_float)100);
			}
			else {
				ps_float t6 = (*v_player_speed).v_0 = ((ps_float)0);
			}
		}
		ps_float t7 = (*v_player_speed).v_0;
		ps_bool t8 = f_move_h(ctx, (*v_player), (t7 * v_dt), (*v_world));
		ps_float t9 = (*v_player_speed).v_1;
		ps_bool t10 = f_move_v(ctx, (*v_player), (t9 * v_dt), (*v_world));
	}
}
ps_float f_compute_dt(PONI_ABI()) {
	struct cl_UpdateSmoothing *const this = closure;
	ps_float t0;
	{
		ps_float t1 = get_frame_time(ctx, NULL);
		ps_float v0_dt = t1;
		if ((ps_bool)(v0_dt > (this->v_avg_dt * ((ps_float)10.0)))) {
			ps_print_str(ps_str_const0);
			ps_print_float(v0_dt);
			ps_println();
		}
		ps_float t2;
		if ((ps_bool)(v0_dt > ((ps_float)0.08))) {
			ps_float t3;
			t3 = ((ps_float)0.08);
			t2 = t3;
		}
		else {
			ps_float t4;
			t4 = v0_dt;
			t2 = t4;
		}
		v0_dt = t2;
		this->v_avg_dt = (this->v_avg_dt + ((v0_dt - this->v_avg_dt) * ((ps_float)0.03)));
		v0_dt = this->v_avg_dt;
		t0 = v0_dt;
	}
	return t0;
}
ps_int f_collide_tag(PONI_ABI(ps_int v0_tag, ps_vec2 v4_pos, ps_vec2i v11_size)) {
	struct cl_World *const this = closure;
	ps_int t0;
	{
		struct cl_World *const parent = this;
		struct cl0_closure *const this = poni_gc_alloc_tagged(ctx, sizeof(struct cl0_closure), PONI_TAG_TY82);
		this->parent = parent;
		this->v0_tag = v0_tag;
		ps_int t1;
		{
			{
				struct ps_range_ie_62 t2;
				t2.left = ((ps_int)0);
				ps_int t3 = this->parent->v_layers->header.length;
				t2.right = t3;
				ps_int t4 = t2.left;
				ps_int v0_i = (t4 - ((ps_int)1));
				for(;;) {
					struct ps_range_ie_62 t5;
					t5.left = ((ps_int)0);
					ps_int t6 = this->parent->v_layers->header.length;
					t5.right = t6;
					ps_int t7 = t5.right;
					if(!(ps_bool)(v0_i < (t7 - ((ps_int)1)))) { break; }
					{
						struct cl0_closure *const parent = this;
						struct cl_closure *const this = poni_gc_alloc_tagged(ctx, sizeof(struct cl_closure), PONI_TAG_TY81);
						this->parent = parent;
						{
							v0_i = (v0_i + ((ps_int)1));
							ps_int v_i = v0_i;
							{
								struct ps_dynarr_42* t8 = this->parent->parent->v_layers;
								ps_int t9 = v_i;
								if(t9 < 0 || t9 >= t8->header.length) {ps_panic(ctx, "physics.poni", 95, 31, "index out of bounds"); };
								struct cl_StaticTiledLayer* t10 = ((struct ps_arr_42*)t8->header.buffer)->contents[t9];
								struct cl_StaticTiledLayer* t11 = this->v0_layer = t10;
								ps_float t12 = this->v0_layer->v_tile_width;
								ps_float t13 = this->v0_tile_width = t12;
								ps_float t14 = this->v0_layer->v_tile_height;
								ps_float t15 = this->v0_tile_height = t14;
								ps_int t16 = this->v0_layer->v_width;
								ps_int t17 = this->v_layer_width = t16;
								ps_int t18 = this->v0_layer->v_tag;
								ps_int t19 = this->v_layer_tag = t18;
								ps_int t20 = this->v0_layer->v_colliders->header.length;
								ps_int t21 = this->v_layer_height = ((t20 / this->v_layer_width) + ((ps_int)1));
								ps_sig_56 t22 = (ps_sig_56) { .fun = f_check, .closure = this };
								ps_int t23 = f_check(ctx, v4_pos, this);
								ps_int v2_tile = t23;
								ps_int t25 = v11_size.v_0;
								ps_float t24;
								t24 = ps_promote_int_to_float((t25 - ((ps_int)1)));
								ps_vec2 t26;
								t26.v_0 = v4_pos.v_0 + ps_mk_vec2(t24, ((ps_float)0)).v_0;
								t26.v_1 = v4_pos.v_1 + ps_mk_vec2(t24, ((ps_float)0)).v_1;
								ps_int t27 = f_check(ctx, t26, this);
								ps_int t28 = f_tile_or(ctx, v2_tile, t27, NULL);
								v2_tile = t28;
								ps_int t30 = v11_size.v_0;
								ps_int t31 = v11_size.v_1;
								ps_vec2 t29;
								t29.v_0 = ps_promote_int_to_float(ps_mk_vec2i((t30 - ((ps_int)1)), (t31 - ((ps_int)1))).v_0);
								t29.v_1 = ps_promote_int_to_float(ps_mk_vec2i((t30 - ((ps_int)1)), (t31 - ((ps_int)1))).v_1);
								ps_vec2 t32;
								t32.v_0 = v4_pos.v_0 + t29.v_0;
								t32.v_1 = v4_pos.v_1 + t29.v_1;
								ps_int t33 = f_check(ctx, t32, this);
								ps_int t34 = f_tile_or(ctx, v2_tile, t33, NULL);
								v2_tile = t34;
								ps_int t36 = v11_size.v_1;
								ps_float t35;
								t35 = ps_promote_int_to_float((t36 - ((ps_int)1)));
								ps_vec2 t37;
								t37.v_0 = v4_pos.v_0 + ps_mk_vec2(((ps_float)0), t35).v_0;
								t37.v_1 = v4_pos.v_1 + ps_mk_vec2(((ps_float)0), t35).v_1;
								ps_int t38 = f_check(ctx, t37, this);
								ps_int t39 = f_tile_or(ctx, v2_tile, t38, NULL);
								v2_tile = t39;
								if ((ps_bool)(v2_tile != (*v_T_EMPTY))) {
									return v2_tile;
								}
								ps_int t41 = v11_size.v_0;
								ps_float t40;
								t40 = ps_promote_int_to_float(t41);
								if ((ps_bool)(t40 > this->v0_tile_width)) {
									ps_float t42 = v4_pos.v_0;
									ps_float v3_x = t42;
									for(;;) {
										ps_bool t43;
										{
											v3_x = (v3_x + this->v0_tile_width);
											ps_float t44 = v4_pos.v_0;
											ps_int t46 = v11_size.v_0;
											ps_float t45;
											t45 = ps_promote_int_to_float(t46);
											t43 = (ps_bool)(v3_x < ((t44 + t45) - ((ps_float)1)));
										}
										if(!t43) { break; }
										{
											ps_float t47 = v4_pos.v_1;
											ps_int t48 = f_check(ctx, ps_mk_vec2(v3_x, t47), this);
											v2_tile = t48;
											ps_float t49 = v4_pos.v_1;
											ps_int t51 = v11_size.v_1;
											ps_float t50;
											t50 = ps_promote_int_to_float(t51);
											ps_int t52 = f_check(ctx, ps_mk_vec2(v3_x, ((t49 + t50) - ((ps_float)1))), this);
											ps_int t53 = f_tile_or(ctx, v2_tile, t52, NULL);
											v2_tile = t53;
											if ((ps_bool)(v2_tile != (*v_T_EMPTY))) {
												return v2_tile;
											}
										}
									}
								}
								ps_int t55 = v11_size.v_1;
								ps_float t54;
								t54 = ps_promote_int_to_float(t55);
								if ((ps_bool)(t54 > this->v0_tile_height)) {
									ps_float t56 = v4_pos.v_1;
									ps_float v1_y = t56;
									for(;;) {
										ps_bool t57;
										{
											v1_y = (v1_y + this->v0_tile_height);
											ps_float t58 = v4_pos.v_1;
											ps_int t60 = v11_size.v_1;
											ps_float t59;
											t59 = ps_promote_int_to_float(t60);
											t57 = (ps_bool)(v1_y < ((t58 + t59) - ((ps_float)1)));
										}
										if(!t57) { break; }
										{
											ps_float t61 = v4_pos.v_0;
											ps_int t62 = f_check(ctx, ps_mk_vec2(t61, v1_y), this);
											v2_tile = t62;
											ps_float t63 = v4_pos.v_0;
											ps_int t65 = v11_size.v_0;
											ps_float t64;
											t64 = ps_promote_int_to_float(t65);
											ps_int t66 = f_check(ctx, ps_mk_vec2(((t63 + t64) - ((ps_float)1)), v1_y), this);
											ps_int t67 = f_tile_or(ctx, v2_tile, t66, NULL);
											v2_tile = t67;
											if ((ps_bool)(v2_tile != (*v_T_EMPTY))) {
												return v2_tile;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			t1 = (*v_T_EMPTY);
		}
		t0 = t1;
	}
	return t0;
}
ps_vec2 f_inverse_convert(PONI_ABI(ps_vec2 v1_x)) {
	struct cl_Screen *const this = closure;
	ps_vec2 t0;
	{
		ps_vec2 t1;
		t1.v_0 = v1_x.v_0 - this->v_offset.v_0;
		t1.v_1 = v1_x.v_1 - this->v_offset.v_1;
		ps_vec2 t2;
		t2.v_0 = t1.v_0 / this->v4_scale;
		t2.v_1 = t1.v_1 / this->v4_scale;
		ps_vec2 t3;
		t3.v_0 = ((ps_float)0.5) * this->v_target_size.v_0;
		t3.v_1 = ((ps_float)0.5) * this->v_target_size.v_1;
		ps_vec2 t4;
		t4.v_0 = t2.v_0 - t3.v_0;
		t4.v_1 = t2.v_1 - t3.v_1;
		ps_vec2 t5;
		t5.v_0 = t4.v_0 - this->v_target_offset.v_0;
		t5.v_1 = t4.v_1 - this->v_target_offset.v_1;
		t0 = t5;
	}
	return t0;
}
ps_int f_tile_or(PONI_ABI(ps_int v_s, ps_int v_other)) {
	ps_int t0;
	{
		ps_bool t1 = (ps_bool)(v_s == (*v_T_EMPTY));
		if(t1) {
			t1 = (ps_bool)(v_other == (*v_T_EMPTY));
		}
		if (t1) {
			return (*v_T_EMPTY);
		}
		ps_bool t2 = (ps_bool)(v_s == (*v_T_JUMP_THROUGH));
		if(t2) {
			t2 = (ps_bool)(v_other == (*v_T_JUMP_THROUGH));
		}
		if (t2) {
			return (*v_T_JUMP_THROUGH);
		}
		ps_bool t3 = (ps_bool)(v_s == (*v_T_JUMP_THROUGH));
		if(t3) {
			t3 = (ps_bool)(v_other == (*v_T_EMPTY));
		}
		if (t3) {
			return (*v_T_JUMP_THROUGH);
		}
		ps_bool t4 = (ps_bool)(v_s == (*v_T_EMPTY));
		if(t4) {
			t4 = (ps_bool)(v_other == (*v_T_JUMP_THROUGH));
		}
		if (t4) {
			return (*v_T_JUMP_THROUGH);
		}
		t0 = (*v_T_SOLID);
	}
	return t0;
}
ps_int f_signum(PONI_ABI(ps_int v4_x)) {
	{
		if ((ps_bool)(v4_x > ((ps_int)0))) {
			return ((ps_int)1);
		}
		if ((ps_bool)(v4_x < ((ps_int)0))) {
			return (-((ps_int)1));
		}
		return ((ps_int)0);
	}
}
void f_update(PONI_ABI()) {
	struct cl_Screen *const this = closure;
	{
		ps_float t0 = screen_width(ctx, NULL);
		ps_float t1 = screen_height(ctx, NULL);
		ps_vec2 v_screen_size = ps_mk_vec2(t0, t1);
		ps_vec2 t2;
		t2.v_0 = v_screen_size.v_0 / this->v_target_size.v_0;
		t2.v_1 = v_screen_size.v_1 / this->v_target_size.v_1;
		ps_vec2 v_scales = t2;
		ps_float t3 = v_scales.v_0;
		ps_float t4 = v_scales.v_1;
		ps_float t5;
		if ((ps_bool)(t3 < t4)) {
			ps_float t6;
			ps_float t7 = v_scales.v_0;
			t6 = t7;
			t5 = t6;
		}
		else {
			ps_float t8;
			ps_float t9 = v_scales.v_1;
			t8 = t9;
			t5 = t8;
		}
		ps_float v_best = t5;
		this->v4_scale = v_best;
		ps_vec2 t10;
		t10.v_0 = ps_mk_vec2(((ps_float)2.0), ((ps_float)2.0)).v_0 / this->v_target_size.v_0;
		t10.v_1 = ps_mk_vec2(((ps_float)2.0), ((ps_float)2.0)).v_1 / this->v_target_size.v_1;
		ps_vec2 t11 = this->v0_camera->zoom = t10;
		ps_vec2 t12 = this->v0_camera->offset = ps_mk_vec2(((ps_float)0), ((ps_float)0));
		ps_vec2 t13;
		t13.v_0 = -this->v_target_offset.v_0;
		t13.v_1 = -this->v_target_offset.v_1;
		ps_vec2 t14 = this->v0_camera->target = t13;
		struct camera_viewport* t15 = this->v0_camera->viewport;
		if(!t15) {
ps_panic(ctx, "screen.poni", 45, 30, "called .or_panic on a nil");		}
		struct camera_viewport* t16 = t15;
		struct camera_viewport* v_viewport = t16;
		ps_vec2 t17;
		t17.v_0 = this->v_target_size.v_0 * this->v4_scale;
		t17.v_1 = this->v_target_size.v_1 * this->v4_scale;
		ps_vec2 t18;
		t18.v_0 = v_screen_size.v_0 - t17.v_0;
		t18.v_1 = v_screen_size.v_1 - t17.v_1;
		ps_vec2 t19;
		t19.v_0 = t18.v_0 * ((ps_float)0.5);
		t19.v_1 = t18.v_1 * ((ps_float)0.5);
		ps_vec2 t20 = v_viewport->offset = t19;
		ps_vec2 t21 = v_viewport->offset;
		this->v_offset = t21;
		ps_vec2 t22;
		t22.v_0 = this->v_target_size.v_0 * this->v4_scale;
		t22.v_1 = this->v_target_size.v_1 * this->v4_scale;
		ps_vec2 t23 = v_viewport->size = t22;
		set_camera(ctx, this->v0_camera, NULL);
	}
}
struct cl_Solid* f_add_solid(PONI_ABI(ps_vec2 v2_pos, ps_vec2i v9_size)) {
	struct cl_World *const this = closure;
	struct cl_Solid* t0;
	{
		struct cl_Collider* t1 = poni_gc_alloc_tagged(ctx, sizeof(struct cl_Collider), PONI_TAG_TY41);
		t1->v0_pos = v2_pos;
		t1->v7_size = v9_size;
		t1->v_collidable = ((ps_bool)1);
		t1->v_squished = ((ps_bool)0);
		t1->v_remainder = ps_mk_vec2(((ps_float)0), ((ps_float)0));
		struct ps_arr_47* t3;
		struct ps_dynarr_47* t2; PONI_INIT_DYNARRAY(t3, t2, sizeof(struct cl_Solid*), 0, 0, PONI_TAG_TY47)
		t1->v_squishers = t2;
		t1->v_descent = ((ps_bool)0);
		t1->v_seen_wood = ((ps_bool)0);
		struct cl_Collider* v2_collider = t1;
		struct cl_Solid* t4 = poni_gc_alloc_tagged(ctx, sizeof(struct cl_Solid), PONI_TAG_TY47);
		t4->v0_collider = v2_collider;
		struct cl_Solid* v_solid = t4;
		ps_int t5 = this->v_solids->header.length;
		if(t5 < ((struct ps_arr_47*)this->v_solids->header.buffer)->header.length) {
			((struct ps_arr_47*)this->v_solids->header.buffer)->contents[t5] = v_solid;
		}
		else {
			this->v_solids->header.buffer = poni_array_ensure(ctx, this->v_solids->header.buffer, sizeof(struct cl_Solid*), t5);
			((struct ps_arr_47*)this->v_solids->header.buffer)->contents[t5] = v_solid;
		}
		this->v_solids->header.length += 1;
		t0 = v_solid;
	}
	return t0;
}
void f_draw_texture_(PONI_ABI(struct texture2d* v_tex, ps_vec2 v_pos, ps_float v_rot, ps_float v5_scale, ps_vec4 v9_color)) {
	struct cl_Screen *const this = closure;
	{
		draw_texture_rot_scale(ctx, v_tex, v_pos, v_rot, v5_scale, v9_color, NULL);
	}
}
ps_int f_collide_solids(PONI_ABI(ps_vec2 v3_pos, ps_vec2i v10_size)) {
	struct cl_World *const this = closure;
	{
		ps_int t0 = f_collide_tag(ctx, ((ps_int)1), v3_pos, v10_size, this);
		ps_int v1_tile = t0;
		if ((ps_bool)(v1_tile != (*v_T_EMPTY))) {
			return v1_tile;
		}
		return (*v_T_EMPTY);
	}
}
void f_init_world(PONI_ABI()) {
	{
		struct ps_arr_6* t1;
		struct ps_dynarr_6* t0; PONI_INIT_DYNARRAY(t1, t0, sizeof(ps_int), 84, 84, PONI_TAG_INT)
		t1->contents[0] = ((ps_int)0);
		t1->contents[1] = ((ps_int)0);
		t1->contents[2] = ((ps_int)0);
		t1->contents[3] = ((ps_int)0);
		t1->contents[4] = ((ps_int)0);
		t1->contents[5] = ((ps_int)0);
		t1->contents[6] = ((ps_int)0);
		t1->contents[7] = ((ps_int)0);
		t1->contents[8] = ((ps_int)0);
		t1->contents[9] = ((ps_int)0);
		t1->contents[10] = ((ps_int)0);
		t1->contents[11] = ((ps_int)0);
		t1->contents[12] = ((ps_int)0);
		t1->contents[13] = ((ps_int)0);
		t1->contents[14] = ((ps_int)0);
		t1->contents[15] = ((ps_int)0);
		t1->contents[16] = ((ps_int)0);
		t1->contents[17] = ((ps_int)0);
		t1->contents[18] = ((ps_int)0);
		t1->contents[19] = ((ps_int)0);
		t1->contents[20] = ((ps_int)0);
		t1->contents[21] = ((ps_int)0);
		t1->contents[22] = ((ps_int)0);
		t1->contents[23] = ((ps_int)0);
		t1->contents[24] = ((ps_int)0);
		t1->contents[25] = ((ps_int)0);
		t1->contents[26] = ((ps_int)0);
		t1->contents[27] = ((ps_int)0);
		t1->contents[28] = ((ps_int)0);
		t1->contents[29] = ((ps_int)0);
		t1->contents[30] = ((ps_int)0);
		t1->contents[31] = ((ps_int)0);
		t1->contents[32] = ((ps_int)0);
		t1->contents[33] = ((ps_int)0);
		t1->contents[34] = ((ps_int)0);
		t1->contents[35] = ((ps_int)0);
		t1->contents[36] = ((ps_int)0);
		t1->contents[37] = ((ps_int)0);
		t1->contents[38] = ((ps_int)0);
		t1->contents[39] = ((ps_int)0);
		t1->contents[40] = ((ps_int)0);
		t1->contents[41] = ((ps_int)0);
		t1->contents[42] = ((ps_int)0);
		t1->contents[43] = ((ps_int)0);
		t1->contents[44] = ((ps_int)0);
		t1->contents[45] = ((ps_int)0);
		t1->contents[46] = ((ps_int)0);
		t1->contents[47] = ((ps_int)0);
		t1->contents[48] = ((ps_int)0);
		t1->contents[49] = ((ps_int)0);
		t1->contents[50] = ((ps_int)0);
		t1->contents[51] = ((ps_int)0);
		t1->contents[52] = ((ps_int)0);
		t1->contents[53] = ((ps_int)0);
		t1->contents[54] = ((ps_int)0);
		t1->contents[55] = ((ps_int)0);
		t1->contents[56] = ((ps_int)0);
		t1->contents[57] = ((ps_int)0);
		t1->contents[58] = ((ps_int)0);
		t1->contents[59] = ((ps_int)0);
		t1->contents[60] = ((ps_int)0);
		t1->contents[61] = ((ps_int)0);
		t1->contents[62] = ((ps_int)0);
		t1->contents[63] = ((ps_int)0);
		t1->contents[64] = ((ps_int)0);
		t1->contents[65] = ((ps_int)0);
		t1->contents[66] = ((ps_int)0);
		t1->contents[67] = ((ps_int)0);
		t1->contents[68] = ((ps_int)0);
		t1->contents[69] = ((ps_int)0);
		t1->contents[70] = ((ps_int)1);
		t1->contents[71] = ((ps_int)1);
		t1->contents[72] = ((ps_int)1);
		t1->contents[73] = ((ps_int)1);
		t1->contents[74] = ((ps_int)1);
		t1->contents[75] = ((ps_int)1);
		t1->contents[76] = ((ps_int)1);
		t1->contents[77] = ((ps_int)1);
		t1->contents[78] = ((ps_int)1);
		t1->contents[79] = ((ps_int)1);
		t1->contents[80] = ((ps_int)1);
		t1->contents[81] = ((ps_int)1);
		t1->contents[82] = ((ps_int)1);
		t1->contents[83] = ((ps_int)1);
		struct ps_dynarr_6* v_data = t0;
		struct cl_StaticTiledLayer* t2 = poni_gc_alloc_tagged(ctx, sizeof(struct cl_StaticTiledLayer), PONI_TAG_TY42);
		t2->v_tile_width = ((ps_float)16);
		t2->v_tile_height = ((ps_float)16);
		t2->v_width = ((ps_int)14);
		t2->v_colliders = v_data;
		t2->v_tag = ((ps_int)1);
		struct ps_dynarr_42* t3 = (*v_world)->v_layers;
		ps_int t4 = t3->header.length;
		if(t4 < ((struct ps_arr_42*)t3->header.buffer)->header.length) {
			((struct ps_arr_42*)t3->header.buffer)->contents[t4] = t2;
		}
		else {
			t3->header.buffer = poni_array_ensure(ctx, t3->header.buffer, sizeof(struct cl_StaticTiledLayer*), t4);
			((struct ps_arr_42*)t3->header.buffer)->contents[t4] = t2;
		}
		t3->header.length += 1;
		struct cl_Actor* t5 = f_add_actor(ctx, ps_mk_vec2(((ps_float)0), (-((ps_float)40))), ps_mk_vec2i(((ps_int)16), ((ps_int)16)), (*v_world));
		(*v_player) = t5;
	}
}
ps_vec2 f_mouse(PONI_ABI()) {
	struct cl_Screen *const this = closure;
	ps_vec2 t0;
	{
		ps_vec2 t1 = mouse_position(ctx, NULL);
		ps_vec2 t2 = f_inverse_convert(ctx, t1, this);
		t0 = t2;
	}
	return t0;
}
ps_int f_check(PONI_ABI(ps_vec2 v5_pos)) {
	struct cl_closure *const this = closure;
	ps_int t0;
	{
		ps_float t1 = v5_pos.v_1;
		ps_int t2 = pq_floor(ctx, (t1 / this->v0_tile_width), NULL);
		ps_int v0_y = t2;
		ps_float t3 = v5_pos.v_0;
		ps_int t4 = pq_floor(ctx, (t3 / this->v0_tile_height), NULL);
		ps_int v2_x = t4;
		ps_int v_ix = ((v0_y * this->v_layer_width) + v2_x);
		ps_bool t5 = (ps_bool)(v0_y >= ((ps_int)0));
		if(t5) {
			t5 = (ps_bool)(v0_y < this->v_layer_height);
		}
		ps_bool t6 = t5;
		if(t6) {
			t6 = (ps_bool)(v2_x >= ((ps_int)0));
		}
		ps_bool t7 = t6;
		if(t7) {
			t7 = (ps_bool)(v2_x < this->v_layer_width);
		}
		ps_bool t8 = t7;
		if(t8) {
			t8 = (ps_bool)(v_ix >= ((ps_int)0));
		}
		ps_bool t9 = t8;
		if(t9) {
			ps_int t10 = this->v0_layer->v_colliders->header.length;
			t9 = (ps_bool)(v_ix < t10);
		}
		ps_bool t11 = t9;
		if(t11) {
			t11 = (ps_bool)(this->v_layer_tag == this->parent->v0_tag);
		}
		ps_bool t12 = t11;
		if(t12) {
			struct ps_dynarr_6* t13 = this->v0_layer->v_colliders;
			ps_int t14 = v_ix;
			if(t14 < 0 || t14 >= t13->header.length) {ps_panic(ctx, "physics.poni", 115, 30, "index out of bounds"); };
			t12 = (ps_bool)(((struct ps_arr_6*)t13->header.buffer)->contents[t14] != (*v_T_EMPTY));
		}
		if (t12) {
			struct ps_dynarr_6* t15 = this->v0_layer->v_colliders;
			ps_int t16 = v_ix;
			if(t16 < 0 || t16 >= t15->header.length) {ps_panic(ctx, "physics.poni", 117, 33, "index out of bounds"); };
			return ((struct ps_arr_6*)t15->header.buffer)->contents[t16];
		}
		t0 = (*v_T_EMPTY);
	}
	return t0;
}
