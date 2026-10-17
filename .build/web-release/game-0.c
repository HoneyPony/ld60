#include "poni/poni.h"
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
#define PONI_TAG_TY25 0x10eULL
#define PONI_TAG_TY26 0x110ULL
#define PONI_TAG_TY27 0x112ULL
#define PONI_TAG_TY28 0x114ULL
#define PONI_TAG_TY29 0x116ULL
#define PONI_TAG_TY30 0x118ULL
#define PONI_TAG_TY31 PONI_TAG_TY30
#define PONI_TAG_TY32 0x11cULL
#define PONI_TAG_TY33 0x11eULL
#define PONI_TAG_TY36 0x120ULL

// --- string constants ---

// --- struct declarations ---

struct texture2d;
struct font;
struct camera2d;
struct camera_viewport;
struct sound;
struct cl_Square;
// --- struct declarations (ps_tuple) ---

// --- struct declarations (ps_array) ---

// --- sig types ---
typedef void (*ps_sigraw_37)(struct poni_gc_context*, ps_float, void*);
typedef struct ps_sig_37 { ps_sigraw_37 fun; void* closure; } ps_sig_37;
typedef ps_float (*ps_sigraw_5)(struct poni_gc_context*, void*);
typedef struct ps_sig_5 { ps_sigraw_5 fun; void* closure; } ps_sig_5;
typedef void (*ps_sigraw_4)(struct poni_gc_context*, ps_vec2, ps_vec2, ps_vec4, void*);
typedef struct ps_sig_4 { ps_sigraw_4 fun; void* closure; } ps_sig_4;

// --- struct definitions (ps_tuple) ---

// --- struct definitions (ps_array) ---

// --- struct definitions ---
struct cl_Square {
	struct ps_object object;
	ps_float v_x;
	ps_float v_vx;
};
// --- global variables ---
ps_float v_test;
struct cl_Square* v_square;
ps_int v_K_SPACE;
ps_int v_K_APOSTROPHE;
ps_int v_K_COMMA;
ps_int v_K_MINUS;
ps_int v_K_PERIOD;
ps_int v_K_SLASH;
ps_int v_K_0;
ps_int v_K_1;
ps_int v_K_2;
ps_int v_K_3;
ps_int v_K_4;
ps_int v_K_5;
ps_int v_K_6;
ps_int v_K_7;
ps_int v_K_8;
ps_int v_K_9;
ps_int v_K_SEMICOLON;
ps_int v_K_EQUAL;
ps_int v_K_A;
ps_int v_K_B;
ps_int v_K_C;
ps_int v_K_D;
ps_int v_K_E;
ps_int v_K_F;
ps_int v_K_G;
ps_int v_K_H;
ps_int v_K_I;
ps_int v_K_J;
ps_int v_K_K;
ps_int v_K_L;
ps_int v_K_M;
ps_int v_K_N;
ps_int v_K_O;
ps_int v_K_P;
ps_int v_K_Q;
ps_int v_K_R;
ps_int v_K_S;
ps_int v_K_T;
ps_int v_K_U;
ps_int v_K_V;
ps_int v_K_W;
ps_int v_K_X;
ps_int v_K_Y;
ps_int v_K_Z;
ps_int v_K_LEFTBRACKET;
ps_int v_K_BACKSLASH;
ps_int v_K_RIGHTBRACKET;
ps_int v_K_GRAVEACCENT;
ps_int v_K_WORLD1;
ps_int v_K_WORLD2;
ps_int v_K_ESCAPE;
ps_int v_K_ENTER;
ps_int v_K_TAB;
ps_int v_K_BACKSPACE;
ps_int v_K_INSERT;
ps_int v_K_DELETE;
ps_int v_K_RIGHT;
ps_int v_K_LEFT;
ps_int v_K_DOWN;
ps_int v_K_UP;
ps_int v_K_PAGEUP;
ps_int v_K_PAGEDOWN;
ps_int v_K_HOME;
ps_int v_K_END;
ps_int v_K_CAPSLOCK;
ps_int v_K_SCROLLLOCK;
ps_int v_K_NUMLOCK;
ps_int v_K_PRINTSCREEN;
ps_int v_K_PAUSE;
ps_int v_K_F1;
ps_int v_K_F2;
ps_int v_K_F3;
ps_int v_K_F4;
ps_int v_K_F5;
ps_int v_K_F6;
ps_int v_K_F7;
ps_int v_K_F8;
ps_int v_K_F9;
ps_int v_K_F10;
ps_int v_K_F11;
ps_int v_K_F12;
ps_int v_K_F13;
ps_int v_K_F14;
ps_int v_K_F15;
ps_int v_K_F16;
ps_int v_K_F17;
ps_int v_K_F18;
ps_int v_K_F19;
ps_int v_K_F20;
ps_int v_K_F21;
ps_int v_K_F22;
ps_int v_K_F23;
ps_int v_K_F24;
ps_int v_K_F25;
ps_int v_K_KP0;
ps_int v_K_KP1;
ps_int v_K_KP2;
ps_int v_K_KP3;
ps_int v_K_KP4;
ps_int v_K_KP5;
ps_int v_K_KP6;
ps_int v_K_KP7;
ps_int v_K_KP8;
ps_int v_K_KP9;
ps_int v_K_KPDECIMAL;
ps_int v_K_KPDIVIDE;
ps_int v_K_KPMULTIPLY;
ps_int v_K_KPSUBTRACT;
ps_int v_K_KPADD;
ps_int v_K_KPENTER;
ps_int v_K_KPEQUAL;
ps_int v_K_LEFTSHIFT;
ps_int v_K_LEFTCONTROL;
ps_int v_K_LEFTALT;
ps_int v_K_LEFTSUPER;
ps_int v_K_RIGHTSHIFT;
ps_int v_K_RIGHTCONTROL;
ps_int v_K_RIGHTALT;
ps_int v_K_RIGHTSUPER;
ps_int v_K_MENU;
ps_int v_K_BACK;
ps_int v_K_UNKNOWN;
ps_int v_MOUSE_LEFT;
ps_int v_MOUSE_MIDDLE;
ps_int v_MOUSE_RIGHT;
ps_int v_FILTER_LINEAR;
ps_int v_FILTER_NEAREST;

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
ps_int pq_floor(PONI_ABI(ps_float v_f));
void pq_gl_push_rotation(PONI_ABI(ps_float v1_rotation));
void pq_gl_push_scale(PONI_ABI(ps_vec2 v3_scale));
void pq_gl_push_translation(PONI_ABI(ps_vec2 v_translation));
void pq_gl_pop(PONI_ABI());
void pq_seed_random_with_time(PONI_ABI());
ps_int pq_randi_range(PONI_ABI(ps_int v_low, ps_int v_high));
ps_float pq_randf_range(PONI_ABI(ps_float v0_low, ps_float v0_high));
void f_update(PONI_ABI(ps_float v_dt));
void update(PONI_ABI());
void poni_init_strings(struct poni_gc_context *ctx) {
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
		case PONI_TAG_TY25:
		case PONI_TAG_TY26:
		case PONI_TAG_TY27:
		case PONI_TAG_TY28:
		case PONI_TAG_TY29:
		case PONI_TAG_TY30:
			return sizeof(void*);
		case PONI_TAG_TY18:
		case PONI_TAG_TY32:
		case PONI_TAG_TY33:
		case PONI_TAG_TY36:
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
	case PONI_TAG_TY32: {
		ps_sig_5 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	case PONI_TAG_TY33: {
		ps_sig_4 *self = object;
		poni_gc_mark(gc, self->closure);
		break;
	}
	case PONI_TAG_TY36: {
		ps_sig_37 *self = object;
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
	case PONI_TAG_TY25: {
		struct cl_Square *self = object;
		break;
	}
	case PONI_TAG_TY26: {
		struct sound *self = object;
		break;
	}
	case PONI_TAG_TY27: {
		struct font *self = object;
		break;
	}
	case PONI_TAG_TY28: {
		struct camera2d *self = object;
		poni_gc_mark(gc, self->viewport);
		break;
	}
	case PONI_TAG_TY29: {
		struct texture2d *self = object;
		break;
	}
	case PONI_TAG_TY30: {
		struct camera_viewport *self = object;
		break;
	}
	}
}
void
poni_gc_visit_roots(struct poni_gc *gc) {
	poni_gc_mark(gc, v_square);
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
	case PONI_TAG_TY25: return sizeof(*(struct cl_Square*)(0));
	case PONI_TAG_TY26: return sizeof(*(struct sound*)(0));
	case PONI_TAG_TY27: return sizeof(*(struct font*)(0));
	case PONI_TAG_TY28: return sizeof(*(struct camera2d*)(0));
	case PONI_TAG_TY29: return sizeof(*(struct texture2d*)(0));
	case PONI_TAG_TY30: return sizeof(*(struct camera_viewport*)(0));
	case PONI_TAG_TY32: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY33: return sizeof(struct { void *a, *b; });
	case PONI_TAG_TY36: return sizeof(struct { void *a, *b; });
	}
}

void poni_init_globals(struct poni_gc_context *ctx) {
	v_test = ((ps_float)0.0);
	struct cl_Square* t0 = poni_gc_alloc_tagged(ctx, sizeof(struct cl_Square), PONI_TAG_TY25);
	t0->v_x = ((ps_float)0.0);
	t0->v_vx = ((ps_float)1.0);
	v_square = t0;
	v_K_SPACE = ((ps_int)32);
	v_K_APOSTROPHE = ((ps_int)39);
	v_K_COMMA = ((ps_int)44);
	v_K_MINUS = ((ps_int)45);
	v_K_PERIOD = ((ps_int)46);
	v_K_SLASH = ((ps_int)47);
	v_K_0 = ((ps_int)48);
	v_K_1 = ((ps_int)49);
	v_K_2 = ((ps_int)50);
	v_K_3 = ((ps_int)51);
	v_K_4 = ((ps_int)52);
	v_K_5 = ((ps_int)53);
	v_K_6 = ((ps_int)54);
	v_K_7 = ((ps_int)55);
	v_K_8 = ((ps_int)56);
	v_K_9 = ((ps_int)57);
	v_K_SEMICOLON = ((ps_int)59);
	v_K_EQUAL = ((ps_int)61);
	v_K_A = ((ps_int)65);
	v_K_B = ((ps_int)66);
	v_K_C = ((ps_int)67);
	v_K_D = ((ps_int)68);
	v_K_E = ((ps_int)69);
	v_K_F = ((ps_int)70);
	v_K_G = ((ps_int)71);
	v_K_H = ((ps_int)72);
	v_K_I = ((ps_int)73);
	v_K_J = ((ps_int)74);
	v_K_K = ((ps_int)75);
	v_K_L = ((ps_int)76);
	v_K_M = ((ps_int)77);
	v_K_N = ((ps_int)78);
	v_K_O = ((ps_int)79);
	v_K_P = ((ps_int)80);
	v_K_Q = ((ps_int)81);
	v_K_R = ((ps_int)82);
	v_K_S = ((ps_int)83);
	v_K_T = ((ps_int)84);
	v_K_U = ((ps_int)85);
	v_K_V = ((ps_int)86);
	v_K_W = ((ps_int)87);
	v_K_X = ((ps_int)88);
	v_K_Y = ((ps_int)89);
	v_K_Z = ((ps_int)90);
	v_K_LEFTBRACKET = ((ps_int)91);
	v_K_BACKSLASH = ((ps_int)92);
	v_K_RIGHTBRACKET = ((ps_int)93);
	v_K_GRAVEACCENT = ((ps_int)96);
	v_K_WORLD1 = ((ps_int)256);
	v_K_WORLD2 = ((ps_int)257);
	v_K_ESCAPE = ((ps_int)65307);
	v_K_ENTER = ((ps_int)65293);
	v_K_TAB = ((ps_int)65289);
	v_K_BACKSPACE = ((ps_int)65288);
	v_K_INSERT = ((ps_int)65379);
	v_K_DELETE = ((ps_int)65535);
	v_K_RIGHT = ((ps_int)65363);
	v_K_LEFT = ((ps_int)65361);
	v_K_DOWN = ((ps_int)65364);
	v_K_UP = ((ps_int)65362);
	v_K_PAGEUP = ((ps_int)65365);
	v_K_PAGEDOWN = ((ps_int)65366);
	v_K_HOME = ((ps_int)65360);
	v_K_END = ((ps_int)65367);
	v_K_CAPSLOCK = ((ps_int)65509);
	v_K_SCROLLLOCK = ((ps_int)65300);
	v_K_NUMLOCK = ((ps_int)65407);
	v_K_PRINTSCREEN = ((ps_int)64797);
	v_K_PAUSE = ((ps_int)65299);
	v_K_F1 = ((ps_int)65470);
	v_K_F2 = ((ps_int)65471);
	v_K_F3 = ((ps_int)65472);
	v_K_F4 = ((ps_int)65473);
	v_K_F5 = ((ps_int)65474);
	v_K_F6 = ((ps_int)65475);
	v_K_F7 = ((ps_int)65476);
	v_K_F8 = ((ps_int)65477);
	v_K_F9 = ((ps_int)65478);
	v_K_F10 = ((ps_int)65479);
	v_K_F11 = ((ps_int)65480);
	v_K_F12 = ((ps_int)65481);
	v_K_F13 = ((ps_int)65482);
	v_K_F14 = ((ps_int)65483);
	v_K_F15 = ((ps_int)65484);
	v_K_F16 = ((ps_int)65485);
	v_K_F17 = ((ps_int)65486);
	v_K_F18 = ((ps_int)65487);
	v_K_F19 = ((ps_int)65488);
	v_K_F20 = ((ps_int)65489);
	v_K_F21 = ((ps_int)65490);
	v_K_F22 = ((ps_int)65491);
	v_K_F23 = ((ps_int)65492);
	v_K_F24 = ((ps_int)65493);
	v_K_F25 = ((ps_int)65494);
	v_K_KP0 = ((ps_int)65456);
	v_K_KP1 = ((ps_int)65457);
	v_K_KP2 = ((ps_int)65458);
	v_K_KP3 = ((ps_int)65459);
	v_K_KP4 = ((ps_int)65460);
	v_K_KP5 = ((ps_int)65461);
	v_K_KP6 = ((ps_int)65462);
	v_K_KP7 = ((ps_int)65463);
	v_K_KP8 = ((ps_int)65464);
	v_K_KP9 = ((ps_int)65465);
	v_K_KPDECIMAL = ((ps_int)65454);
	v_K_KPDIVIDE = ((ps_int)65455);
	v_K_KPMULTIPLY = ((ps_int)65450);
	v_K_KPSUBTRACT = ((ps_int)65453);
	v_K_KPADD = ((ps_int)65451);
	v_K_KPENTER = ((ps_int)65421);
	v_K_KPEQUAL = ((ps_int)65469);
	v_K_LEFTSHIFT = ((ps_int)65505);
	v_K_LEFTCONTROL = ((ps_int)65507);
	v_K_LEFTALT = ((ps_int)65513);
	v_K_LEFTSUPER = ((ps_int)65515);
	v_K_RIGHTSHIFT = ((ps_int)65506);
	v_K_RIGHTCONTROL = ((ps_int)65508);
	v_K_RIGHTALT = ((ps_int)65514);
	v_K_RIGHTSUPER = ((ps_int)65516);
	v_K_MENU = ((ps_int)65383);
	v_K_BACK = ((ps_int)65284);
	v_K_UNKNOWN = ((ps_int)511);
	v_MOUSE_LEFT = ((ps_int)0);
	v_MOUSE_MIDDLE = ((ps_int)1);
	v_MOUSE_RIGHT = ((ps_int)2);
	v_FILTER_LINEAR = ((ps_int)0);
	v_FILTER_NEAREST = ((ps_int)1);

}
void poni_init(struct poni_gc_context *ctx) {}
// --- function definitions ---
void f_update(PONI_ABI(ps_float v_dt)) {
	struct cl_Square *const this = closure;
	{
		this->v_x = (this->v_x + ((this->v_vx * v_dt) * ((ps_float)300)));
		ps_float t0 = screen_width(ctx, NULL);
		if ((ps_bool)(this->v_x > t0)) {
			this->v_vx = (-((ps_float)1));
		}
		if ((ps_bool)(this->v_x < ((ps_float)0))) {
			this->v_vx = ((ps_float)1);
		}
		draw_rectangle(ctx, ps_mk_vec2(this->v_x, ((ps_float)45)), ps_mk_vec2(((ps_float)30), ((ps_float)30)), ps_mk_vec4(((ps_float)0.3764706), ((ps_float)1), ((ps_float)0.3764706), ((ps_float)1)), NULL);
	}
}
void update(PONI_ABI()) {
	{
		ps_float t0 = get_frame_time(ctx, NULL);
		ps_float v0_dt = t0;
		f_update(ctx, v0_dt, v_square);
	}
}
