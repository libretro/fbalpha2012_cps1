#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

/*
 ********************************
 * VERSION: 2.0
 ********************************
 *
 * - 2.0: Add support for core options v2 interface
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/
/* RETRO_LANGUAGE_AR */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_AR "سرعة CPU (%)"
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_AR "تمكين الإفراط في تسجيل المعالج المحاكي. يمكن أن يقلل من التباطؤ، ولكن يمكن أن يسبب خلل."
#define FBA2012CPS1_HISCORES_LABEL_AR NULL
#define FBA2012CPS1_HISCORES_INFO_0_AR NULL
#define FBA2012CPS1_ASPECT_LABEL_AR NULL
#define FBA2012CPS1_ASPECT_INFO_0_AR NULL
#define OPTION_VAL_DAR_AR NULL
#define OPTION_VAL_PAR_AR NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_AR NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_AR NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_AR "تصفية الصوت"
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_AR NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_AR NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_AR NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_AR NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_AR NULL
#define OPTION_VAL_AUTO_AR "تلقائي"
#define OPTION_VAL_MANUAL_AR "يدوي"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_AR NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_AR "عندما يتم تعيين 'Frameskip' إلى 'يدوي'، يحدد عتبة شغل التخزين المؤقت الصوتي (النسبة المئوية) التي سيتم تخطي الأطر أدناه. فارتفاع القيم يقلل من خطر التشويش بالتسبب في انخفاض الأطر بصورة أكثر تواترا."
#define FBA2012CPS1_DIAGNOSTICS_LABEL_AR NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_AR "تبديل تشغيل ثم استئناف المحتوى لفتح قائمة الخدمة."

struct retro_core_option_v2_category option_cats_ar[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ar[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_AR,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_AR,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_AR,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_AR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_AR,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_AR,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_AR },
         { "PAR", OPTION_VAL_PAR_AR },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_AR,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_AR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_AR,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_AR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_AR,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_AR,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_AR,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_AR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_AR },
         { "manual",   OPTION_VAL_MANUAL_AR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_AR,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_AR,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_AR,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_AR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ar = {
   option_cats_ar,
   option_defs_ar
};

/* RETRO_LANGUAGE_AST */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_AST "Velocidá de la CPU (%)"
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_AST NULL
#define FBA2012CPS1_HISCORES_LABEL_AST "Puntuaciones altes"
#define FBA2012CPS1_HISCORES_INFO_0_AST "Activa'l guardáu de les puntuaciones altes de los xuegos compatibles. El ficheru «hiscore.dat» ha tar na carpeta «system/fbalpha2012/»."
#define FBA2012CPS1_ASPECT_LABEL_AST "Proporción d'aspeutu fornida pol nucleu"
#define FBA2012CPS1_ASPECT_INFO_0_AST NULL
#define OPTION_VAL_DAR_AST NULL
#define OPTION_VAL_PAR_AST NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_AST NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_AST NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_AST NULL
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_AST NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_AST NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_AST NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_AST NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_AST NULL
#define OPTION_VAL_AUTO_AST NULL
#define OPTION_VAL_MANUAL_AST NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_AST NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_AST NULL
#define FBA2012CPS1_DIAGNOSTICS_LABEL_AST NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_AST NULL

struct retro_core_option_v2_category option_cats_ast[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ast[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_AST,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_AST,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_AST,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_AST,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_AST,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_AST,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_AST },
         { "PAR", OPTION_VAL_PAR_AST },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_AST,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_AST,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_AST,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_AST,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_AST,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_AST,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_AST,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_AST,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_AST },
         { "manual",   OPTION_VAL_MANUAL_AST },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_AST,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_AST,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_AST,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_AST,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ast = {
   option_cats_ast,
   option_defs_ast
};

/* RETRO_LANGUAGE_CA */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_CA NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_CA NULL
#define FBA2012CPS1_HISCORES_LABEL_CA NULL
#define FBA2012CPS1_HISCORES_INFO_0_CA NULL
#define FBA2012CPS1_ASPECT_LABEL_CA NULL
#define FBA2012CPS1_ASPECT_INFO_0_CA NULL
#define OPTION_VAL_DAR_CA NULL
#define OPTION_VAL_PAR_CA NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_CA NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_CA NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_CA NULL
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_CA NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_CA NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_CA NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_CA NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_CA NULL
#define OPTION_VAL_AUTO_CA NULL
#define OPTION_VAL_MANUAL_CA NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_CA NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_CA NULL
#define FBA2012CPS1_DIAGNOSTICS_LABEL_CA NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_CA NULL

struct retro_core_option_v2_category option_cats_ca[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ca[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_CA,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_CA,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_CA,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_CA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_CA,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_CA,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_CA },
         { "PAR", OPTION_VAL_PAR_CA },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_CA,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_CA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_CA,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_CA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_CA,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_CA,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_CA,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_CA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_CA },
         { "manual",   OPTION_VAL_MANUAL_CA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_CA,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_CA,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_CA,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_CA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ca = {
   option_cats_ca,
   option_defs_ca
};

/* RETRO_LANGUAGE_CHS */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_CHS NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_CHS "启用模拟CPU的超频功能。此功能可以提升运行速度，但可能会导致屏幕闪烁。"
#define FBA2012CPS1_HISCORES_LABEL_CHS NULL
#define FBA2012CPS1_HISCORES_INFO_0_CHS NULL
#define FBA2012CPS1_ASPECT_LABEL_CHS "核心提供的宽高比"
#define FBA2012CPS1_ASPECT_INFO_0_CHS NULL
#define OPTION_VAL_DAR_CHS NULL
#define OPTION_VAL_PAR_CHS NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_CHS NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_CHS NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_CHS "音频过滤器"
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_CHS NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_CHS NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_CHS NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_CHS "跳帧"
#define FBA2012CPS1_FRAMESKIP_INFO_0_CHS "跳过帧以避免运行下的音频缓冲区(崩溃)。提高性能以牺牲视觉性能。 “自动”跳板帧在前端建议时。“手动”使用了“Frameskip 阈值(%)”设置。"
#define OPTION_VAL_AUTO_CHS "自动"
#define OPTION_VAL_MANUAL_CHS "手动"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_CHS "跳帧阈值(%)"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_CHS "当“跳帧”功能设置成“手动”，请在下方指定跳帧占音频缓存的比例（百分比）。更高的值可以降低因频繁丢帧而导致的爆音风险。"
#define FBA2012CPS1_DIAGNOSTICS_LABEL_CHS NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_CHS "切换到开启状态并恢复内容，以打开服务菜单."

struct retro_core_option_v2_category option_cats_chs[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_chs[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_CHS,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_CHS,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_CHS,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_CHS },
         { "PAR", OPTION_VAL_PAR_CHS },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_CHS,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_CHS,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_CHS,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_CHS,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_CHS },
         { "manual",   OPTION_VAL_MANUAL_CHS },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_CHS,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_CHS,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_chs = {
   option_cats_chs,
   option_defs_chs
};

/* RETRO_LANGUAGE_CHT */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_CHT NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_CHT "啟用模擬CPU的超頻。可以減少延遲，但有機會引致閃爍。"
#define FBA2012CPS1_HISCORES_LABEL_CHT NULL
#define FBA2012CPS1_HISCORES_INFO_0_CHT NULL
#define FBA2012CPS1_ASPECT_LABEL_CHT NULL
#define FBA2012CPS1_ASPECT_INFO_0_CHT NULL
#define OPTION_VAL_DAR_CHT NULL
#define OPTION_VAL_PAR_CHT NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_CHT NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_CHT NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_CHT "音訊過濾器"
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_CHT NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_CHT NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_CHT NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_CHT NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_CHT NULL
#define OPTION_VAL_AUTO_CHT "自動"
#define OPTION_VAL_MANUAL_CHT NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_CHT NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_CHT NULL
#define FBA2012CPS1_DIAGNOSTICS_LABEL_CHT NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_CHT NULL

struct retro_core_option_v2_category option_cats_cht[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cht[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_CHT,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_CHT,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_CHT,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_CHT },
         { "PAR", OPTION_VAL_PAR_CHT },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_CHT,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_CHT,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_CHT,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_CHT,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_CHT },
         { "manual",   OPTION_VAL_MANUAL_CHT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_CHT,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_CHT,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cht = {
   option_cats_cht,
   option_defs_cht
};

/* RETRO_LANGUAGE_CS */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_CS NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_CS NULL
#define FBA2012CPS1_HISCORES_LABEL_CS NULL
#define FBA2012CPS1_HISCORES_INFO_0_CS NULL
#define FBA2012CPS1_ASPECT_LABEL_CS NULL
#define FBA2012CPS1_ASPECT_INFO_0_CS NULL
#define OPTION_VAL_DAR_CS NULL
#define OPTION_VAL_PAR_CS NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_CS NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_CS NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_CS NULL
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_CS NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_CS NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_CS NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_CS NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_CS NULL
#define OPTION_VAL_AUTO_CS NULL
#define OPTION_VAL_MANUAL_CS NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_CS NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_CS NULL
#define FBA2012CPS1_DIAGNOSTICS_LABEL_CS NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_CS NULL

struct retro_core_option_v2_category option_cats_cs[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cs[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_CS,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_CS,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_CS,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_CS,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_CS,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_CS,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_CS },
         { "PAR", OPTION_VAL_PAR_CS },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_CS,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_CS,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_CS,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_CS,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_CS,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_CS,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_CS,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_CS,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_CS },
         { "manual",   OPTION_VAL_MANUAL_CS },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_CS,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_CS,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_CS,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_CS,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cs = {
   option_cats_cs,
   option_defs_cs
};

/* RETRO_LANGUAGE_CY */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_CY NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_CY "Yn galluogi gor-glocio'r CPU wedi'i efelychu. Gall leihau arafu, ond gall achosi bylchu."
#define FBA2012CPS1_HISCORES_LABEL_CY NULL
#define FBA2012CPS1_HISCORES_INFO_0_CY NULL
#define FBA2012CPS1_ASPECT_LABEL_CY NULL
#define FBA2012CPS1_ASPECT_INFO_0_CY NULL
#define OPTION_VAL_DAR_CY NULL
#define OPTION_VAL_PAR_CY NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_CY NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_CY NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_CY NULL
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_CY NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_CY NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_CY NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_CY NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_CY NULL
#define OPTION_VAL_AUTO_CY NULL
#define OPTION_VAL_MANUAL_CY NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_CY NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_CY "Pan fydd 'Frameskip' yn cael ei osod i 'Manual', yn pennu'r trothwy meddiannaeth byffer sain (canran) islaw y bydd fframiau yn cael eu hepgor. Mae gwerthoedd uwch yn lleihau'r risg o graclo trwy achosi i fframiau ostwng yn amlach."
#define FBA2012CPS1_DIAGNOSTICS_LABEL_CY NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_CY NULL

struct retro_core_option_v2_category option_cats_cy[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cy[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_CY,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_CY,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_CY,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_CY,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_CY,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_CY,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_CY },
         { "PAR", OPTION_VAL_PAR_CY },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_CY,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_CY,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_CY,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_CY,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_CY,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_CY,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_CY,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_CY,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_CY },
         { "manual",   OPTION_VAL_MANUAL_CY },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_CY,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_CY,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_CY,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_CY,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cy = {
   option_cats_cy,
   option_defs_cy
};

/* RETRO_LANGUAGE_DA */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_DA NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_DA "Aktiverer overclocking af den emulerede CPU. Kan reducere træghed, men kan forårsage fejl."
#define FBA2012CPS1_HISCORES_LABEL_DA NULL
#define FBA2012CPS1_HISCORES_INFO_0_DA NULL
#define FBA2012CPS1_ASPECT_LABEL_DA NULL
#define FBA2012CPS1_ASPECT_INFO_0_DA NULL
#define OPTION_VAL_DAR_DA NULL
#define OPTION_VAL_PAR_DA NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_DA NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_DA NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_DA NULL
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_DA NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_DA NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_DA NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_DA NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_DA NULL
#define OPTION_VAL_AUTO_DA NULL
#define OPTION_VAL_MANUAL_DA NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_DA NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_DA "Når 'Frameskip' er sat til 'Manual', angiver den lydbufferbelægningstærsklen (procentdel), under hvilken frames overspringes. Højere værdier reducerer risikoen for crackling ved at foranledige hyppigere drop af frames."
#define FBA2012CPS1_DIAGNOSTICS_LABEL_DA NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_DA "Slå TIL, og genoptag derefter indhold for at åbne tjenestemenu."

struct retro_core_option_v2_category option_cats_da[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_da[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_DA,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_DA,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_DA,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_DA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_DA,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_DA,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_DA },
         { "PAR", OPTION_VAL_PAR_DA },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_DA,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_DA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_DA,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_DA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_DA,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_DA,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_DA,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_DA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_DA },
         { "manual",   OPTION_VAL_MANUAL_DA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_DA,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_DA,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_DA,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_DA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_da = {
   option_cats_da,
   option_defs_da
};

/* RETRO_LANGUAGE_DE */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_DE "CPU-Geschwindigkeit (%)"
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_DE "Ermöglicht das Übertakten der emulierten CPU. Kann Slowdown verringern, aber Glitches verursachen."
#define FBA2012CPS1_HISCORES_LABEL_DE "Highscores"
#define FBA2012CPS1_HISCORES_INFO_0_DE "Ermöglicht das Speichern von Highscores in unterstützten Spielen. Erfordert, dass die Datei \"hiscore.dat\" im Ordner system/fbalpha2012/ angelegt wird."
#define FBA2012CPS1_ASPECT_LABEL_DE "Core-Bereitgestelltes Seitenverhältnis"
#define FBA2012CPS1_ASPECT_INFO_0_DE "Wählt das bevorzugte Seitenverhältnis des Inhalts. Dies gilt nur, wenn das Seitenverhältnis von RetroArch in den Videoeinstellungen auf \"Core provided\" eingestellt ist."
#define OPTION_VAL_DAR_DE NULL
#define OPTION_VAL_PAR_DE NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_DE NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_DE NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_DE "Audiofilter"
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_DE NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_DE NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_DE NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_DE NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_DE "Überspringen Sie Frames um zu vermeiden, dass Audio-Puffer unterlaufen (Knistern). Verbessert die Leistung auf Kosten der visuellen Glätte. 'Auto' überspringt Frames wenn vom Frontend empfohlen wird. 'Manuell' verwendet die Einstellung 'Frameskip Grenzwert (%)'."
#define OPTION_VAL_AUTO_DE "Automatisch"
#define OPTION_VAL_MANUAL_DE "Manuell"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_DE "Frameskip Grenzwert (%)"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_DE "Gibt den Audiopuffer-Belegungsschwellenwert (Prozent) an, unter dem Frames übersprungen werden, wenn 'Frameskip' auf 'Manual' eingestellt ist. Höhere Werte verringern das Risiko von Knistern, da Frames häufiger weggelassen werden."
#define FBA2012CPS1_DIAGNOSTICS_LABEL_DE NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_DE NULL

struct retro_core_option_v2_category option_cats_de[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_de[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_DE,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_DE,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_DE,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_DE,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_DE,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_DE,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_DE },
         { "PAR", OPTION_VAL_PAR_DE },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_DE,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_DE,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_DE,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_DE,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_DE,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_DE,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_DE,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_DE,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_DE },
         { "manual",   OPTION_VAL_MANUAL_DE },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_DE,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_DE,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_DE,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_DE,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_de = {
   option_cats_de,
   option_defs_de
};

/* RETRO_LANGUAGE_EL */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_EL NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_EL "Ενεργοποιεί το overclocking του εξομoιωμένου επεξεργαστή. Μπορεί να μειώσει την επιβράδυνση, αλλά μπορεί να προκαλέσει δυσλειτουργίες."
#define FBA2012CPS1_HISCORES_LABEL_EL NULL
#define FBA2012CPS1_HISCORES_INFO_0_EL NULL
#define FBA2012CPS1_ASPECT_LABEL_EL NULL
#define FBA2012CPS1_ASPECT_INFO_0_EL NULL
#define OPTION_VAL_DAR_EL NULL
#define OPTION_VAL_PAR_EL NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_EL NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_EL NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_EL "Φίλτρα Ήχου"
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_EL NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_EL NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_EL NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_EL NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_EL NULL
#define OPTION_VAL_AUTO_EL NULL
#define OPTION_VAL_MANUAL_EL NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_EL NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_EL NULL
#define FBA2012CPS1_DIAGNOSTICS_LABEL_EL NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_EL NULL

struct retro_core_option_v2_category option_cats_el[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_el[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_EL,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_EL,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_EL,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_EL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_EL,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_EL,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_EL },
         { "PAR", OPTION_VAL_PAR_EL },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_EL,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_EL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_EL,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_EL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_EL,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_EL,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_EL,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_EL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_EL },
         { "manual",   OPTION_VAL_MANUAL_EL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_EL,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_EL,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_EL,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_EL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_el = {
   option_cats_el,
   option_defs_el
};

/* RETRO_LANGUAGE_EO */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_EO NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_EO NULL
#define FBA2012CPS1_HISCORES_LABEL_EO NULL
#define FBA2012CPS1_HISCORES_INFO_0_EO NULL
#define FBA2012CPS1_ASPECT_LABEL_EO NULL
#define FBA2012CPS1_ASPECT_INFO_0_EO NULL
#define OPTION_VAL_DAR_EO NULL
#define OPTION_VAL_PAR_EO NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_EO NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_EO NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_EO NULL
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_EO NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_EO NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_EO NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_EO NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_EO NULL
#define OPTION_VAL_AUTO_EO NULL
#define OPTION_VAL_MANUAL_EO NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_EO NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_EO NULL
#define FBA2012CPS1_DIAGNOSTICS_LABEL_EO NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_EO NULL

struct retro_core_option_v2_category option_cats_eo[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_eo[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_EO,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_EO,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_EO,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_EO,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_EO,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_EO,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_EO },
         { "PAR", OPTION_VAL_PAR_EO },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_EO,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_EO,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_EO,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_EO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_EO,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_EO,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_EO,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_EO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_EO },
         { "manual",   OPTION_VAL_MANUAL_EO },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_EO,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_EO,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_EO,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_EO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_eo = {
   option_cats_eo,
   option_defs_eo
};

/* RETRO_LANGUAGE_ES */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_ES "Velocidad de la CPU (%)"
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_ES "Overclockea la CPU emulada. Puede reducir las ralentizaciones, pero podría provocar fallos gráficos."
#define FBA2012CPS1_HISCORES_LABEL_ES "Tablas de puntuaciones"
#define FBA2012CPS1_HISCORES_INFO_0_ES "Guarda las tablas con las mejores puntuaciones en los juegos compatibles con esta función. Es necesario tener el archivo «hiscore.dat» en la carpeta system/fbalpha2012/."
#define FBA2012CPS1_ASPECT_LABEL_ES "Relación de aspecto del núcleo"
#define FBA2012CPS1_ASPECT_INFO_0_ES "Selecciona la relación de aspecto preferida para los contenidos. Este ajuste solo se aplicará cuando la relación de aspecto de RetroArch esté configurada como «Asignada por el núcleo»."
#define OPTION_VAL_DAR_ES "DAR (relación de aspecto de imagen)"
#define OPTION_VAL_PAR_ES "PAR (relación de aspecto de píxeles)"
#define FBA2012CPS1_AUTO_ROTATE_LABEL_ES "Rotar los juegos con una alineación vertical (es necesario reiniciar)"
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_ES "Rota automáticamente la imagen al ejecutar juegos con una alineación vertical. Al desactivar esta opción, la entrada de la cruceta se rotará para que coincida con las direcciones que aparezcan en pantalla."
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_ES "Filtro de audio"
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_ES "Aplica un filtro de paso bajo al audio para suavizar la estridencia del sonido de ciertos juegos arcade."
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_ES "Nivel del filtro de audio (%)"
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_ES "Especifica el corte de frecuencias en el filtro de paso bajo de audio. Un valor elevado aumentará la fuerza percibida del filtro, ya que se atenuará un rango mayor del espectro de frecuencias altas."
#define FBA2012CPS1_FRAMESKIP_LABEL_ES "Omisión de fotogramas"
#define FBA2012CPS1_FRAMESKIP_INFO_0_ES "Omite fotogramas para no saturar el búfer de audio (chasquidos en el sonido). Mejora el rendimiento a costa de perder fluidez visual. Selección automática omite fotogramas según lo aconseje el front-end. El valor Manual utiliza el ajuste Umbral de omisión de fotogramas (%)."
#define OPTION_VAL_AUTO_ES "Selección automática"
#define OPTION_VAL_MANUAL_ES NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_ES "Umbral de omisión de fotogramas (%)"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_ES "Cuando la omisión de fotogramas esté configurada como Manual, este ajuste especifica el umbral de ocupación del búfer de audio (en porcentaje) por el que se omitirán fotogramas si el valor es inferior. Un valor más elevado reduce el riesgo de chasquidos omitiendo fotogramas con una mayor frecuencia."
#define FBA2012CPS1_DIAGNOSTICS_LABEL_ES "Entrada de diagnóstico"
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_ES "Activa esta opción y reanuda el contenido para abrir el menú de servicio."

struct retro_core_option_v2_category option_cats_es[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_es[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_ES,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_ES,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_ES,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_ES,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_ES,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_ES,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_ES },
         { "PAR", OPTION_VAL_PAR_ES },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_ES,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_ES,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_ES,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_ES,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_ES,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_ES,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_ES,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_ES,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_ES },
         { "manual",   OPTION_VAL_MANUAL_ES },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_ES,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_ES,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_ES,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_ES,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_es = {
   option_cats_es,
   option_defs_es
};

/* RETRO_LANGUAGE_FA */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_FA NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_FA "اورکلاک CPU شبیه سازی شده را فعال می کند. می تواند کاهش سرعت را کاهش دهد، اما ممکن است باعث اشکال شود."
#define FBA2012CPS1_HISCORES_LABEL_FA NULL
#define FBA2012CPS1_HISCORES_INFO_0_FA NULL
#define FBA2012CPS1_ASPECT_LABEL_FA NULL
#define FBA2012CPS1_ASPECT_INFO_0_FA NULL
#define OPTION_VAL_DAR_FA NULL
#define OPTION_VAL_PAR_FA NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_FA NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_FA NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_FA NULL
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_FA NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_FA NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_FA NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_FA NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_FA NULL
#define OPTION_VAL_AUTO_FA NULL
#define OPTION_VAL_MANUAL_FA NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_FA NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_FA NULL
#define FBA2012CPS1_DIAGNOSTICS_LABEL_FA NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_FA NULL

struct retro_core_option_v2_category option_cats_fa[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fa[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_FA,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_FA,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_FA,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_FA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_FA,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_FA,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_FA },
         { "PAR", OPTION_VAL_PAR_FA },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_FA,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_FA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_FA,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_FA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_FA,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_FA,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_FA,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_FA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_FA },
         { "manual",   OPTION_VAL_MANUAL_FA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_FA,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_FA,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_FA,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_FA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fa = {
   option_cats_fa,
   option_defs_fa
};

/* RETRO_LANGUAGE_FI */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_FI "Suorittimen nopeus (%)"
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_FI "Mahdollistaa emuloidun suorittimen ylikellotuksen. Voi vähentää hidastumista, mutta saattaa aiheuttaa virheitä."
#define FBA2012CPS1_HISCORES_LABEL_FI NULL
#define FBA2012CPS1_HISCORES_INFO_0_FI NULL
#define FBA2012CPS1_ASPECT_LABEL_FI "Ytimen määrittämä kuvasuhde"
#define FBA2012CPS1_ASPECT_INFO_0_FI NULL
#define OPTION_VAL_DAR_FI NULL
#define OPTION_VAL_PAR_FI NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_FI NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_FI NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_FI "Äänisuodatin"
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_FI NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_FI "Äänen suodatustaso (%)"
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_FI NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_FI "Kuvanohitus"
#define FBA2012CPS1_FRAMESKIP_INFO_0_FI "Ohita kuvia välttääksesi äänipuskurin ali ajon (säröily). Parantaa suorituskykyä visuaalisen tasaisuuden kustannuksella. \"Automaatti\" ohittaa kehykset käyttöliittymän asetusten mukaan. \"Manuaalinen\" käyttää \"Kuvienohituksen arvo (%)\" -asetusta."
#define OPTION_VAL_AUTO_FI "Automaattinen"
#define OPTION_VAL_MANUAL_FI "Manuaalinen"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_FI "Kuvienohituksen arvo (%)"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_FI "Kun \"kehyksen ohitus\" on asetettu \"manuaaliksi\", määrittää äänipuskuri käyttökynnyksen (prosentteina), jonka alapuolella kehykset ohitetaan. Korkeammat arvot vähentävät särkymisen riskiä siten, että kehykset putoavat useammin."
#define FBA2012CPS1_DIAGNOSTICS_LABEL_FI NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_FI NULL

struct retro_core_option_v2_category option_cats_fi[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fi[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_FI,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_FI,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_FI,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_FI,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_FI,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_FI,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_FI },
         { "PAR", OPTION_VAL_PAR_FI },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_FI,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_FI,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_FI,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_FI,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_FI,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_FI,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_FI,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_FI,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_FI },
         { "manual",   OPTION_VAL_MANUAL_FI },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_FI,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_FI,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_FI,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_FI,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fi = {
   option_cats_fi,
   option_defs_fi
};

/* RETRO_LANGUAGE_FR */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_FR "Vitesse du processeur (%)"
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_FR "Active l'overclocking du processeur émulé. Peut réduire le ralentissement, mais peut causer des problèmes."
#define FBA2012CPS1_HISCORES_LABEL_FR "Meilleurs scores"
#define FBA2012CPS1_HISCORES_INFO_0_FR "Permet la sauvegarde des meilleurs scores dans les jeux pris en charge. Nécessite que le fichier 'hiscore.dat' soit placé dans votre dossier system/fbalpha2012/."
#define FBA2012CPS1_ASPECT_LABEL_FR "Rapport d'aspect fourni par le cœur"
#define FBA2012CPS1_ASPECT_INFO_0_FR "Sélectionne le rapport d'aspect préféré pour le contenu. Cela ne s'appliquera que lorsque le ratio d'aspect de RetroArch est réglé sur 'Fourni par le cœur' (Core provided) dans les paramètres vidéo."
#define OPTION_VAL_DAR_FR "DAR (rapport d'aspect de l'écran)"
#define OPTION_VAL_PAR_FR "PAR (rapport d'aspect des pixels)"
#define FBA2012CPS1_AUTO_ROTATE_LABEL_FR "Rotation des jeux alignés verticalement (Redémarrage requis)"
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_FR "Faire pivoter automatiquement l'affichage lors du lancement de jeux alignés verticalement. Lorsque cette option est désactivée, les entrées de croix directionnelle sont pivotées pour correspondre aux directions à l'écran."
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_FR "Filtre audio"
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_FR "Active un filtre audio passe-bas pour adoucir le son 'dur' de certains jeux d'arcade."
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_FR "Niveau du filtre audio (%)"
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_FR "Spécifie la fréquence de coupure du filtre passe-bas audio. Une valeur plus élevée accroît la 'force' perçue du filtre, car une gamme plus large du spectre des hautes fréquences est atténuée."
#define FBA2012CPS1_FRAMESKIP_LABEL_FR "Saut d'images"
#define FBA2012CPS1_FRAMESKIP_INFO_0_FR "Sauter des images pour éviter que le tampon audio ne soit sous-exécuté (crépitements). Améliore les performances au détriment de la fluidité visuelle. 'Auto' saute des images lorsque l'interface le conseille. 'Manuel' utilise le paramètre 'Seuil de saut d'images (%)'."
#define OPTION_VAL_AUTO_FR NULL
#define OPTION_VAL_MANUAL_FR "Manuel"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_FR "Seuil de saut d'images (%)"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_FR "Lorsque 'Saut d'images' est réglé sur 'Manuel', spécifie le seuil d'occupation du tampon audio (pourcentage) en dessous duquel des images seront sautées. Des valeurs plus élevées réduisent le risque de crépitements en faisant sauter des images plus fréquemment."
#define FBA2012CPS1_DIAGNOSTICS_LABEL_FR "Touche de diagnostic"
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_FR "Activer cette option puis reprendre le contenu pour ouvrir le menu de service."

struct retro_core_option_v2_category option_cats_fr[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fr[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_FR,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_FR,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_FR,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_FR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_FR,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_FR,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_FR },
         { "PAR", OPTION_VAL_PAR_FR },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_FR,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_FR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_FR,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_FR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_FR,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_FR,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_FR,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_FR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_FR },
         { "manual",   OPTION_VAL_MANUAL_FR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_FR,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_FR,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_FR,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_FR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fr = {
   option_cats_fr,
   option_defs_fr
};

/* RETRO_LANGUAGE_GL */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_GL NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_GL "Permite facer overclocking á CPU emulada. Pode disminuir a ralentización, máis tamén pode causar defectos visuais."
#define FBA2012CPS1_HISCORES_LABEL_GL NULL
#define FBA2012CPS1_HISCORES_INFO_0_GL NULL
#define FBA2012CPS1_ASPECT_LABEL_GL NULL
#define FBA2012CPS1_ASPECT_INFO_0_GL NULL
#define OPTION_VAL_DAR_GL NULL
#define OPTION_VAL_PAR_GL NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_GL NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_GL NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_GL NULL
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_GL NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_GL NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_GL NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_GL NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_GL NULL
#define OPTION_VAL_AUTO_GL NULL
#define OPTION_VAL_MANUAL_GL NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_GL NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_GL "Cando a omisión de fotogramas sexa configurada en 'Manual', este axuste especifíca o umbral de ocupación do búfer de audio (en porcentaxe). Os valores altos reducen o risco de aparición de chasquidos omitindo fotogramas de forma máis frecuente."
#define FBA2012CPS1_DIAGNOSTICS_LABEL_GL NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_GL NULL

struct retro_core_option_v2_category option_cats_gl[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_gl[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_GL,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_GL,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_GL,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_GL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_GL,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_GL,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_GL },
         { "PAR", OPTION_VAL_PAR_GL },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_GL,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_GL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_GL,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_GL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_GL,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_GL,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_GL,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_GL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_GL },
         { "manual",   OPTION_VAL_MANUAL_GL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_GL,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_GL,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_GL,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_GL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_gl = {
   option_cats_gl,
   option_defs_gl
};

/* RETRO_LANGUAGE_HE */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_HE NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_HE NULL
#define FBA2012CPS1_HISCORES_LABEL_HE NULL
#define FBA2012CPS1_HISCORES_INFO_0_HE NULL
#define FBA2012CPS1_ASPECT_LABEL_HE NULL
#define FBA2012CPS1_ASPECT_INFO_0_HE NULL
#define OPTION_VAL_DAR_HE NULL
#define OPTION_VAL_PAR_HE NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_HE NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_HE NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_HE NULL
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_HE NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_HE NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_HE NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_HE NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_HE NULL
#define OPTION_VAL_AUTO_HE NULL
#define OPTION_VAL_MANUAL_HE NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_HE NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_HE NULL
#define FBA2012CPS1_DIAGNOSTICS_LABEL_HE NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_HE NULL

struct retro_core_option_v2_category option_cats_he[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_he[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_HE,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_HE,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_HE,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_HE,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_HE,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_HE,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_HE },
         { "PAR", OPTION_VAL_PAR_HE },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_HE,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_HE,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_HE,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_HE,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_HE,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_HE,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_HE,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_HE,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_HE },
         { "manual",   OPTION_VAL_MANUAL_HE },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_HE,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_HE,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_HE,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_HE,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_he = {
   option_cats_he,
   option_defs_he
};

/* RETRO_LANGUAGE_HU */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_HU NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_HU NULL
#define FBA2012CPS1_HISCORES_LABEL_HU NULL
#define FBA2012CPS1_HISCORES_INFO_0_HU NULL
#define FBA2012CPS1_ASPECT_LABEL_HU NULL
#define FBA2012CPS1_ASPECT_INFO_0_HU NULL
#define OPTION_VAL_DAR_HU NULL
#define OPTION_VAL_PAR_HU NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_HU NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_HU NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_HU NULL
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_HU NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_HU NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_HU NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_HU NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_HU NULL
#define OPTION_VAL_AUTO_HU NULL
#define OPTION_VAL_MANUAL_HU "Kézi"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_HU NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_HU NULL
#define FBA2012CPS1_DIAGNOSTICS_LABEL_HU NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_HU NULL

struct retro_core_option_v2_category option_cats_hu[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hu[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_HU,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_HU,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_HU,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_HU,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_HU,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_HU,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_HU },
         { "PAR", OPTION_VAL_PAR_HU },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_HU,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_HU,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_HU,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_HU,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_HU,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_HU,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_HU,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_HU,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_HU },
         { "manual",   OPTION_VAL_MANUAL_HU },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_HU,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_HU,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_HU,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_HU,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hu = {
   option_cats_hu,
   option_defs_hu
};

/* RETRO_LANGUAGE_ID */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_ID NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_ID "Mengaktifkan overclocking CPU yang di emulasi. Dapat mengurangi perlambatan, tetapi dapat menyebabkan gangguan."
#define FBA2012CPS1_HISCORES_LABEL_ID NULL
#define FBA2012CPS1_HISCORES_INFO_0_ID NULL
#define FBA2012CPS1_ASPECT_LABEL_ID NULL
#define FBA2012CPS1_ASPECT_INFO_0_ID NULL
#define OPTION_VAL_DAR_ID NULL
#define OPTION_VAL_PAR_ID NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_ID NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_ID NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_ID NULL
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_ID NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_ID NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_ID NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_ID NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_ID NULL
#define OPTION_VAL_AUTO_ID NULL
#define OPTION_VAL_MANUAL_ID NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_ID NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_ID "Saat 'Frameskip' di setel ke 'Manual', tentukan ambang batas hunian buffer audio (persentase) di bawah frame mana yang akan dilewati. Nilai yang lebih tinggi mengurangi risiko keretakan dengan menyebabkan bingkai frame lebih sering dijatuhkan."
#define FBA2012CPS1_DIAGNOSTICS_LABEL_ID NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_ID "Setel Aktifkan lalu lanjutkan konten untuk membuka menu layanan."

struct retro_core_option_v2_category option_cats_id[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_id[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_ID,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_ID,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_ID,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_ID,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_ID,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_ID,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_ID },
         { "PAR", OPTION_VAL_PAR_ID },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_ID,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_ID,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_ID,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_ID,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_ID,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_ID,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_ID,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_ID,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_ID },
         { "manual",   OPTION_VAL_MANUAL_ID },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_ID,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_ID,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_ID,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_ID,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_id = {
   option_cats_id,
   option_defs_id
};

/* RETRO_LANGUAGE_IT */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_IT "Velocità CPU (%)"
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_IT "Abilita l'overclocking della CPU emulata. Può ridurre il rallentamento, ma può causare glitch."
#define FBA2012CPS1_HISCORES_LABEL_IT "Punteggi"
#define FBA2012CPS1_HISCORES_INFO_0_IT "Abilita il salvataggio di punteggi alti nei giochi supportati. Richiede che il file 'hiscore.dat' sia posizionato nella cartella system/fbalpha2012/."
#define FBA2012CPS1_ASPECT_LABEL_IT "Rapporto Dimensioni fornito dal Core"
#define FBA2012CPS1_ASPECT_INFO_0_IT "Seleziona le proporzioni preferite del contenuto. Ciò si applicherà solo quando le proporzioni di RetroArc sono impostate su 'Core fornito' nelle impostazioni del video."
#define OPTION_VAL_DAR_IT NULL
#define OPTION_VAL_PAR_IT NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_IT "Ruota Giochi Allineati Verticalmente (Riavvio)"
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_IT "Ruota automaticamente il display quando esegui partite allineate verticalmente. Quando disabilitato, l'input D-Pad sarà ruotato per corrispondere alle direzioni sullo schermo."
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_IT "Filtro Audio"
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_IT "Abilita un filtro audio passa-basso per ammorbidire il suono 'duro' di alcuni giochi arcade."
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_IT "Livello Filtro Audio (%)"
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_IT "Specifica la frequenza di cut-off del filtro audio passa-basso. Un valore più elevato aumenta la 'forza' percepita del filtro, poiché una gamma più ampia dello spettro ad alta frequenza è attenuata."
#define FBA2012CPS1_FRAMESKIP_LABEL_IT "Salta fotogramma"
#define FBA2012CPS1_FRAMESKIP_INFO_0_IT "Salta i fotogrammi per evitare la sotto esecuzione del buffer audio (crackling). Migliora le prestazioni a scapito della fluidità visiva. 'Auto' salta i quadri quando consigliato dal front end. 'Manuale' utilizza l'impostazione 'Soglia del salto di fotogrammi (%)'."
#define OPTION_VAL_AUTO_IT NULL
#define OPTION_VAL_MANUAL_IT "Manuale"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_IT "Soglia salto fotogrammi (%)"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_IT "Quando 'Sakta fotogramma' è impostato a 'Manuale', specifica la soglia di occupazione del buffer audio (percentuale) al di sotto della quale i quadri verranno saltati. Valori più elevati riducono il rischio di rompere causando un calo più frequente dei fotogrammi."
#define FBA2012CPS1_DIAGNOSTICS_LABEL_IT "Ingresso Diagnostico"
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_IT "Attiva/Disattiva quindi riprendi il contenuto per aprire il menu di servizio."

struct retro_core_option_v2_category option_cats_it[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_it[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_IT,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_IT,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_IT,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_IT,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_IT,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_IT,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_IT },
         { "PAR", OPTION_VAL_PAR_IT },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_IT,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_IT,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_IT,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_IT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_IT,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_IT,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_IT,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_IT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_IT },
         { "manual",   OPTION_VAL_MANUAL_IT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_IT,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_IT,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_IT,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_IT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_it = {
   option_cats_it,
   option_defs_it
};

/* RETRO_LANGUAGE_JA */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_JA NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_JA "エミュレートされたCPUのオーバークロックを有効にします. 速度低下を減らせますが, 不具合を引き起こす可能性があります."
#define FBA2012CPS1_HISCORES_LABEL_JA NULL
#define FBA2012CPS1_HISCORES_INFO_0_JA NULL
#define FBA2012CPS1_ASPECT_LABEL_JA "コア提供アスペクト比"
#define FBA2012CPS1_ASPECT_INFO_0_JA NULL
#define OPTION_VAL_DAR_JA NULL
#define OPTION_VAL_PAR_JA NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_JA NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_JA NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_JA "オーディオフィルタ"
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_JA NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_JA NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_JA NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_JA NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_JA NULL
#define OPTION_VAL_AUTO_JA "自動"
#define OPTION_VAL_MANUAL_JA "手動"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_JA NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_JA "'フレームスキップ' が '手動' に設定されている場合, フレームがスキップされるオーディオバッファ占有しきい値 (%) を指定します. 値を大きくすると, フレームを頻繁に落とすことでクラッキングが発生するリスクが低下します."
#define FBA2012CPS1_DIAGNOSTICS_LABEL_JA NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_JA NULL

struct retro_core_option_v2_category option_cats_ja[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ja[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_JA,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_JA,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_JA,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_JA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_JA,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_JA,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_JA },
         { "PAR", OPTION_VAL_PAR_JA },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_JA,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_JA,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_JA,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_JA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_JA,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_JA,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_JA,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_JA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_JA },
         { "manual",   OPTION_VAL_MANUAL_JA },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_JA,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_JA,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_JA,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_JA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ja = {
   option_cats_ja,
   option_defs_ja
};

/* RETRO_LANGUAGE_KO */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_KO "CPU 속도 (%)"
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_KO "에뮬되는 CPU를 오버클럭합니다. 느려짐 현상을 줄일 수 있지만 버그가 생길 수 있습니다."
#define FBA2012CPS1_HISCORES_LABEL_KO "최고 기록"
#define FBA2012CPS1_HISCORES_INFO_0_KO "지원되는 게임에서 최고 기록 저장을 활성화합니다. system/fbalpha2012 폴더 안에 'hiscore.dat' 파일이 존재해야 합니다."
#define FBA2012CPS1_ASPECT_LABEL_KO "코어 제공 화면비"
#define FBA2012CPS1_ASPECT_INFO_0_KO "선호하는 컨텐츠 화면비를 선택합니다. RetroArch의 비디오 설정에서 화면비가 'Core provided'로 설정되어 있어야 적용됩니다."
#define OPTION_VAL_DAR_KO NULL
#define OPTION_VAL_PAR_KO NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_KO "세로 방향 게임 회전 (재시작 필요)"
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_KO "세로 방향의 게임을 실행할 때 화면을 자동으로 회전합니다. 비활성화할 경우, D-패드 입력이 화면 방향에 맞게 회전됩니다."
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_KO "오디오 필터"
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_KO "로우패스 오디오 필터를 적용하여 일부 아케이드 게임의 '거친' 소리를 부드럽게 변환합니다."
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_KO "오디오 필터 수준 (%)"
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_KO "로우패스 오디오 필터의 컷오프 주파수를 지정합니다. 높은 값은 더 넓은 범위의 고주파음을 차단하여 필터의 '강도'를 높입니다."
#define FBA2012CPS1_FRAMESKIP_LABEL_KO "프레임 스킵"
#define FBA2012CPS1_FRAMESKIP_INFO_0_KO "오디오 버퍼 언더런(소리깨짐) 을 줄이기 위해 프레임 건너뛰기를 합니다. 시각적인 부드러움을 포기하는 대신 성능이 향상됩니다. '자동'은 프론트엔드의 추천값으로 실행되고 '사용자 설정'은 '프레임 스킵 임계값(%)' 설정을 이용해 실행됩니다."
#define OPTION_VAL_AUTO_KO "자동"
#define OPTION_VAL_MANUAL_KO "사용자 설정"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_KO "프레임 스킵 임계값 (%)"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_KO "'프레임 건너뛰기'가 '사용자 설정'일 경우 건너뛸 프레임에 대한 오디오 버퍼 점유 임계점 (퍼센트) 을 설정하게됩니다. 값이 높을 수록 프레임은 떨어지고 그 대신 소리 깨짐 현상은 줄어들게 됩니다."
#define FBA2012CPS1_DIAGNOSTICS_LABEL_KO "진단 입력"
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_KO "이 설정을 켜고 컨텐츠로 돌아가면 서비스 메뉴가 열립니다."

struct retro_core_option_v2_category option_cats_ko[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ko[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_KO,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_KO,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_KO,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_KO,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_KO,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_KO,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_KO },
         { "PAR", OPTION_VAL_PAR_KO },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_KO,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_KO,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_KO,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_KO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_KO,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_KO,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_KO,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_KO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_KO },
         { "manual",   OPTION_VAL_MANUAL_KO },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_KO,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_KO,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_KO,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_KO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ko = {
   option_cats_ko,
   option_defs_ko
};

/* RETRO_LANGUAGE_MT */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_MT NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_MT NULL
#define FBA2012CPS1_HISCORES_LABEL_MT NULL
#define FBA2012CPS1_HISCORES_INFO_0_MT NULL
#define FBA2012CPS1_ASPECT_LABEL_MT NULL
#define FBA2012CPS1_ASPECT_INFO_0_MT NULL
#define OPTION_VAL_DAR_MT NULL
#define OPTION_VAL_PAR_MT NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_MT NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_MT NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_MT NULL
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_MT NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_MT NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_MT NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_MT NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_MT NULL
#define OPTION_VAL_AUTO_MT NULL
#define OPTION_VAL_MANUAL_MT NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_MT NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_MT NULL
#define FBA2012CPS1_DIAGNOSTICS_LABEL_MT NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_MT NULL

struct retro_core_option_v2_category option_cats_mt[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_mt[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_MT,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_MT,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_MT,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_MT,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_MT,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_MT,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_MT },
         { "PAR", OPTION_VAL_PAR_MT },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_MT,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_MT,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_MT,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_MT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_MT,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_MT,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_MT,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_MT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_MT },
         { "manual",   OPTION_VAL_MANUAL_MT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_MT,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_MT,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_MT,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_MT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_mt = {
   option_cats_mt,
   option_defs_mt
};

/* RETRO_LANGUAGE_NL */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_NL NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_NL NULL
#define FBA2012CPS1_HISCORES_LABEL_NL NULL
#define FBA2012CPS1_HISCORES_INFO_0_NL NULL
#define FBA2012CPS1_ASPECT_LABEL_NL NULL
#define FBA2012CPS1_ASPECT_INFO_0_NL NULL
#define OPTION_VAL_DAR_NL NULL
#define OPTION_VAL_PAR_NL NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_NL NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_NL NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_NL NULL
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_NL NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_NL NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_NL NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_NL NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_NL NULL
#define OPTION_VAL_AUTO_NL "Automatisch"
#define OPTION_VAL_MANUAL_NL NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_NL NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_NL NULL
#define FBA2012CPS1_DIAGNOSTICS_LABEL_NL NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_NL NULL

struct retro_core_option_v2_category option_cats_nl[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_nl[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_NL,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_NL,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_NL,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_NL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_NL,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_NL,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_NL },
         { "PAR", OPTION_VAL_PAR_NL },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_NL,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_NL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_NL,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_NL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_NL,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_NL,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_NL,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_NL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_NL },
         { "manual",   OPTION_VAL_MANUAL_NL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_NL,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_NL,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_NL,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_NL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_nl = {
   option_cats_nl,
   option_defs_nl
};

/* RETRO_LANGUAGE_OC */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_OC NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_OC NULL
#define FBA2012CPS1_HISCORES_LABEL_OC NULL
#define FBA2012CPS1_HISCORES_INFO_0_OC NULL
#define FBA2012CPS1_ASPECT_LABEL_OC NULL
#define FBA2012CPS1_ASPECT_INFO_0_OC NULL
#define OPTION_VAL_DAR_OC NULL
#define OPTION_VAL_PAR_OC NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_OC NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_OC NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_OC NULL
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_OC NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_OC NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_OC NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_OC NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_OC NULL
#define OPTION_VAL_AUTO_OC NULL
#define OPTION_VAL_MANUAL_OC NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_OC NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_OC NULL
#define FBA2012CPS1_DIAGNOSTICS_LABEL_OC NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_OC NULL

struct retro_core_option_v2_category option_cats_oc[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_oc[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_OC,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_OC,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_OC,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_OC,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_OC,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_OC,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_OC },
         { "PAR", OPTION_VAL_PAR_OC },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_OC,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_OC,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_OC,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_OC,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_OC,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_OC,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_OC,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_OC,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_OC },
         { "manual",   OPTION_VAL_MANUAL_OC },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_OC,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_OC,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_OC,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_OC,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_oc = {
   option_cats_oc,
   option_defs_oc
};

/* RETRO_LANGUAGE_PL */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_PL "Prędkość procesora (%)"
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_PL "Umożliwia przeciążenie emulowanego CPU. Może zmniejszyć spowolnienie, ale może powodować glitche."
#define FBA2012CPS1_HISCORES_LABEL_PL "Najlepsze wyniki"
#define FBA2012CPS1_HISCORES_INFO_0_PL "Umożliwia zapisywanie najlepszych wyników w obsługiwanych grach. Wymaga umieszczenia pliku 'hiscore.dat' w folderze system/fbalpha2012/."
#define FBA2012CPS1_ASPECT_LABEL_PL NULL
#define FBA2012CPS1_ASPECT_INFO_0_PL NULL
#define OPTION_VAL_DAR_PL NULL
#define OPTION_VAL_PAR_PL NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_PL NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_PL "Automatycznie obracaj ekran podczas uruchamiania gier wyrównanych w pionie. Gdy wyłączone, wejście D-Pad zostanie obrócone, aby pasowało do kierunku ekranu."
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_PL "Filtr audio"
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_PL NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_PL NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_PL NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_PL "Pomijanie klatek"
#define FBA2012CPS1_FRAMESKIP_INFO_0_PL NULL
#define OPTION_VAL_AUTO_PL NULL
#define OPTION_VAL_MANUAL_PL "Ręczny"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_PL "Próg pominięcia ramki (%)"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_PL "Gdy 'Frameskip' jest ustawiony na 'Manual', określa próg zajęcia bufora audio (procent) poniżej którego ramki zostaną pominięte. Wyższe wartości zmniejszają ryzyko trzasków poprzez częstsze opuszczanie ramek."
#define FBA2012CPS1_DIAGNOSTICS_LABEL_PL NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_PL "Włącz, a następnie wznów zawartość aby otworzyć menu usługi."

struct retro_core_option_v2_category option_cats_pl[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pl[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_PL,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_PL,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_PL,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_PL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_PL,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_PL,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_PL },
         { "PAR", OPTION_VAL_PAR_PL },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_PL,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_PL,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_PL,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_PL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_PL,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_PL,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_PL,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_PL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_PL },
         { "manual",   OPTION_VAL_MANUAL_PL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_PL,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_PL,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_PL,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_PL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pl = {
   option_cats_pl,
   option_defs_pl
};

/* RETRO_LANGUAGE_PT_BR */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_PT_BR "Velocidade da CPU (%)"
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_PT_BR "Habilita o overclock da CPU emulada. Pode reduzir a lentidão, mas pode causar falhas."
#define FBA2012CPS1_HISCORES_LABEL_PT_BR "Recordes"
#define FBA2012CPS1_HISCORES_INFO_0_PT_BR "Salva os recordes com as melhores pontuações nos jogos que suportam esta função. É necessário ter o arquivo \"hiscore.dat\" na pasta system/fbalpha2012/."
#define FBA2012CPS1_ASPECT_LABEL_PT_BR "Proporção de tela fornecida pelo núcleo"
#define FBA2012CPS1_ASPECT_INFO_0_PT_BR "Seleciona a proporção da tela preferida do conteúdo. Isso se aplicará somente quando a proporção do RetroArch estiver configurada como 'Fornecida pelo núcleo' nas configurações de vídeo."
#define OPTION_VAL_DAR_PT_BR "DAR (Relação de aspecto da tela)"
#define OPTION_VAL_PAR_PT_BR "PAR (Relação de aspecto do pixel)"
#define FBA2012CPS1_AUTO_ROTATE_LABEL_PT_BR "Girar os jogos com com alinhamento vertical (requer reinício)"
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_PT_BR "Gira automaticamente a imagem ao executar jogos com um alinhamento vertical. Quando esta opção for desativada, a entrada do direcional digital irá girar para combinar com as direções exibidas na tela."
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_PT_BR "Filtro de áudio"
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_PT_BR "Aplica um filtro passa-baixo ao áudio para suavizar a estridência do som de certos jogos arcade."
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_PT_BR "Nível do filtro de áudio (%)"
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_PT_BR "Especifica o corte de frequência no filtro de áudio passa-baixo. Um alto valor aumentará a força percebida do filtro, pois mais do espectro de alta frequência será atenuado."
#define FBA2012CPS1_FRAMESKIP_LABEL_PT_BR "Pulo de quadro"
#define FBA2012CPS1_FRAMESKIP_INFO_0_PT_BR "Ignora quadros para evitar o esvaziamento do buffer do áudio (cortes no áudio). Melhora o desempenho ao custo da suavidade visual. A opção 'Automático' ignora os quadros quando for aconselhado pela interface. Já 'Manual' utiliza a configuração 'Limite do salto de quadros (%)'."
#define OPTION_VAL_AUTO_PT_BR "Automática"
#define OPTION_VAL_MANUAL_PT_BR NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_PT_BR "Limite de pulo de quadro (%)"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_PT_BR "Quando 'Pulo de quadro' é definido como 'Manual', especifica o limite de ocupação do buffer de áudio (porcentagem) abaixo do qual os quadros serão ignorados. Valores mais altos reduzem o risco de engasgos pois farão que os quadros sejam descartados com mais frequência."
#define FBA2012CPS1_DIAGNOSTICS_LABEL_PT_BR "Entrada de diagnóstico"
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_PT_BR "Alterne LIGAR para retomar o conteúdo para abrir o menu de serviços."

struct retro_core_option_v2_category option_cats_pt_br[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_br[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_PT_BR,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_PT_BR,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_PT_BR,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_PT_BR },
         { "PAR", OPTION_VAL_PAR_PT_BR },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_PT_BR,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_PT_BR,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_PT_BR,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_PT_BR,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_PT_BR },
         { "manual",   OPTION_VAL_MANUAL_PT_BR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_PT_BR,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_PT_BR,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_br = {
   option_cats_pt_br,
   option_defs_pt_br
};

/* RETRO_LANGUAGE_PT_PT */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_PT_PT NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_PT_PT NULL
#define FBA2012CPS1_HISCORES_LABEL_PT_PT NULL
#define FBA2012CPS1_HISCORES_INFO_0_PT_PT NULL
#define FBA2012CPS1_ASPECT_LABEL_PT_PT NULL
#define FBA2012CPS1_ASPECT_INFO_0_PT_PT NULL
#define OPTION_VAL_DAR_PT_PT NULL
#define OPTION_VAL_PAR_PT_PT NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_PT_PT NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_PT_PT NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_PT_PT "Filtro de som"
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_PT_PT NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_PT_PT NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_PT_PT NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_PT_PT NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_PT_PT NULL
#define OPTION_VAL_AUTO_PT_PT NULL
#define OPTION_VAL_MANUAL_PT_PT NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_PT_PT NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_PT_PT NULL
#define FBA2012CPS1_DIAGNOSTICS_LABEL_PT_PT NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_PT_PT NULL

struct retro_core_option_v2_category option_cats_pt_pt[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_pt[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_PT_PT,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_PT_PT,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_PT_PT,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_PT_PT },
         { "PAR", OPTION_VAL_PAR_PT_PT },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_PT_PT,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_PT_PT,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_PT_PT,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_PT_PT,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_PT_PT },
         { "manual",   OPTION_VAL_MANUAL_PT_PT },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_PT_PT,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_PT_PT,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_pt = {
   option_cats_pt_pt,
   option_defs_pt_pt
};

/* RETRO_LANGUAGE_RO */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_RO NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_RO NULL
#define FBA2012CPS1_HISCORES_LABEL_RO NULL
#define FBA2012CPS1_HISCORES_INFO_0_RO NULL
#define FBA2012CPS1_ASPECT_LABEL_RO NULL
#define FBA2012CPS1_ASPECT_INFO_0_RO NULL
#define OPTION_VAL_DAR_RO NULL
#define OPTION_VAL_PAR_RO NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_RO NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_RO NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_RO NULL
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_RO NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_RO NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_RO NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_RO NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_RO NULL
#define OPTION_VAL_AUTO_RO NULL
#define OPTION_VAL_MANUAL_RO NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_RO NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_RO NULL
#define FBA2012CPS1_DIAGNOSTICS_LABEL_RO NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_RO NULL

struct retro_core_option_v2_category option_cats_ro[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ro[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_RO,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_RO,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_RO,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_RO,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_RO,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_RO,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_RO },
         { "PAR", OPTION_VAL_PAR_RO },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_RO,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_RO,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_RO,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_RO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_RO,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_RO,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_RO,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_RO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_RO },
         { "manual",   OPTION_VAL_MANUAL_RO },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_RO,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_RO,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_RO,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_RO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ro = {
   option_cats_ro,
   option_defs_ro
};

/* RETRO_LANGUAGE_RU */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_RU "Скорость CPU (%)"
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_RU "Включает разгон эмулируемого CPU. Может устранять подтормаживания, но приводить к ошибкам."
#define FBA2012CPS1_HISCORES_LABEL_RU "Рекорды"
#define FBA2012CPS1_HISCORES_INFO_0_RU "Включает сохранение рекордов в играх. Требуется наличие файла 'hiscore.dat' в каталоге system/fbalpha2012/."
#define FBA2012CPS1_ASPECT_LABEL_RU "Соотношение сторон ядра"
#define FBA2012CPS1_ASPECT_INFO_0_RU "Выбор предпочтительного соотношения сторон. Учитывается только при установке соотношения сторон RetroArch на 'Core Provided' в настройках видео."
#define OPTION_VAL_DAR_RU NULL
#define OPTION_VAL_PAR_RU NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_RU "Поворот игр в верт. ориентации (перезапуск)"
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_RU "Автоматически поворачивать экран при запуске вертикально ориентированных игр. При отключении, нажатия D-Pad будут развёрнуты для соответствия направлениям на экране."
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_RU "Аудиофильтр"
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_RU "Включает фильтр нижних частот для смягчения звука некоторых аркадных игр."
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_RU "Уровень аудиофильтра (%)"
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_RU "Настройка частоты среза для низкочастотного фильтра. Большие значения усиливают эффект от фильтра за счёт влияния на более широкий спектр высоких частот."
#define FBA2012CPS1_FRAMESKIP_LABEL_RU "Пропуск кадров"
#define FBA2012CPS1_FRAMESKIP_INFO_0_RU "Пропускать кадры, чтобы избежать опустошения аудиобуфера (треск). Улучшает производительность, но снижает плавность изображения. В режиме 'Авто' пропуск кадров регулируется фронтендом. В режиме 'Вручную' используется настройка 'Граница пропуска кадров (%)'."
#define OPTION_VAL_AUTO_RU "Авто"
#define OPTION_VAL_MANUAL_RU "Вручную"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_RU "Граница пропуска кадров (%)"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_RU "Устанавливает порог заполнения аудиобуфера (в процентах), ниже которого будет включаться пропуск кадров, если для параметра 'Пропуск кадров' выбран режим 'Вручную'. Большие значения снижают вероятность появления треска за счёт более частого пропуска кадров."
#define FBA2012CPS1_DIAGNOSTICS_LABEL_RU "Сервисное меню"
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_RU "Включите настройку и возобновите игру для входа в сервисное меню."

struct retro_core_option_v2_category option_cats_ru[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ru[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_RU,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_RU,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_RU,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_RU,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_RU,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_RU,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_RU },
         { "PAR", OPTION_VAL_PAR_RU },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_RU,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_RU,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_RU,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_RU,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_RU,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_RU,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_RU,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_RU,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_RU },
         { "manual",   OPTION_VAL_MANUAL_RU },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_RU,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_RU,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_RU,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_RU,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ru = {
   option_cats_ru,
   option_defs_ru
};

/* RETRO_LANGUAGE_SI */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_SI NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_SI NULL
#define FBA2012CPS1_HISCORES_LABEL_SI NULL
#define FBA2012CPS1_HISCORES_INFO_0_SI NULL
#define FBA2012CPS1_ASPECT_LABEL_SI NULL
#define FBA2012CPS1_ASPECT_INFO_0_SI NULL
#define OPTION_VAL_DAR_SI NULL
#define OPTION_VAL_PAR_SI NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_SI NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_SI NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_SI NULL
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_SI NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_SI NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_SI NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_SI NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_SI NULL
#define OPTION_VAL_AUTO_SI NULL
#define OPTION_VAL_MANUAL_SI NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_SI NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_SI NULL
#define FBA2012CPS1_DIAGNOSTICS_LABEL_SI NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_SI NULL

struct retro_core_option_v2_category option_cats_si[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_si[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_SI,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_SI,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_SI,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_SI,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_SI,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_SI,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_SI },
         { "PAR", OPTION_VAL_PAR_SI },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_SI,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_SI,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_SI,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_SI,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_SI,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_SI,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_SI,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_SI,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_SI },
         { "manual",   OPTION_VAL_MANUAL_SI },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_SI,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_SI,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_SI,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_SI,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_si = {
   option_cats_si,
   option_defs_si
};

/* RETRO_LANGUAGE_SK */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_SK NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_SK "Umožniť pretaktovanie emulovaného CPU. Môže znížiť spomalenia, ale môže spôsobiť vady."
#define FBA2012CPS1_HISCORES_LABEL_SK NULL
#define FBA2012CPS1_HISCORES_INFO_0_SK NULL
#define FBA2012CPS1_ASPECT_LABEL_SK NULL
#define FBA2012CPS1_ASPECT_INFO_0_SK NULL
#define OPTION_VAL_DAR_SK NULL
#define OPTION_VAL_PAR_SK NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_SK NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_SK NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_SK "Zvukový filter"
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_SK NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_SK NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_SK NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_SK NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_SK NULL
#define OPTION_VAL_AUTO_SK NULL
#define OPTION_VAL_MANUAL_SK NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_SK NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_SK "Ak je 'Preskočenie snímkov' nastavené na 'Ručne', určuje obsadenosť zvukového zásobníka (v percentách) pod ktorou budú snímky preskočené. Vyššie hodnoty znižujú riziko praskania za cenu zahodenia snímkov častejšie."
#define FBA2012CPS1_DIAGNOSTICS_LABEL_SK NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_SK "Na otvorenie servisnej ponuky zvoliť 'ZAP', potom dať pokračovať obsah."

struct retro_core_option_v2_category option_cats_sk[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sk[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_SK,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_SK,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_SK,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_SK,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_SK,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_SK,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_SK },
         { "PAR", OPTION_VAL_PAR_SK },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_SK,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_SK,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_SK,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_SK,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_SK,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_SK,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_SK,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_SK,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_SK },
         { "manual",   OPTION_VAL_MANUAL_SK },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_SK,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_SK,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_SK,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_SK,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sk = {
   option_cats_sk,
   option_defs_sk
};

/* RETRO_LANGUAGE_SR */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_SR NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_SR NULL
#define FBA2012CPS1_HISCORES_LABEL_SR NULL
#define FBA2012CPS1_HISCORES_INFO_0_SR NULL
#define FBA2012CPS1_ASPECT_LABEL_SR NULL
#define FBA2012CPS1_ASPECT_INFO_0_SR NULL
#define OPTION_VAL_DAR_SR NULL
#define OPTION_VAL_PAR_SR NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_SR NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_SR NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_SR NULL
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_SR NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_SR NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_SR NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_SR NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_SR NULL
#define OPTION_VAL_AUTO_SR NULL
#define OPTION_VAL_MANUAL_SR NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_SR NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_SR NULL
#define FBA2012CPS1_DIAGNOSTICS_LABEL_SR NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_SR NULL

struct retro_core_option_v2_category option_cats_sr[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sr[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_SR,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_SR,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_SR,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_SR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_SR,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_SR,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_SR },
         { "PAR", OPTION_VAL_PAR_SR },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_SR,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_SR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_SR,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_SR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_SR,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_SR,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_SR,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_SR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_SR },
         { "manual",   OPTION_VAL_MANUAL_SR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_SR,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_SR,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_SR,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_SR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sr = {
   option_cats_sr,
   option_defs_sr
};

/* RETRO_LANGUAGE_SV */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_SV NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_SV "Aktiverar överklockning av den emulerade CPU: n. Kan minska tröghet, men kan orsaka problem."
#define FBA2012CPS1_HISCORES_LABEL_SV NULL
#define FBA2012CPS1_HISCORES_INFO_0_SV NULL
#define FBA2012CPS1_ASPECT_LABEL_SV NULL
#define FBA2012CPS1_ASPECT_INFO_0_SV NULL
#define OPTION_VAL_DAR_SV NULL
#define OPTION_VAL_PAR_SV NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_SV NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_SV NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_SV NULL
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_SV NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_SV NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_SV NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_SV NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_SV NULL
#define OPTION_VAL_AUTO_SV "Automatiskt"
#define OPTION_VAL_MANUAL_SV NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_SV NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_SV "När 'Frameskip' är satt till 'Manuell', ange ljudbuffertens tröskel (i procent) under vilka ramar som kommer att hoppas över. Högre värden minskar risken för hackigt ljud genom att bildrutor tappas oftare."
#define FBA2012CPS1_DIAGNOSTICS_LABEL_SV NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_SV "Växla PÅ och fortsätt sedan innehållet för att öppna servicemenyn."

struct retro_core_option_v2_category option_cats_sv[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sv[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_SV,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_SV,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_SV,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_SV,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_SV,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_SV,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_SV },
         { "PAR", OPTION_VAL_PAR_SV },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_SV,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_SV,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_SV,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_SV,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_SV,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_SV,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_SV,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_SV,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_SV },
         { "manual",   OPTION_VAL_MANUAL_SV },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_SV,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_SV,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_SV,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_SV,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sv = {
   option_cats_sv,
   option_defs_sv
};

/* RETRO_LANGUAGE_TR */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_TR "CPU Hızı (%)"
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_TR "Taklit edilmiş CPU hız aşırtması. Yavaşlamayı azaltabilir, ancak hatalara neden olabilir."
#define FBA2012CPS1_HISCORES_LABEL_TR "Yüksek puanlar"
#define FBA2012CPS1_HISCORES_INFO_0_TR "Desteklenen oyunlarda yüksek puanların kaydedilmesini sağlar. 'hiscore.dat' dosyasının system/fbalpha2012/ klasörünüze yerleştirilmesini gerektirir."
#define FBA2012CPS1_ASPECT_LABEL_TR "Çekirdek Tarafından Sağlanan En Boy Oranı"
#define FBA2012CPS1_ASPECT_INFO_0_TR "Tercih edilen içerik en boy oranını seçin. Bu, yalnızca RetroArch en boy oranı Video ayarlarında 'Çekirdek Tarafından Sağlanan' olarak ayarlandığında uygulanacaktır."
#define OPTION_VAL_DAR_TR NULL
#define OPTION_VAL_PAR_TR NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_TR "Dikey Olarak Hizalanmış Oyunları Döndür (Yeniden Başlatılmalı)"
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_TR "Dikey olarak hizalanmış oyunları çalıştırırken ekranı otomatik olarak döndürün. Devre dışı bırakıldığında, D-Pad girişi ekrandaki yönlere uyacak şekilde döndürülecektir."
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_TR "Ses Filtresi"
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_TR "Bazı atari oyunlarının 'sert' sesini yumuşatmak için düşük geçişli bir ses filtresi sağlar."
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_TR "Ses Filtresi Seviyesi (%)"
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_TR "Düşük ses geçiş filtresinin kesme frekansını belirtin. Daha yüksek bir değer, yüksek frekans spektrumunun daha geniş bir aralığı azaltıldığı için filtrenin algılanan gücünü arttırır."
#define FBA2012CPS1_FRAMESKIP_LABEL_TR "Kare Atlama"
#define FBA2012CPS1_FRAMESKIP_INFO_0_TR "Ses ara belleğinin yetersiz çalışmasını (çatırtı) önlemek için kareleri atlayın. Görsel pürüzsüzlük pahasına performansı artırır. 'Otomatik', ön uç tarafından önerildiğinde çerçeveleri atlar. 'El ile', 'Kare Atlama Eşiği (%)' ayarını kullanır."
#define OPTION_VAL_AUTO_TR "Otomatik"
#define OPTION_VAL_MANUAL_TR "El İle"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_TR "Kare Atlama Eşiği (%)"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_TR "'Kare atlama', 'El ile' ayarlandığında, altındaki karelerin atlanacağı ses arabelleği doluluk eşiğini (yüzde) belirtir. Daha yüksek değerler, karelerin daha sık çökmesine neden olarak bozulma riskini azaltır."
#define FBA2012CPS1_DIAGNOSTICS_LABEL_TR "Teşhis Girişi"
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_TR "Servis menüsünü açmak için AÇIK duruma getirin ve içeriği devam ettirin."

struct retro_core_option_v2_category option_cats_tr[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_tr[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_TR,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_TR,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_TR,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_TR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_TR,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_TR,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_TR },
         { "PAR", OPTION_VAL_PAR_TR },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_TR,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_TR,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_TR,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_TR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_TR,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_TR,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_TR,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_TR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_TR },
         { "manual",   OPTION_VAL_MANUAL_TR },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_TR,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_TR,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_TR,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_TR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_tr = {
   option_cats_tr,
   option_defs_tr
};

/* RETRO_LANGUAGE_UK */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_UK "Швидкість ЦП (%)"
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_UK "Вмикає розгін емульованого процесора. Дозволяє усунути сповільнення, але може спричинити збої."
#define FBA2012CPS1_HISCORES_LABEL_UK NULL
#define FBA2012CPS1_HISCORES_INFO_0_UK "Вмикає збереження рекордів в іграх, які це підтримують. Потрібна наявність файлу ''hiscore.dat' у каталозі 'system/fbalpha2012/'"
#define FBA2012CPS1_ASPECT_LABEL_UK "Співвідношення сторін з ядра"
#define FBA2012CPS1_ASPECT_INFO_0_UK NULL
#define OPTION_VAL_DAR_UK NULL
#define OPTION_VAL_PAR_UK NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_UK NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_UK NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_UK "Аудіофільтр"
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_UK NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_UK NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_UK NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_UK NULL
#define FBA2012CPS1_FRAMESKIP_INFO_0_UK "Пропускати кадри, щоб уникнути спустошення буферу (тріскіт). Покращує швидкодію, погіршуючи плавність зображення. 'Авто' пропускає кадри, керуючись командами зовнішньої оболонки. 'Ручний' використовує налаштування 'Межа пропуску кадрів (%)'."
#define OPTION_VAL_AUTO_UK "Авто"
#define OPTION_VAL_MANUAL_UK "Ручний"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_UK "Межа пропуску кадрів (%)"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_UK "Якщо 'Пропус кадрів' встановлено у 'Вручну', зазначає граничне значення оточення аудіо-буферу (відсоток), нижчі за які кадри будуть пропущені. Більш високі значення зменшують ризик зломування, викликаючи зменшення кадрів частіше."
#define FBA2012CPS1_DIAGNOSTICS_LABEL_UK NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_UK "Увімкніть, а потім відновіть вміст, щоб відкрити сервісне меню."

struct retro_core_option_v2_category option_cats_uk[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_uk[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_UK,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_UK,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_UK,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_UK,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_UK,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_UK,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_UK },
         { "PAR", OPTION_VAL_PAR_UK },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_UK,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_UK,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_UK,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_UK,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_UK,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_UK,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_UK,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_UK,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_UK },
         { "manual",   OPTION_VAL_MANUAL_UK },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_UK,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_UK,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_UK,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_UK,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_uk = {
   option_cats_uk,
   option_defs_uk
};

/* RETRO_LANGUAGE_VN */

#define FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_VN NULL
#define FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_VN "Cho phép ép xung CPU mô phỏng. Có thể nhanh hơn nhưng dễ gây ra trục trặc."
#define FBA2012CPS1_HISCORES_LABEL_VN NULL
#define FBA2012CPS1_HISCORES_INFO_0_VN NULL
#define FBA2012CPS1_ASPECT_LABEL_VN NULL
#define FBA2012CPS1_ASPECT_INFO_0_VN NULL
#define OPTION_VAL_DAR_VN NULL
#define OPTION_VAL_PAR_VN NULL
#define FBA2012CPS1_AUTO_ROTATE_LABEL_VN NULL
#define FBA2012CPS1_AUTO_ROTATE_INFO_0_VN NULL
#define FBA2012CPS1_LOWPASS_FILTER_LABEL_VN "Âm thanh Filter Danh mục"
#define FBA2012CPS1_LOWPASS_FILTER_INFO_0_VN NULL
#define FBA2012CPS1_LOWPASS_RANGE_LABEL_VN NULL
#define FBA2012CPS1_LOWPASS_RANGE_INFO_0_VN NULL
#define FBA2012CPS1_FRAMESKIP_LABEL_VN "Bỏ qua khung hình"
#define FBA2012CPS1_FRAMESKIP_INFO_0_VN NULL
#define OPTION_VAL_AUTO_VN "Tự động"
#define OPTION_VAL_MANUAL_VN "Thủ công"
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_VN NULL
#define FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_VN NULL
#define FBA2012CPS1_DIAGNOSTICS_LABEL_VN NULL
#define FBA2012CPS1_DIAGNOSTICS_INFO_0_VN NULL

struct retro_core_option_v2_category option_cats_vn[] = {
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_vn[] = {
   {
      "fba2012cps1_cpu_speed_adjust",
      FBA2012CPS1_CPU_SPEED_ADJUST_LABEL_VN,
      NULL,
      FBA2012CPS1_CPU_SPEED_ADJUST_INFO_0_VN,
      NULL,
      NULL,
      {
         { "100", NULL },
         { "110", NULL },
         { "120", NULL },
         { "130", NULL },
         { "140", NULL },
         { "150", NULL },
         { "160", NULL },
         { "170", NULL },
         { "180", NULL },
         { "190", NULL },
         { "200", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "fba2012cps1_hiscores",
      FBA2012CPS1_HISCORES_LABEL_VN,
      NULL,
      FBA2012CPS1_HISCORES_INFO_0_VN,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_aspect",
      FBA2012CPS1_ASPECT_LABEL_VN,
      NULL,
      FBA2012CPS1_ASPECT_INFO_0_VN,
      NULL,
      NULL,
      {
         { "DAR", OPTION_VAL_DAR_VN },
         { "PAR", OPTION_VAL_PAR_VN },
         { NULL, NULL },
      },
      "DAR"
   },
   {
      "fba2012cps1_auto_rotate",
      FBA2012CPS1_AUTO_ROTATE_LABEL_VN,
      NULL,
      FBA2012CPS1_AUTO_ROTATE_INFO_0_VN,
      NULL,
      NULL,
      {
         { "enabled",  NULL },
         { "disabled", NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "fba2012cps1_lowpass_filter",
      FBA2012CPS1_LOWPASS_FILTER_LABEL_VN,
      NULL,
      FBA2012CPS1_LOWPASS_FILTER_INFO_0_VN,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_lowpass_range",
      FBA2012CPS1_LOWPASS_RANGE_LABEL_VN,
      NULL,
      FBA2012CPS1_LOWPASS_RANGE_INFO_0_VN,
      NULL,
      NULL,
      {
         { "5",  NULL },
         { "10", NULL },
         { "15", NULL },
         { "20", NULL },
         { "25", NULL },
         { "30", NULL },
         { "35", NULL },
         { "40", NULL },
         { "45", NULL },
         { "50", NULL },
         { "55", NULL },
         { "60", NULL },
         { "65", NULL },
         { "70", NULL },
         { "75", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { NULL, NULL },
      },
      "60"
   },
   {
      "fba2012cps1_frameskip",
      FBA2012CPS1_FRAMESKIP_LABEL_VN,
      NULL,
      FBA2012CPS1_FRAMESKIP_INFO_0_VN,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "auto",     OPTION_VAL_AUTO_VN },
         { "manual",   OPTION_VAL_MANUAL_VN },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "fba2012cps1_frameskip_threshold",
      FBA2012CPS1_FRAMESKIP_THRESHOLD_LABEL_VN,
      NULL,
      FBA2012CPS1_FRAMESKIP_THRESHOLD_INFO_0_VN,
      NULL,
      NULL,
      {
         { "15", NULL },
         { "18", NULL },
         { "21", NULL },
         { "24", NULL },
         { "27", NULL },
         { "30", NULL },
         { "33", NULL },
         { "36", NULL },
         { "39", NULL },
         { "42", NULL },
         { "45", NULL },
         { "48", NULL },
         { "51", NULL },
         { "54", NULL },
         { "57", NULL },
         { "60", NULL },
         { NULL, NULL },
      },
      "33"
   },
   {
      "fba2012cps1_diagnostics",
      FBA2012CPS1_DIAGNOSTICS_LABEL_VN,
      NULL,
      FBA2012CPS1_DIAGNOSTICS_INFO_0_VN,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_vn = {
   option_cats_vn,
   option_defs_vn
};


#ifdef __cplusplus
}
#endif

#endif