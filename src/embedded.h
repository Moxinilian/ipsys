
/* ipsi header file "embedded.h"
 * This file is read by the compilation script "_comp.py" in order to generate
 * a compilation unit that embed the desired content described here at each
 * compilation.
 * See "_comp.py" for more. */

#ifndef ipsi_header_embedded__
#define ipsi_header_embedded__

/* If this macro is used as would be the extern keayword in a variable
 * declaration, and if filename_ is a string literal, then the compilation
 * script "_comp.py" will parse the variable declaration as a special
 * declaration that requiers the variable to be set to the content of the file
 * at filename_ in the generated source file "embedded.c". The variable
 * declaration is expected to be in the global scope and to have a type
 * compatible with const char*. */
#define EMBEDDED(filename_) extern

EMBEDDED("shaders/particles.vert") const char* g_particles_vert;
EMBEDDED("shaders/particles.geom") const char* g_particles_geom;
EMBEDDED("shaders/particles.frag") const char* g_particles_frag;
EMBEDDED("shaders/fade.vert") const char* g_fade_vert;
EMBEDDED("shaders/fade.geom") const char* g_fade_geom;
EMBEDDED("shaders/fade.frag") const char* g_fade_frag;
EMBEDDED("shaders/iteruniv.comp") const char* g_iteruniv_comp;

#endif /* ipsi_header_embedded__ */
