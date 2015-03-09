#ifndef AR_CONFIG_H
#define AR_CONFIG_H

//
// As of version 2.72, ARToolKit supports an OpenGL-like
// versioning system, with both header versions (for the version
// of the ARToolKit SDK installed) and runtime version reporting
// via arGetVersion().
//

// The MAJOR version number defines non-backwards compatible
// changes in the ARToolKit API. Range: [0-99].
#define AR_HEADER_VERSION_MAJOR		2

// The MINOR version number defines additions to the ARToolKit
// API, or (occsasionally) other significant backwards-compatible
// changes in runtime functionality. Range: [0-99].
#define AR_HEADER_VERSION_MINOR		72

// The TINY version number defines bug-fixes to existing
// functionality. Range: [0-99].
#define AR_HEADER_VERSION_TINY		0

// The BUILD version number will always be zero in releases,
// but may be non-zero in internal builds or in version-control
// repository-sourced code. Range: [0-99].
#define AR_HEADER_VERSION_BUILD		0

// The string representation below must match the major, minor
// and tiny release numbers.
#define AR_HEADER_VERSION_STRING	"2.72.0"

// The macros below are convenience macros to enable use
// of certain ARToolKit header functionality by the release
// version in which it appeared.
// Each time the major version number is incremented, all
// existing macros must be removed, and just one new one
// added for the new major version.
// Each time the minor version number is incremented, a new
// AR_HAVE_HEADER_VERSION_ macro definition must be added.
// Tiny version numbers (being bug-fix releases, by definition)
// are NOT included in the AR_HAVE_HEADER_VERSION_ system.
#define AR_HAVE_HEADER_VERSION_2
#define AR_HAVE_HEADER_VERSION_2_72

//
// End version definitions.
//

#define AR_PIXEL_FORMAT_RGB 1
#define AR_PIXEL_FORMAT_BGR 2
#define AR_PIXEL_FORMAT_RGBA 3
#define AR_PIXEL_FORMAT_BGRA 4
#define AR_PIXEL_FORMAT_ABGR 5
#define AR_PIXEL_FORMAT_MONO 6
#define AR_PIXEL_FORMAT_ARGB 7
#define AR_PIXEL_FORMAT_2vuy 8
#define AR_PIXEL_FORMAT_UYVY AR_PIXEL_FORMAT_2vuy
#define AR_PIXEL_FORMAT_yuvs 9
#define AR_PIXEL_FORMAT_YUY2 AR_PIXEL_FORMAT_yuvs

#define  AR_DRAW_BY_GL_DRAW_PIXELS    0
#define  AR_DRAW_BY_TEXTURE_MAPPING   1
#define  AR_DRAW_TEXTURE_FULL_IMAGE   0
#define  AR_DRAW_TEXTURE_HALF_IMAGE   1
#define  AR_IMAGE_PROC_IN_FULL        0
#define  AR_IMAGE_PROC_IN_HALF        1
#define  AR_FITTING_TO_IDEAL          0
#define  AR_FITTING_TO_INPUT          1

#define  AR_TEMPLATE_MATCHING_COLOR   0
#define  AR_TEMPLATE_MATCHING_BW      1
#define  AR_MATCHING_WITHOUT_PCA      0
#define  AR_MATCHING_WITH_PCA         1
#define  DEFAULT_TEMPLATE_MATCHING_MODE     AR_TEMPLATE_MATCHING_COLOR
#define  DEFAULT_MATCHING_PCA_MODE          AR_MATCHING_WITHOUT_PCA



#  define   AR_DEFAULT_PIXEL_FORMAT AR_PIXEL_FORMAT_RGB
#  define   DEFAULT_IMAGE_PROC_MODE     AR_IMAGE_PROC_IN_FULL
#  define   DEFAULT_FITTING_MODE        AR_FITTING_TO_IDEAL



#if (AR_DEFAULT_PIXEL_FORMAT == AR_PIXEL_FORMAT_ABGR) || (AR_DEFAULT_PIXEL_FORMAT == AR_PIXEL_FORMAT_BGRA) || (AR_DEFAULT_PIXEL_FORMAT == AR_PIXEL_FORMAT_RGBA) || (AR_DEFAULT_PIXEL_FORMAT == AR_PIXEL_FORMAT_ARGB)
#  define AR_PIX_SIZE_DEFAULT      4
#elif (AR_DEFAULT_PIXEL_FORMAT == AR_PIXEL_FORMAT_BGR) || (AR_DEFAULT_PIXEL_FORMAT == AR_PIXEL_FORMAT_RGB)
#  define AR_PIX_SIZE_DEFAULT      3
#elif (AR_DEFAULT_PIXEL_FORMAT == AR_PIXEL_FORMAT_2vuy) || (AR_DEFAULT_PIXEL_FORMAT == AR_PIXEL_FORMAT_yuvs)
#  define AR_PIX_SIZE_DEFAULT      2
#elif (AR_DEFAULT_PIXEL_FORMAT == AR_PIXEL_FORMAT_MONO)
#  define AR_PIX_SIZE_DEFAULT      1
#else
#  error Unknown default pixel format defined in config.h.
#endif


#define   AR_GET_TRANS_MAT_MAX_LOOP_COUNT         5
#define   AR_GET_TRANS_MAT_MAX_FIT_ERROR          1.0
#define   AR_GET_TRANS_CONT_MAT_MAX_FIT_ERROR     1.0
//
#define   AR_AREA_MAX      100000
#define   AR_AREA_MIN          70
//
#define   AR_SQUARE_MAX        30
#define   AR_CHAIN_MAX      10000
#define   AR_PATT_NUM_MAX      50
#define   AR_PATT_SIZE_X       16
#define   AR_PATT_SIZE_Y       16
#define   AR_PATT_SAMPLE_NUM   64

#define   AR_PARAM_NMIN         6
#define   AR_PARAM_NMAX      1000
#define   AR_PARAM_C34        100.0

#endif
