#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 243
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 10
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 20

enum ts_symbol_identifiers {
  sym_package = 1,
  aux_sym_file_token1 = 2,
  aux_sym_file_token2 = 3,
  anon_sym_LBRACK = 4,
  anon_sym_COMMA = 5,
  anon_sym_RBRACK = 6,
  anon_sym_AT = 7,
  aux_sym_url_token1 = 8,
  aux_sym_url_token2 = 9,
  aux_sym_url_token3 = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  sym_version = 13,
  sym_version_cmp = 14,
  anon_sym_SEMI = 15,
  anon_sym_in = 16,
  anon_sym_not = 17,
  anon_sym_python_version = 18,
  anon_sym_python_full_version = 19,
  anon_sym_os_name = 20,
  anon_sym_sys_platform = 21,
  anon_sym_platform_release = 22,
  anon_sym_platform_system = 23,
  anon_sym_platform_version = 24,
  anon_sym_platform_machine = 25,
  anon_sym_platform_python_implementation = 26,
  anon_sym_implementation_name = 27,
  anon_sym_implementation_version = 28,
  anon_sym_extra = 29,
  anon_sym_and = 30,
  anon_sym_or = 31,
  anon_sym_DASH_DASHno_DASHbinary = 32,
  anon_sym_DASH_DASHonly_DASHbinary = 33,
  anon_sym_DASH_DASHtrusted_DASHhost = 34,
  anon_sym_DASH_DASHuse_DASHfeature = 35,
  anon_sym_EQ = 36,
  anon_sym_DASH_DASHno_DASHindex = 37,
  anon_sym_DASH_DASHprefer_DASHbinary = 38,
  anon_sym_DASH_DASHrequire_DASHhashes = 39,
  anon_sym_DASH_DASHpre = 40,
  anon_sym_DASHi = 41,
  anon_sym_DASH_DASHindex_DASHurl = 42,
  anon_sym_DASH_DASHextra_DASHindex_DASHurl = 43,
  anon_sym_DASHc = 44,
  anon_sym_DASHr = 45,
  anon_sym_DASH_DASHconstraint = 46,
  anon_sym_DASH_DASHrequirement = 47,
  anon_sym_DASHe = 48,
  anon_sym_DASHf = 49,
  anon_sym_DASH_DASHeditable = 50,
  anon_sym_DASH_DASHfind_DASHlinks = 51,
  anon_sym_DASH_DASHglobal_DASHoption = 52,
  anon_sym_DASH_DASHconfig_DASHsettings = 53,
  anon_sym_DASH_DASHhash = 54,
  aux_sym_argument_token1 = 55,
  anon_sym_DQUOTE = 56,
  aux_sym_quoted_string_token1 = 57,
  anon_sym_SQUOTE = 58,
  aux_sym_quoted_string_token2 = 59,
  anon_sym_DOLLAR_LBRACE = 60,
  aux_sym_env_var_token1 = 61,
  anon_sym_RBRACE = 62,
  anon_sym_BSLASH = 63,
  sym_comment = 64,
  aux_sym_space_token1 = 65,
  sym_file = 66,
  sym_requirement = 67,
  sym_extras = 68,
  sym_url_spec = 69,
  sym_url = 70,
  sym_version_spec = 71,
  sym_version_list = 72,
  sym_marker_spec = 73,
  sym_marker_op = 74,
  sym_marker_var = 75,
  sym_marker = 76,
  sym_marker_expr = 77,
  sym_marker_paren = 78,
  sym_marker_and = 79,
  sym_marker_or = 80,
  sym_global_opt = 81,
  sym_requirement_opt = 82,
  sym_argument = 83,
  sym_quoted_string = 84,
  sym_env_var = 85,
  sym_linebreak = 86,
  sym_space = 87,
  aux_sym_file_repeat1 = 88,
  aux_sym_requirement_repeat1 = 89,
  aux_sym_extras_repeat1 = 90,
  aux_sym_url_repeat1 = 91,
  aux_sym_version_list_repeat1 = 92,
  aux_sym_argument_repeat1 = 93,
  aux_sym_space_repeat1 = 94,
  alias_sym_pat_09700b0 = 95,
  alias_sym_pat_1a808a5 = 96,
  alias_sym_pat_3965d2a = 97,
  alias_sym_pat_509ec78 = 98,
  alias_sym_pat_5d0eb07 = 99,
  alias_sym_pat_7ef074c = 100,
  alias_sym_pat_8166075 = 101,
  alias_sym_pat_90320f7 = 102,
  alias_sym_pat_a742575 = 103,
  alias_sym_pat_d0b6c52 = 104,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_package] = "package",
  [aux_sym_file_token1] = "file_token1",
  [aux_sym_file_token2] = "file_token2",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [aux_sym_url_token1] = "url_token1",
  [aux_sym_url_token2] = "url_token2",
  [aux_sym_url_token3] = "url_token3",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_version] = "version",
  [sym_version_cmp] = "version_cmp",
  [anon_sym_SEMI] = ";",
  [anon_sym_in] = "in",
  [anon_sym_not] = "not",
  [anon_sym_python_version] = "python_version",
  [anon_sym_python_full_version] = "python_full_version",
  [anon_sym_os_name] = "os_name",
  [anon_sym_sys_platform] = "sys_platform",
  [anon_sym_platform_release] = "platform_release",
  [anon_sym_platform_system] = "platform_system",
  [anon_sym_platform_version] = "platform_version",
  [anon_sym_platform_machine] = "platform_machine",
  [anon_sym_platform_python_implementation] = "platform_python_implementation",
  [anon_sym_implementation_name] = "implementation_name",
  [anon_sym_implementation_version] = "implementation_version",
  [anon_sym_extra] = "extra",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_DASH_DASHno_DASHbinary] = "--no-binary",
  [anon_sym_DASH_DASHonly_DASHbinary] = "--only-binary",
  [anon_sym_DASH_DASHtrusted_DASHhost] = "--trusted-host",
  [anon_sym_DASH_DASHuse_DASHfeature] = "--use-feature",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_DASHno_DASHindex] = "--no-index",
  [anon_sym_DASH_DASHprefer_DASHbinary] = "--prefer-binary",
  [anon_sym_DASH_DASHrequire_DASHhashes] = "--require-hashes",
  [anon_sym_DASH_DASHpre] = "--pre",
  [anon_sym_DASHi] = "-i",
  [anon_sym_DASH_DASHindex_DASHurl] = "--index-url",
  [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = "--extra-index-url",
  [anon_sym_DASHc] = "-c",
  [anon_sym_DASHr] = "-r",
  [anon_sym_DASH_DASHconstraint] = "--constraint",
  [anon_sym_DASH_DASHrequirement] = "--requirement",
  [anon_sym_DASHe] = "-e",
  [anon_sym_DASHf] = "-f",
  [anon_sym_DASH_DASHeditable] = "--editable",
  [anon_sym_DASH_DASHfind_DASHlinks] = "--find-links",
  [anon_sym_DASH_DASHglobal_DASHoption] = "--global-option",
  [anon_sym_DASH_DASHconfig_DASHsettings] = "--config-settings",
  [anon_sym_DASH_DASHhash] = "--hash",
  [aux_sym_argument_token1] = "argument_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_string_token2] = "quoted_string_token2",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [aux_sym_env_var_token1] = "env_var_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BSLASH] = "\\",
  [sym_comment] = "comment",
  [aux_sym_space_token1] = "space_token1",
  [sym_file] = "file",
  [sym_requirement] = "requirement",
  [sym_extras] = "extras",
  [sym_url_spec] = "url_spec",
  [sym_url] = "url",
  [sym_version_spec] = "version_spec",
  [sym_version_list] = "version_list",
  [sym_marker_spec] = "marker_spec",
  [sym_marker_op] = "marker_op",
  [sym_marker_var] = "marker_var",
  [sym_marker] = "marker",
  [sym_marker_expr] = "marker_expr",
  [sym_marker_paren] = "marker_paren",
  [sym_marker_and] = "marker_and",
  [sym_marker_or] = "marker_or",
  [sym_global_opt] = "global_opt",
  [sym_requirement_opt] = "requirement_opt",
  [sym_argument] = "argument",
  [sym_quoted_string] = "quoted_string",
  [sym_env_var] = "env_var",
  [sym_linebreak] = "linebreak",
  [sym_space] = "space",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_requirement_repeat1] = "requirement_repeat1",
  [aux_sym_extras_repeat1] = "extras_repeat1",
  [aux_sym_url_repeat1] = "url_repeat1",
  [aux_sym_version_list_repeat1] = "version_list_repeat1",
  [aux_sym_argument_repeat1] = "argument_repeat1",
  [aux_sym_space_repeat1] = "space_repeat1",
  [alias_sym_pat_09700b0] = "pat_09700b0",
  [alias_sym_pat_1a808a5] = "pat_1a808a5",
  [alias_sym_pat_3965d2a] = "pat_3965d2a",
  [alias_sym_pat_509ec78] = "pat_509ec78",
  [alias_sym_pat_5d0eb07] = "pat_5d0eb07",
  [alias_sym_pat_7ef074c] = "pat_7ef074c",
  [alias_sym_pat_8166075] = "pat_8166075",
  [alias_sym_pat_90320f7] = "pat_90320f7",
  [alias_sym_pat_a742575] = "pat_a742575",
  [alias_sym_pat_d0b6c52] = "pat_d0b6c52",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_package] = sym_package,
  [aux_sym_file_token1] = aux_sym_file_token1,
  [aux_sym_file_token2] = aux_sym_file_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_url_token1] = aux_sym_url_token1,
  [aux_sym_url_token2] = aux_sym_url_token2,
  [aux_sym_url_token3] = aux_sym_url_token3,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_version] = sym_version,
  [sym_version_cmp] = sym_version_cmp,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_python_version] = anon_sym_python_version,
  [anon_sym_python_full_version] = anon_sym_python_full_version,
  [anon_sym_os_name] = anon_sym_os_name,
  [anon_sym_sys_platform] = anon_sym_sys_platform,
  [anon_sym_platform_release] = anon_sym_platform_release,
  [anon_sym_platform_system] = anon_sym_platform_system,
  [anon_sym_platform_version] = anon_sym_platform_version,
  [anon_sym_platform_machine] = anon_sym_platform_machine,
  [anon_sym_platform_python_implementation] = anon_sym_platform_python_implementation,
  [anon_sym_implementation_name] = anon_sym_implementation_name,
  [anon_sym_implementation_version] = anon_sym_implementation_version,
  [anon_sym_extra] = anon_sym_extra,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_DASH_DASHno_DASHbinary] = anon_sym_DASH_DASHno_DASHbinary,
  [anon_sym_DASH_DASHonly_DASHbinary] = anon_sym_DASH_DASHonly_DASHbinary,
  [anon_sym_DASH_DASHtrusted_DASHhost] = anon_sym_DASH_DASHtrusted_DASHhost,
  [anon_sym_DASH_DASHuse_DASHfeature] = anon_sym_DASH_DASHuse_DASHfeature,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH_DASHno_DASHindex] = anon_sym_DASH_DASHno_DASHindex,
  [anon_sym_DASH_DASHprefer_DASHbinary] = anon_sym_DASH_DASHprefer_DASHbinary,
  [anon_sym_DASH_DASHrequire_DASHhashes] = anon_sym_DASH_DASHrequire_DASHhashes,
  [anon_sym_DASH_DASHpre] = anon_sym_DASH_DASHpre,
  [anon_sym_DASHi] = anon_sym_DASHi,
  [anon_sym_DASH_DASHindex_DASHurl] = anon_sym_DASH_DASHindex_DASHurl,
  [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = anon_sym_DASH_DASHextra_DASHindex_DASHurl,
  [anon_sym_DASHc] = anon_sym_DASHc,
  [anon_sym_DASHr] = anon_sym_DASHr,
  [anon_sym_DASH_DASHconstraint] = anon_sym_DASH_DASHconstraint,
  [anon_sym_DASH_DASHrequirement] = anon_sym_DASH_DASHrequirement,
  [anon_sym_DASHe] = anon_sym_DASHe,
  [anon_sym_DASHf] = anon_sym_DASHf,
  [anon_sym_DASH_DASHeditable] = anon_sym_DASH_DASHeditable,
  [anon_sym_DASH_DASHfind_DASHlinks] = anon_sym_DASH_DASHfind_DASHlinks,
  [anon_sym_DASH_DASHglobal_DASHoption] = anon_sym_DASH_DASHglobal_DASHoption,
  [anon_sym_DASH_DASHconfig_DASHsettings] = anon_sym_DASH_DASHconfig_DASHsettings,
  [anon_sym_DASH_DASHhash] = anon_sym_DASH_DASHhash,
  [aux_sym_argument_token1] = aux_sym_argument_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_string_token2] = aux_sym_quoted_string_token2,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [aux_sym_env_var_token1] = aux_sym_env_var_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_comment] = sym_comment,
  [aux_sym_space_token1] = aux_sym_space_token1,
  [sym_file] = sym_file,
  [sym_requirement] = sym_requirement,
  [sym_extras] = sym_extras,
  [sym_url_spec] = sym_url_spec,
  [sym_url] = sym_url,
  [sym_version_spec] = sym_version_spec,
  [sym_version_list] = sym_version_list,
  [sym_marker_spec] = sym_marker_spec,
  [sym_marker_op] = sym_marker_op,
  [sym_marker_var] = sym_marker_var,
  [sym_marker] = sym_marker,
  [sym_marker_expr] = sym_marker_expr,
  [sym_marker_paren] = sym_marker_paren,
  [sym_marker_and] = sym_marker_and,
  [sym_marker_or] = sym_marker_or,
  [sym_global_opt] = sym_global_opt,
  [sym_requirement_opt] = sym_requirement_opt,
  [sym_argument] = sym_argument,
  [sym_quoted_string] = sym_quoted_string,
  [sym_env_var] = sym_env_var,
  [sym_linebreak] = sym_linebreak,
  [sym_space] = sym_space,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_requirement_repeat1] = aux_sym_requirement_repeat1,
  [aux_sym_extras_repeat1] = aux_sym_extras_repeat1,
  [aux_sym_url_repeat1] = aux_sym_url_repeat1,
  [aux_sym_version_list_repeat1] = aux_sym_version_list_repeat1,
  [aux_sym_argument_repeat1] = aux_sym_argument_repeat1,
  [aux_sym_space_repeat1] = aux_sym_space_repeat1,
  [alias_sym_pat_09700b0] = alias_sym_pat_09700b0,
  [alias_sym_pat_1a808a5] = alias_sym_pat_1a808a5,
  [alias_sym_pat_3965d2a] = alias_sym_pat_3965d2a,
  [alias_sym_pat_509ec78] = alias_sym_pat_509ec78,
  [alias_sym_pat_5d0eb07] = alias_sym_pat_5d0eb07,
  [alias_sym_pat_7ef074c] = alias_sym_pat_7ef074c,
  [alias_sym_pat_8166075] = alias_sym_pat_8166075,
  [alias_sym_pat_90320f7] = alias_sym_pat_90320f7,
  [alias_sym_pat_a742575] = alias_sym_pat_a742575,
  [alias_sym_pat_d0b6c52] = alias_sym_pat_d0b6c52,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_package] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_url_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_version_cmp] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_python_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_python_full_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_os_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sys_platform] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_platform_release] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_platform_system] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_platform_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_platform_machine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_platform_python_implementation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implementation_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_implementation_version] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extra] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHno_DASHbinary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHonly_DASHbinary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHtrusted_DASHhost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHuse_DASHfeature] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHno_DASHindex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHprefer_DASHbinary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHrequire_DASHhashes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHpre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHindex_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHconstraint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHrequirement] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHeditable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHfind_DASHlinks] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHglobal_DASHoption] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHconfig_DASHsettings] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHhash] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_argument_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_env_var_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_space_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_requirement] = {
    .visible = true,
    .named = true,
  },
  [sym_extras] = {
    .visible = true,
    .named = true,
  },
  [sym_url_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_version_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_version_list] = {
    .visible = true,
    .named = true,
  },
  [sym_marker_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_marker_op] = {
    .visible = true,
    .named = true,
  },
  [sym_marker_var] = {
    .visible = true,
    .named = true,
  },
  [sym_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_marker_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_marker_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_marker_and] = {
    .visible = true,
    .named = true,
  },
  [sym_marker_or] = {
    .visible = true,
    .named = true,
  },
  [sym_global_opt] = {
    .visible = true,
    .named = true,
  },
  [sym_requirement_opt] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_env_var] = {
    .visible = true,
    .named = true,
  },
  [sym_linebreak] = {
    .visible = true,
    .named = true,
  },
  [sym_space] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_requirement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_extras_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_version_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_space_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_pat_09700b0] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_1a808a5] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_3965d2a] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_509ec78] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_5d0eb07] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_7ef074c] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_8166075] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_90320f7] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_a742575] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_pat_d0b6c52] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_content = 1,
  field_name = 2,
  field_scheme = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_name] = "name",
  [field_scheme] = "scheme",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [6] = {.index = 0, .length = 1},
  [7] = {.index = 0, .length = 1},
  [14] = {.index = 1, .length = 1},
  [15] = {.index = 2, .length = 1},
  [16] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_scheme, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_content, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_pat_509ec78,
  },
  [2] = {
    [0] = alias_sym_pat_a742575,
  },
  [3] = {
    [1] = alias_sym_pat_509ec78,
  },
  [4] = {
    [0] = alias_sym_pat_d0b6c52,
    [1] = alias_sym_pat_509ec78,
  },
  [5] = {
    [0] = alias_sym_pat_09700b0,
  },
  [6] = {
    [0] = alias_sym_pat_90320f7,
  },
  [7] = {
    [0] = alias_sym_pat_1a808a5,
  },
  [8] = {
    [0] = alias_sym_pat_3965d2a,
  },
  [9] = {
    [2] = alias_sym_pat_509ec78,
  },
  [10] = {
    [0] = alias_sym_pat_d0b6c52,
    [2] = alias_sym_pat_509ec78,
  },
  [11] = {
    [1] = alias_sym_pat_d0b6c52,
    [2] = alias_sym_pat_509ec78,
  },
  [12] = {
    [3] = alias_sym_pat_509ec78,
  },
  [13] = {
    [0] = alias_sym_pat_d0b6c52,
    [3] = alias_sym_pat_509ec78,
  },
  [14] = {
    [1] = alias_sym_pat_5d0eb07,
  },
  [15] = {
    [1] = alias_sym_pat_8166075,
  },
  [16] = {
    [1] = alias_sym_pat_7ef074c,
  },
  [17] = {
    [1] = alias_sym_pat_d0b6c52,
    [3] = alias_sym_pat_509ec78,
  },
  [18] = {
    [1] = alias_sym_pat_d0b6c52,
    [4] = alias_sym_pat_509ec78,
  },
  [19] = {
    [4] = alias_sym_pat_509ec78,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 3,
  [35] = 2,
  [36] = 36,
  [37] = 4,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 2,
  [99] = 3,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 51,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 52,
  [117] = 117,
  [118] = 49,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 4,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 3,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 2,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 89,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 97,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 4,
  [154] = 93,
  [155] = 92,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 95,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 171,
  [174] = 166,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 2,
  [179] = 3,
  [180] = 106,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 4,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 218,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 211,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(172);
      ADVANCE_MAP(
        '\n', 173,
        '\r', 1,
        '"', 222,
        '$', 188,
        '\'', 225,
        '(', 189,
        ')', 190,
        ',', 181,
        '-', 187,
        ';', 194,
        '=', 199,
        '@', 183,
        '[', 180,
        '\\', 231,
        ']', 182,
        '}', 230,
        '\t', 236,
        ' ', 236,
        '.', 174,
        '/', 174,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(186);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(173);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 173,
        '\r', 1,
        '$', 188,
        '-', 187,
        ';', 194,
        '\\', 231,
        '\t', 236,
        ' ', 236,
      );
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(186);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '$') ADVANCE(188);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(186);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(218);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(173);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(218);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(220);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(218);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '\'') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(218);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ':') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'f') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(139);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(75);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(119);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(79);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(159);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(101);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(93);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(161);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(184);
      END_STATE();
    case 23:
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(25);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(28);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(8);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(185);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '=') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(192);
      END_STATE();
    case 32:
      if (lookahead == '\\') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(229);
      END_STATE();
    case 33:
      if (lookahead == '\\') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(226);
      END_STATE();
    case 34:
      if (lookahead == '\\') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(223);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(155);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(100);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(117);
      if (lookahead == 'g') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 51:
      ADVANCE_MAP(
        'c', 122,
        'e', 52,
        'f', 85,
        'g', 98,
        'h', 35,
        'i', 104,
        'n', 121,
        'o', 109,
        'p', 128,
        'r', 59,
        't', 126,
        'u', 144,
      );
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(154);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 75:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(11);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(140);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(217);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(123);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 94:
      if (lookahead == 'k') ADVANCE(141);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 124:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 125:
      if (lookahead == 'q') ADVANCE(160);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(168);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 133:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 134:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 146:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(209);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 162:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 163:
      if (lookahead == 'x') ADVANCE(200);
      END_STATE();
    case 164:
      if (lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 165:
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 166:
      if (lookahead == 'y') ADVANCE(195);
      END_STATE();
    case 167:
      if (lookahead == 'y') ADVANCE(196);
      END_STATE();
    case 168:
      if (lookahead == 'y') ADVANCE(201);
      END_STATE();
    case 169:
      if (lookahead == 'y') ADVANCE(15);
      END_STATE();
    case 170:
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 171:
      if (eof) ADVANCE(172);
      ADVANCE_MAP(
        '\n', 173,
        '\r', 1,
        '!', 31,
        '"', 222,
        '#', 235,
        '\'', 225,
        '(', 189,
        ')', 190,
        '+', 27,
        ',', 181,
        '-', 9,
        ';', 194,
        '<', 193,
        '=', 30,
        '>', 193,
        '@', 183,
        '[', 180,
        '\\', 231,
        ']', 182,
        '}', 230,
        '~', 31,
        '\t', 236,
        ' ', 236,
        'B', 176,
        'b', 176,
        '.', 174,
        '/', 174,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_file_token1);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_file_token2);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(27);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_package);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_url_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_url_token2);
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_url_token3);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_url_token3);
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_url_token3);
      if (lookahead == '{') ADVANCE(228);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '!' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_version_cmp);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_version_cmp);
      if (lookahead == '=') ADVANCE(192);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHbinary);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DASH_DASHonly_DASHbinary);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DASH_DASHtrusted_DASHhost);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DASH_DASHuse_DASHfeature);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DASH_DASHno_DASHindex);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DASH_DASHprefer_DASHbinary);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrequire_DASHhashes);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DASH_DASHpre);
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DASHi);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_DASH_DASHindex_DASHurl);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DASH_DASHextra_DASHindex_DASHurl);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DASHc);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DASHr);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DASH_DASHconstraint);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DASH_DASHrequirement);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DASHe);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_DASHf);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DASH_DASHeditable);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DASH_DASHfind_DASHlinks);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DASH_DASHglobal_DASHoption);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_DASH_DASHconfig_DASHsettings);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_DASH_DASHhash);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == '-') ADVANCE(50);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(26);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(27);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_argument_token1);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_quoted_string_token2);
      if (lookahead == '\\') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_quoted_string_token2);
      if (lookahead == '\\') ADVANCE(227);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_env_var_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == ' ') ADVANCE(218);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\\') ADVANCE(227);
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_space_token1);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(5);
      if (lookahead == 'p') ADVANCE(6);
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'x') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_extra);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_os_name);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 'v') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 82:
      if (lookahead == 'v') ADVANCE(91);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_sys_platform);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(101);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_python_version);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'v') ADVANCE(109);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(111);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_platform_system);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_platform_machine);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_platform_release);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_platform_version);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 115:
      if (lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 120:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 121:
      if (lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_implementation_name);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_python_full_version);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_implementation_version);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_platform_python_implementation);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 171},
  [2] = {.lex_state = 171},
  [3] = {.lex_state = 171},
  [4] = {.lex_state = 171},
  [5] = {.lex_state = 171},
  [6] = {.lex_state = 171},
  [7] = {.lex_state = 171},
  [8] = {.lex_state = 171},
  [9] = {.lex_state = 171},
  [10] = {.lex_state = 171},
  [11] = {.lex_state = 171},
  [12] = {.lex_state = 171},
  [13] = {.lex_state = 171},
  [14] = {.lex_state = 171},
  [15] = {.lex_state = 171},
  [16] = {.lex_state = 171},
  [17] = {.lex_state = 171},
  [18] = {.lex_state = 171},
  [19] = {.lex_state = 171},
  [20] = {.lex_state = 171},
  [21] = {.lex_state = 171},
  [22] = {.lex_state = 171},
  [23] = {.lex_state = 171},
  [24] = {.lex_state = 171},
  [25] = {.lex_state = 171},
  [26] = {.lex_state = 171},
  [27] = {.lex_state = 171},
  [28] = {.lex_state = 171},
  [29] = {.lex_state = 171},
  [30] = {.lex_state = 171},
  [31] = {.lex_state = 171},
  [32] = {.lex_state = 171},
  [33] = {.lex_state = 171},
  [34] = {.lex_state = 171},
  [35] = {.lex_state = 171},
  [36] = {.lex_state = 171},
  [37] = {.lex_state = 171},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 171},
  [40] = {.lex_state = 171},
  [41] = {.lex_state = 171},
  [42] = {.lex_state = 171},
  [43] = {.lex_state = 171},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 171},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 171},
  [48] = {.lex_state = 171},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 171},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 171},
  [54] = {.lex_state = 171},
  [55] = {.lex_state = 171},
  [56] = {.lex_state = 171},
  [57] = {.lex_state = 171},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 171},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 171},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 171},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 171},
  [67] = {.lex_state = 171},
  [68] = {.lex_state = 171},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 171},
  [71] = {.lex_state = 171},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 171},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 171},
  [78] = {.lex_state = 171},
  [79] = {.lex_state = 171},
  [80] = {.lex_state = 171},
  [81] = {.lex_state = 171},
  [82] = {.lex_state = 171},
  [83] = {.lex_state = 171},
  [84] = {.lex_state = 171},
  [85] = {.lex_state = 171},
  [86] = {.lex_state = 171},
  [87] = {.lex_state = 171},
  [88] = {.lex_state = 171},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 171},
  [91] = {.lex_state = 171},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 171},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 171},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 171},
  [102] = {.lex_state = 171},
  [103] = {.lex_state = 171},
  [104] = {.lex_state = 171},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 171},
  [108] = {.lex_state = 171},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 171},
  [114] = {.lex_state = 171},
  [115] = {.lex_state = 171},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 171},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 171},
  [120] = {.lex_state = 171},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 171},
  [125] = {.lex_state = 171},
  [126] = {.lex_state = 171},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 171},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 171},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 171},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 171},
  [141] = {.lex_state = 29},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 171},
  [144] = {.lex_state = 29},
  [145] = {.lex_state = 171},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 171},
  [148] = {.lex_state = 171},
  [149] = {.lex_state = 171},
  [150] = {.lex_state = 171},
  [151] = {.lex_state = 171},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 171},
  [157] = {.lex_state = 171},
  [158] = {.lex_state = 29},
  [159] = {.lex_state = 29},
  [160] = {.lex_state = 29},
  [161] = {.lex_state = 29},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 171},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 171},
  [168] = {.lex_state = 29},
  [169] = {.lex_state = 29},
  [170] = {.lex_state = 29},
  [171] = {.lex_state = 3},
  [172] = {.lex_state = 29},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 171},
  [177] = {.lex_state = 171},
  [178] = {.lex_state = 29},
  [179] = {.lex_state = 29},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 171},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 171},
  [184] = {.lex_state = 171},
  [185] = {.lex_state = 171},
  [186] = {.lex_state = 171},
  [187] = {.lex_state = 171},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 171},
  [190] = {.lex_state = 171},
  [191] = {.lex_state = 171},
  [192] = {.lex_state = 171},
  [193] = {.lex_state = 171},
  [194] = {.lex_state = 171},
  [195] = {.lex_state = 171},
  [196] = {.lex_state = 171},
  [197] = {.lex_state = 29},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 171},
  [200] = {.lex_state = 171},
  [201] = {.lex_state = 171},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 171},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 171},
  [206] = {.lex_state = 171},
  [207] = {.lex_state = 29},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 171},
  [210] = {.lex_state = 171},
  [211] = {.lex_state = 32},
  [212] = {.lex_state = 171},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 171},
  [215] = {.lex_state = 29},
  [216] = {.lex_state = 171},
  [217] = {.lex_state = 29},
  [218] = {.lex_state = 171},
  [219] = {.lex_state = 171},
  [220] = {.lex_state = 29},
  [221] = {.lex_state = 171},
  [222] = {.lex_state = 171},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 29},
  [225] = {.lex_state = 171},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 171},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 171},
  [230] = {.lex_state = 33},
  [231] = {.lex_state = 34},
  [232] = {.lex_state = 32},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 171},
  [235] = {.lex_state = 171},
  [236] = {.lex_state = 171},
  [237] = {.lex_state = 171},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {(TSStateId)(-1)},
  [241] = {(TSStateId)(-1)},
  [242] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_linebreak] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_package] = ACTIONS(1),
    [aux_sym_file_token1] = ACTIONS(1),
    [aux_sym_file_token2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_url_token3] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_python_version] = ACTIONS(1),
    [anon_sym_python_full_version] = ACTIONS(1),
    [anon_sym_os_name] = ACTIONS(1),
    [anon_sym_sys_platform] = ACTIONS(1),
    [anon_sym_platform_release] = ACTIONS(1),
    [anon_sym_platform_system] = ACTIONS(1),
    [anon_sym_platform_version] = ACTIONS(1),
    [anon_sym_platform_machine] = ACTIONS(1),
    [anon_sym_platform_python_implementation] = ACTIONS(1),
    [anon_sym_implementation_name] = ACTIONS(1),
    [anon_sym_implementation_version] = ACTIONS(1),
    [anon_sym_extra] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_DASHglobal_DASHoption] = ACTIONS(1),
    [anon_sym_DASH_DASHconfig_DASHsettings] = ACTIONS(1),
    [anon_sym_DASH_DASHhash] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(3),
    [aux_sym_space_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(239),
    [sym_requirement] = STATE(165),
    [sym_url] = STATE(165),
    [sym_global_opt] = STATE(165),
    [sym_linebreak] = STATE(1),
    [sym_space] = STATE(7),
    [aux_sym_file_repeat1] = STATE(6),
    [aux_sym_space_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_package] = ACTIONS(7),
    [aux_sym_file_token1] = ACTIONS(9),
    [aux_sym_file_token2] = ACTIONS(11),
    [aux_sym_url_token1] = ACTIONS(13),
    [aux_sym_url_token2] = ACTIONS(15),
    [anon_sym_DASH_DASHno_DASHbinary] = ACTIONS(17),
    [anon_sym_DASH_DASHonly_DASHbinary] = ACTIONS(17),
    [anon_sym_DASH_DASHtrusted_DASHhost] = ACTIONS(17),
    [anon_sym_DASH_DASHuse_DASHfeature] = ACTIONS(17),
    [anon_sym_DASH_DASHno_DASHindex] = ACTIONS(19),
    [anon_sym_DASH_DASHprefer_DASHbinary] = ACTIONS(19),
    [anon_sym_DASH_DASHrequire_DASHhashes] = ACTIONS(19),
    [anon_sym_DASH_DASHpre] = ACTIONS(21),
    [anon_sym_DASHi] = ACTIONS(23),
    [anon_sym_DASH_DASHindex_DASHurl] = ACTIONS(25),
    [anon_sym_DASH_DASHextra_DASHindex_DASHurl] = ACTIONS(25),
    [anon_sym_DASHc] = ACTIONS(27),
    [anon_sym_DASHr] = ACTIONS(27),
    [anon_sym_DASH_DASHconstraint] = ACTIONS(17),
    [anon_sym_DASH_DASHrequirement] = ACTIONS(17),
    [anon_sym_DASHe] = ACTIONS(29),
    [anon_sym_DASHf] = ACTIONS(29),
    [anon_sym_DASH_DASHeditable] = ACTIONS(31),
    [anon_sym_DASH_DASHfind_DASHlinks] = ACTIONS(31),
    [anon_sym_BSLASH] = ACTIONS(3),
    [sym_comment] = ACTIONS(33),
    [aux_sym_space_token1] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(41), 1,
      aux_sym_space_token1,
    STATE(2), 2,
      sym_linebreak,
      aux_sym_space_repeat1,
    ACTIONS(37), 5,
      sym_package,
      aux_sym_url_token2,
      anon_sym_in,
      anon_sym_not,
      anon_sym_DASH_DASHpre,
    ACTIONS(39), 35,
      aux_sym_file_token1,
      aux_sym_file_token2,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AT,
      aux_sym_url_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [55] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    STATE(2), 1,
      aux_sym_space_repeat1,
    STATE(3), 1,
      sym_linebreak,
    ACTIONS(44), 5,
      sym_package,
      aux_sym_url_token2,
      anon_sym_in,
      anon_sym_not,
      anon_sym_DASH_DASHpre,
    ACTIONS(46), 35,
      aux_sym_file_token1,
      aux_sym_file_token2,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AT,
      aux_sym_url_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
  [112] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(4), 1,
      sym_linebreak,
    ACTIONS(48), 5,
      sym_package,
      aux_sym_url_token2,
      anon_sym_in,
      anon_sym_not,
      anon_sym_DASH_DASHpre,
    ACTIONS(50), 36,
      aux_sym_file_token1,
      aux_sym_file_token2,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AT,
      aux_sym_url_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_comment,
      aux_sym_space_token1,
  [164] = 21,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      sym_package,
    ACTIONS(57), 1,
      aux_sym_file_token1,
    ACTIONS(60), 1,
      aux_sym_file_token2,
    ACTIONS(63), 1,
      aux_sym_url_token1,
    ACTIONS(66), 1,
      aux_sym_url_token2,
    ACTIONS(75), 1,
      anon_sym_DASH_DASHpre,
    ACTIONS(78), 1,
      anon_sym_DASHi,
    ACTIONS(93), 1,
      sym_comment,
    ACTIONS(96), 1,
      aux_sym_space_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(7), 1,
      sym_space,
    ACTIONS(81), 2,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
    ACTIONS(84), 2,
      anon_sym_DASHc,
      anon_sym_DASHr,
    ACTIONS(87), 2,
      anon_sym_DASHe,
      anon_sym_DASHf,
    ACTIONS(90), 2,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
    STATE(5), 2,
      sym_linebreak,
      aux_sym_file_repeat1,
    ACTIONS(72), 3,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
    STATE(165), 3,
      sym_requirement,
      sym_url,
      sym_global_opt,
    ACTIONS(69), 6,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
  [242] = 22,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(7), 1,
      sym_package,
    ACTIONS(9), 1,
      aux_sym_file_token1,
    ACTIONS(11), 1,
      aux_sym_file_token2,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(21), 1,
      anon_sym_DASH_DASHpre,
    ACTIONS(23), 1,
      anon_sym_DASHi,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(5), 1,
      aux_sym_file_repeat1,
    STATE(6), 1,
      sym_linebreak,
    STATE(7), 1,
      sym_space,
    ACTIONS(25), 2,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
    ACTIONS(27), 2,
      anon_sym_DASHc,
      anon_sym_DASHr,
    ACTIONS(29), 2,
      anon_sym_DASHe,
      anon_sym_DASHf,
    ACTIONS(31), 2,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
    ACTIONS(19), 3,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
    STATE(165), 3,
      sym_requirement,
      sym_url,
      sym_global_opt,
    ACTIONS(17), 6,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
  [322] = 17,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(7), 1,
      sym_package,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(21), 1,
      anon_sym_DASH_DASHpre,
    ACTIONS(23), 1,
      anon_sym_DASHi,
    ACTIONS(101), 1,
      aux_sym_file_token1,
    ACTIONS(103), 1,
      aux_sym_file_token2,
    ACTIONS(105), 1,
      sym_comment,
    STATE(7), 1,
      sym_linebreak,
    ACTIONS(25), 2,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
    ACTIONS(27), 2,
      anon_sym_DASHc,
      anon_sym_DASHr,
    ACTIONS(29), 2,
      anon_sym_DASHe,
      anon_sym_DASHf,
    ACTIONS(31), 2,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
    ACTIONS(19), 3,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
    STATE(139), 3,
      sym_requirement,
      sym_url,
      sym_global_opt,
    ACTIONS(17), 6,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
  [387] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(8), 1,
      sym_linebreak,
    ACTIONS(109), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(107), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym_space_token1,
  [425] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(9), 1,
      sym_linebreak,
    ACTIONS(113), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(111), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym_space_token1,
  [463] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(10), 1,
      sym_linebreak,
    ACTIONS(117), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(115), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym_space_token1,
  [501] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(11), 1,
      sym_linebreak,
    ACTIONS(121), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(119), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym_space_token1,
  [539] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(12), 1,
      sym_linebreak,
    ACTIONS(125), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(123), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym_space_token1,
  [577] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(13), 1,
      sym_linebreak,
    ACTIONS(129), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(127), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym_space_token1,
  [615] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(14), 1,
      sym_linebreak,
    ACTIONS(133), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(131), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym_space_token1,
  [653] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      sym_linebreak,
    ACTIONS(137), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(135), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym_space_token1,
  [691] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(16), 1,
      sym_linebreak,
    ACTIONS(141), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(139), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym_space_token1,
  [729] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(17), 1,
      sym_linebreak,
    ACTIONS(145), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(143), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym_space_token1,
  [767] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(18), 1,
      sym_linebreak,
    ACTIONS(149), 3,
      sym_package,
      aux_sym_url_token2,
      anon_sym_DASH_DASHpre,
    ACTIONS(147), 24,
      ts_builtin_sym_end,
      aux_sym_file_token1,
      aux_sym_file_token2,
      aux_sym_url_token1,
      anon_sym_DASH_DASHno_DASHbinary,
      anon_sym_DASH_DASHonly_DASHbinary,
      anon_sym_DASH_DASHtrusted_DASHhost,
      anon_sym_DASH_DASHuse_DASHfeature,
      anon_sym_DASH_DASHno_DASHindex,
      anon_sym_DASH_DASHprefer_DASHbinary,
      anon_sym_DASH_DASHrequire_DASHhashes,
      anon_sym_DASHi,
      anon_sym_DASH_DASHindex_DASHurl,
      anon_sym_DASH_DASHextra_DASHindex_DASHurl,
      anon_sym_DASHc,
      anon_sym_DASHr,
      anon_sym_DASH_DASHconstraint,
      anon_sym_DASH_DASHrequirement,
      anon_sym_DASHe,
      anon_sym_DASHf,
      anon_sym_DASH_DASHeditable,
      anon_sym_DASH_DASHfind_DASHlinks,
      sym_comment,
      aux_sym_space_token1,
  [805] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      aux_sym_space_token1,
    STATE(19), 1,
      sym_linebreak,
    STATE(32), 1,
      sym_space,
    STATE(34), 1,
      aux_sym_space_repeat1,
    STATE(48), 1,
      sym_marker,
    STATE(94), 1,
      sym_marker_var,
    STATE(82), 4,
      sym_marker_expr,
      sym_marker_paren,
      sym_marker_and,
      sym_marker_or,
    ACTIONS(153), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [850] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      aux_sym_space_token1,
    STATE(20), 1,
      sym_linebreak,
    STATE(28), 1,
      sym_space,
    STATE(34), 1,
      aux_sym_space_repeat1,
    STATE(94), 1,
      sym_marker_var,
    STATE(117), 1,
      sym_marker,
    STATE(82), 4,
      sym_marker_expr,
      sym_marker_paren,
      sym_marker_and,
      sym_marker_or,
    ACTIONS(153), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [895] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      aux_sym_space_token1,
    STATE(21), 1,
      sym_linebreak,
    STATE(31), 1,
      sym_space,
    STATE(34), 1,
      aux_sym_space_repeat1,
    STATE(67), 1,
      sym_marker,
    STATE(94), 1,
      sym_marker_var,
    STATE(82), 4,
      sym_marker_expr,
      sym_marker_paren,
      sym_marker_and,
      sym_marker_or,
    ACTIONS(153), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [940] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      aux_sym_space_token1,
    STATE(22), 1,
      sym_linebreak,
    STATE(26), 1,
      sym_space,
    STATE(34), 1,
      aux_sym_space_repeat1,
    STATE(50), 1,
      sym_marker,
    STATE(94), 1,
      sym_marker_var,
    STATE(82), 4,
      sym_marker_expr,
      sym_marker_paren,
      sym_marker_and,
      sym_marker_or,
    ACTIONS(153), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [985] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      aux_sym_space_token1,
    STATE(23), 1,
      sym_linebreak,
    STATE(27), 1,
      sym_space,
    STATE(34), 1,
      aux_sym_space_repeat1,
    STATE(55), 1,
      sym_marker,
    STATE(94), 1,
      sym_marker_var,
    STATE(82), 4,
      sym_marker_expr,
      sym_marker_paren,
      sym_marker_and,
      sym_marker_or,
    ACTIONS(153), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [1030] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      aux_sym_space_token1,
    STATE(24), 1,
      sym_linebreak,
    STATE(29), 1,
      sym_space,
    STATE(34), 1,
      aux_sym_space_repeat1,
    STATE(56), 1,
      sym_marker,
    STATE(94), 1,
      sym_marker_var,
    STATE(82), 4,
      sym_marker_expr,
      sym_marker_paren,
      sym_marker_and,
      sym_marker_or,
    ACTIONS(153), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [1075] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      aux_sym_space_token1,
    STATE(25), 1,
      sym_linebreak,
    STATE(33), 1,
      sym_space,
    STATE(34), 1,
      aux_sym_space_repeat1,
    STATE(74), 1,
      sym_marker,
    STATE(94), 1,
      sym_marker_var,
    STATE(82), 4,
      sym_marker_expr,
      sym_marker_paren,
      sym_marker_and,
      sym_marker_or,
    ACTIONS(153), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [1120] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_linebreak,
    STATE(55), 1,
      sym_marker,
    STATE(94), 1,
      sym_marker_var,
    STATE(82), 4,
      sym_marker_expr,
      sym_marker_paren,
      sym_marker_and,
      sym_marker_or,
    ACTIONS(153), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [1156] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_linebreak,
    STATE(54), 1,
      sym_marker,
    STATE(94), 1,
      sym_marker_var,
    STATE(82), 4,
      sym_marker_expr,
      sym_marker_paren,
      sym_marker_and,
      sym_marker_or,
    ACTIONS(153), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [1192] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_linebreak,
    STATE(94), 1,
      sym_marker_var,
    STATE(124), 1,
      sym_marker,
    STATE(82), 4,
      sym_marker_expr,
      sym_marker_paren,
      sym_marker_and,
      sym_marker_or,
    ACTIONS(153), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [1228] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_linebreak,
    STATE(53), 1,
      sym_marker,
    STATE(94), 1,
      sym_marker_var,
    STATE(82), 4,
      sym_marker_expr,
      sym_marker_paren,
      sym_marker_and,
      sym_marker_or,
    ACTIONS(153), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [1264] = 18,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(157), 1,
      aux_sym_file_token1,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_version_cmp,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    ACTIONS(171), 1,
      aux_sym_space_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(30), 1,
      sym_linebreak,
    STATE(36), 1,
      sym_extras,
    STATE(58), 1,
      aux_sym_requirement_repeat1,
    STATE(73), 1,
      sym_marker_spec,
    STATE(77), 1,
      sym_space,
    STATE(112), 1,
      sym_version_list,
    STATE(134), 1,
      sym_requirement_opt,
    STATE(46), 2,
      sym_url_spec,
      sym_version_spec,
    ACTIONS(169), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1322] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_linebreak,
    STATE(71), 1,
      sym_marker,
    STATE(94), 1,
      sym_marker_var,
    STATE(82), 4,
      sym_marker_expr,
      sym_marker_paren,
      sym_marker_and,
      sym_marker_or,
    ACTIONS(153), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [1358] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_linebreak,
    STATE(56), 1,
      sym_marker,
    STATE(94), 1,
      sym_marker_var,
    STATE(82), 4,
      sym_marker_expr,
      sym_marker_paren,
      sym_marker_and,
      sym_marker_or,
    ACTIONS(153), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [1394] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_linebreak,
    STATE(67), 1,
      sym_marker,
    STATE(94), 1,
      sym_marker_var,
    STATE(82), 4,
      sym_marker_expr,
      sym_marker_paren,
      sym_marker_and,
      sym_marker_or,
    ACTIONS(153), 12,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
  [1430] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(155), 1,
      aux_sym_space_token1,
    STATE(34), 1,
      sym_linebreak,
    STATE(35), 1,
      aux_sym_space_repeat1,
    ACTIONS(46), 16,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
      anon_sym_and,
      anon_sym_or,
  [1461] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(174), 1,
      aux_sym_space_token1,
    STATE(35), 2,
      sym_linebreak,
      aux_sym_space_repeat1,
    ACTIONS(39), 16,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
      anon_sym_and,
      anon_sym_or,
  [1490] = 16,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(161), 1,
      anon_sym_AT,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      sym_version_cmp,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    ACTIONS(177), 1,
      aux_sym_file_token1,
    ACTIONS(179), 1,
      aux_sym_space_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(36), 1,
      sym_linebreak,
    STATE(75), 1,
      aux_sym_requirement_repeat1,
    STATE(76), 1,
      sym_marker_spec,
    STATE(96), 1,
      sym_space,
    STATE(112), 1,
      sym_version_list,
    STATE(134), 1,
      sym_requirement_opt,
    STATE(44), 2,
      sym_url_spec,
      sym_version_spec,
    ACTIONS(169), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1542] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(37), 1,
      sym_linebreak,
    ACTIONS(50), 17,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_python_version,
      anon_sym_python_full_version,
      anon_sym_os_name,
      anon_sym_sys_platform,
      anon_sym_platform_release,
      anon_sym_platform_system,
      anon_sym_platform_version,
      anon_sym_platform_machine,
      anon_sym_platform_python_implementation,
      anon_sym_implementation_name,
      anon_sym_implementation_version,
      anon_sym_extra,
      anon_sym_and,
      anon_sym_or,
      aux_sym_space_token1,
  [1568] = 12,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(182), 1,
      aux_sym_argument_token1,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    ACTIONS(190), 1,
      aux_sym_space_token1,
    STATE(38), 1,
      sym_linebreak,
    STATE(62), 1,
      sym_space,
    STATE(99), 1,
      aux_sym_space_repeat1,
    STATE(146), 1,
      aux_sym_argument_repeat1,
    STATE(198), 3,
      sym_url,
      sym_argument,
      sym_quoted_string,
  [1607] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      aux_sym_space_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(219), 1,
      sym_space,
    STATE(39), 2,
      sym_linebreak,
      aux_sym_version_list_repeat1,
    ACTIONS(192), 6,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1635] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(40), 1,
      sym_linebreak,
    STATE(41), 1,
      aux_sym_version_list_repeat1,
    STATE(219), 1,
      sym_space,
    ACTIONS(200), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [1663] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(39), 1,
      aux_sym_version_list_repeat1,
    STATE(41), 1,
      sym_linebreak,
    STATE(219), 1,
      sym_space,
    ACTIONS(204), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [1691] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(39), 1,
      aux_sym_version_list_repeat1,
    STATE(42), 1,
      sym_linebreak,
    STATE(219), 1,
      sym_space,
    ACTIONS(200), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [1719] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(43), 1,
      sym_linebreak,
    STATE(47), 1,
      aux_sym_version_list_repeat1,
    STATE(219), 1,
      sym_space,
    ACTIONS(206), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [1747] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      aux_sym_file_token1,
    ACTIONS(210), 1,
      aux_sym_space_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(44), 1,
      sym_linebreak,
    STATE(64), 1,
      aux_sym_requirement_repeat1,
    STATE(65), 1,
      sym_marker_spec,
    STATE(134), 1,
      sym_requirement_opt,
    STATE(152), 1,
      sym_space,
    ACTIONS(169), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1783] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(42), 1,
      aux_sym_version_list_repeat1,
    STATE(45), 1,
      sym_linebreak,
    STATE(219), 1,
      sym_space,
    ACTIONS(213), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [1811] = 11,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(167), 1,
      anon_sym_SEMI,
    ACTIONS(177), 1,
      aux_sym_file_token1,
    ACTIONS(179), 1,
      aux_sym_space_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(46), 1,
      sym_linebreak,
    STATE(75), 1,
      aux_sym_requirement_repeat1,
    STATE(76), 1,
      sym_marker_spec,
    STATE(134), 1,
      sym_requirement_opt,
    STATE(152), 1,
      sym_space,
    ACTIONS(169), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [1847] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(39), 1,
      aux_sym_version_list_repeat1,
    STATE(47), 1,
      sym_linebreak,
    STATE(219), 1,
      sym_space,
    ACTIONS(213), 7,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [1875] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(34), 1,
      aux_sym_space_repeat1,
    STATE(48), 1,
      sym_linebreak,
    STATE(199), 1,
      sym_space,
    ACTIONS(215), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [1898] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(219), 1,
      aux_sym_url_token3,
    ACTIONS(221), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(49), 1,
      sym_linebreak,
    STATE(51), 1,
      aux_sym_url_repeat1,
    STATE(93), 1,
      sym_env_var,
    ACTIONS(217), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [1925] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(34), 1,
      aux_sym_space_repeat1,
    STATE(50), 1,
      sym_linebreak,
    STATE(199), 1,
      sym_space,
    ACTIONS(223), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [1948] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(227), 1,
      aux_sym_url_token3,
    ACTIONS(230), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(93), 1,
      sym_env_var,
    STATE(51), 2,
      sym_linebreak,
      aux_sym_url_repeat1,
    ACTIONS(225), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [1973] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(219), 1,
      aux_sym_url_token3,
    ACTIONS(221), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(51), 1,
      aux_sym_url_repeat1,
    STATE(52), 1,
      sym_linebreak,
    STATE(93), 1,
      sym_env_var,
    ACTIONS(233), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2000] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(34), 1,
      aux_sym_space_repeat1,
    STATE(53), 1,
      sym_linebreak,
    STATE(199), 1,
      sym_space,
    ACTIONS(235), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2023] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(34), 1,
      aux_sym_space_repeat1,
    STATE(54), 1,
      sym_linebreak,
    STATE(199), 1,
      sym_space,
    ACTIONS(237), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2046] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(34), 1,
      aux_sym_space_repeat1,
    STATE(55), 1,
      sym_linebreak,
    STATE(199), 1,
      sym_space,
    ACTIONS(239), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2069] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(34), 1,
      aux_sym_space_repeat1,
    STATE(56), 1,
      sym_linebreak,
    STATE(199), 1,
      sym_space,
    ACTIONS(241), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2092] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(57), 1,
      sym_linebreak,
    ACTIONS(243), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2110] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(177), 1,
      aux_sym_file_token1,
    ACTIONS(179), 1,
      aux_sym_space_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(58), 1,
      sym_linebreak,
    STATE(69), 1,
      aux_sym_requirement_repeat1,
    STATE(134), 1,
      sym_requirement_opt,
    STATE(182), 1,
      sym_space,
    ACTIONS(169), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2140] = 10,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(59), 1,
      sym_linebreak,
    STATE(129), 1,
      sym_space,
    STATE(198), 2,
      sym_url,
      sym_quoted_string,
  [2172] = 10,
    ACTIONS(182), 1,
      aux_sym_argument_token1,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    ACTIONS(245), 1,
      aux_sym_space_token1,
    STATE(60), 1,
      sym_linebreak,
    STATE(122), 1,
      sym_space,
    STATE(132), 1,
      aux_sym_space_repeat1,
    STATE(146), 1,
      aux_sym_argument_repeat1,
    STATE(198), 2,
      sym_argument,
      sym_quoted_string,
  [2204] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(61), 1,
      sym_linebreak,
    ACTIONS(247), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2222] = 9,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(182), 1,
      aux_sym_argument_token1,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    STATE(62), 1,
      sym_linebreak,
    STATE(146), 1,
      aux_sym_argument_repeat1,
    STATE(204), 3,
      sym_url,
      sym_argument,
      sym_quoted_string,
  [2252] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(63), 1,
      sym_linebreak,
    ACTIONS(249), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2270] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(251), 1,
      aux_sym_file_token1,
    ACTIONS(253), 1,
      aux_sym_space_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(64), 1,
      sym_linebreak,
    STATE(69), 1,
      aux_sym_requirement_repeat1,
    STATE(134), 1,
      sym_requirement_opt,
    STATE(182), 1,
      sym_space,
    ACTIONS(169), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2300] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(251), 1,
      aux_sym_file_token1,
    ACTIONS(253), 1,
      aux_sym_space_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(65), 1,
      sym_linebreak,
    STATE(72), 1,
      aux_sym_requirement_repeat1,
    STATE(134), 1,
      sym_requirement_opt,
    STATE(182), 1,
      sym_space,
    ACTIONS(169), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2330] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(66), 1,
      sym_linebreak,
    ACTIONS(256), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2348] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(155), 1,
      aux_sym_space_token1,
    ACTIONS(260), 1,
      anon_sym_and,
    ACTIONS(262), 1,
      anon_sym_or,
    STATE(34), 1,
      aux_sym_space_repeat1,
    STATE(67), 1,
      sym_linebreak,
    STATE(199), 1,
      sym_space,
    ACTIONS(258), 4,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2376] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(68), 1,
      sym_linebreak,
    ACTIONS(264), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2394] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(266), 1,
      aux_sym_file_token1,
    ACTIONS(271), 1,
      aux_sym_space_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(134), 1,
      sym_requirement_opt,
    STATE(182), 1,
      sym_space,
    STATE(69), 2,
      sym_linebreak,
      aux_sym_requirement_repeat1,
    ACTIONS(268), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2422] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(70), 1,
      sym_linebreak,
    ACTIONS(274), 9,
      aux_sym_file_token1,
      anon_sym_AT,
      anon_sym_LPAREN,
      sym_version_cmp,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2440] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(155), 1,
      aux_sym_space_token1,
    ACTIONS(260), 1,
      anon_sym_and,
    ACTIONS(262), 1,
      anon_sym_or,
    STATE(34), 1,
      aux_sym_space_repeat1,
    STATE(71), 1,
      sym_linebreak,
    STATE(199), 1,
      sym_space,
    ACTIONS(276), 4,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2468] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(278), 1,
      aux_sym_file_token1,
    ACTIONS(280), 1,
      aux_sym_space_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(69), 1,
      aux_sym_requirement_repeat1,
    STATE(72), 1,
      sym_linebreak,
    STATE(134), 1,
      sym_requirement_opt,
    STATE(182), 1,
      sym_space,
    ACTIONS(169), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2498] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(177), 1,
      aux_sym_file_token1,
    ACTIONS(179), 1,
      aux_sym_space_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(73), 1,
      sym_linebreak,
    STATE(75), 1,
      aux_sym_requirement_repeat1,
    STATE(134), 1,
      sym_requirement_opt,
    STATE(182), 1,
      sym_space,
    ACTIONS(169), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2528] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(155), 1,
      aux_sym_space_token1,
    ACTIONS(260), 1,
      anon_sym_and,
    ACTIONS(262), 1,
      anon_sym_or,
    STATE(34), 1,
      aux_sym_space_repeat1,
    STATE(74), 1,
      sym_linebreak,
    STATE(199), 1,
      sym_space,
    ACTIONS(283), 4,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2556] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(208), 1,
      aux_sym_file_token1,
    ACTIONS(210), 1,
      aux_sym_space_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(69), 1,
      aux_sym_requirement_repeat1,
    STATE(75), 1,
      sym_linebreak,
    STATE(134), 1,
      sym_requirement_opt,
    STATE(182), 1,
      sym_space,
    ACTIONS(169), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2586] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(208), 1,
      aux_sym_file_token1,
    ACTIONS(210), 1,
      aux_sym_space_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(64), 1,
      aux_sym_requirement_repeat1,
    STATE(76), 1,
      sym_linebreak,
    STATE(134), 1,
      sym_requirement_opt,
    STATE(182), 1,
      sym_space,
    ACTIONS(169), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2616] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(287), 1,
      anon_sym_AT,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      sym_version_cmp,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_linebreak,
    ACTIONS(295), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2643] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(78), 1,
      sym_linebreak,
    ACTIONS(297), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2660] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(79), 1,
      sym_linebreak,
    ACTIONS(299), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2677] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(80), 1,
      sym_linebreak,
    ACTIONS(301), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2694] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(81), 1,
      sym_linebreak,
    ACTIONS(303), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2711] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(82), 1,
      sym_linebreak,
    ACTIONS(305), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2728] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(83), 1,
      sym_linebreak,
    ACTIONS(307), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2745] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(84), 1,
      sym_linebreak,
    ACTIONS(309), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2762] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(85), 1,
      sym_linebreak,
    ACTIONS(311), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2779] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(86), 1,
      sym_linebreak,
    ACTIONS(313), 8,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2796] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(87), 1,
      sym_linebreak,
    ACTIONS(315), 8,
      aux_sym_file_token1,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2813] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(88), 1,
      sym_linebreak,
    ACTIONS(317), 8,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2830] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(321), 1,
      aux_sym_url_token3,
    STATE(89), 1,
      sym_linebreak,
    ACTIONS(319), 7,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_space_token1,
  [2849] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(90), 1,
      sym_linebreak,
    ACTIONS(323), 8,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2866] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(91), 1,
      sym_linebreak,
    ACTIONS(325), 8,
      aux_sym_file_token1,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2883] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(329), 1,
      aux_sym_url_token3,
    STATE(92), 1,
      sym_linebreak,
    ACTIONS(327), 7,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_space_token1,
  [2902] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(333), 1,
      aux_sym_url_token3,
    STATE(93), 1,
      sym_linebreak,
    ACTIONS(331), 7,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_space_token1,
  [2921] = 9,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(335), 1,
      sym_version_cmp,
    ACTIONS(337), 1,
      anon_sym_in,
    ACTIONS(339), 1,
      anon_sym_not,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(94), 1,
      sym_linebreak,
    STATE(101), 1,
      sym_marker_op,
    STATE(151), 1,
      sym_space,
  [2949] = 4,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      aux_sym_argument_token1,
    STATE(95), 2,
      sym_linebreak,
      aux_sym_argument_repeat1,
    ACTIONS(341), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [2967] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(287), 1,
      anon_sym_AT,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      sym_version_cmp,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      sym_linebreak,
    ACTIONS(295), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [2991] = 5,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    ACTIONS(348), 1,
      aux_sym_argument_token1,
    STATE(95), 1,
      aux_sym_argument_repeat1,
    STATE(97), 1,
      sym_linebreak,
    ACTIONS(346), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [3011] = 5,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    ACTIONS(350), 1,
      aux_sym_space_token1,
    ACTIONS(37), 2,
      aux_sym_url_token2,
      aux_sym_argument_token1,
    STATE(98), 2,
      sym_linebreak,
      aux_sym_space_repeat1,
    ACTIONS(39), 3,
      aux_sym_url_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3031] = 6,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    ACTIONS(190), 1,
      aux_sym_space_token1,
    STATE(98), 1,
      aux_sym_space_repeat1,
    STATE(99), 1,
      sym_linebreak,
    ACTIONS(44), 2,
      aux_sym_url_token2,
      aux_sym_argument_token1,
    ACTIONS(46), 3,
      aux_sym_url_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3053] = 7,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    ACTIONS(348), 1,
      aux_sym_argument_token1,
    STATE(97), 1,
      aux_sym_argument_repeat1,
    STATE(100), 1,
      sym_linebreak,
    STATE(136), 2,
      sym_argument,
      sym_quoted_string,
  [3076] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(84), 1,
      sym_quoted_string,
    STATE(101), 1,
      sym_linebreak,
    STATE(191), 1,
      sym_space,
  [3101] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(102), 1,
      sym_linebreak,
    STATE(119), 1,
      aux_sym_extras_repeat1,
    STATE(193), 1,
      sym_space,
  [3126] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(103), 1,
      sym_linebreak,
    STATE(119), 1,
      aux_sym_extras_repeat1,
    STATE(203), 1,
      sym_space,
  [3151] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(359), 1,
      aux_sym_url_token1,
    ACTIONS(361), 1,
      aux_sym_url_token2,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(104), 1,
      sym_linebreak,
    STATE(128), 1,
      sym_url,
    STATE(181), 1,
      sym_space,
  [3176] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(363), 1,
      aux_sym_url_token3,
    ACTIONS(366), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(154), 1,
      sym_env_var,
    ACTIONS(225), 2,
      aux_sym_file_token1,
      aux_sym_space_token1,
    STATE(105), 2,
      sym_linebreak,
      aux_sym_url_repeat1,
  [3197] = 4,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    ACTIONS(371), 1,
      aux_sym_argument_token1,
    STATE(106), 1,
      sym_linebreak,
    ACTIONS(369), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [3214] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(107), 1,
      sym_linebreak,
    STATE(119), 1,
      aux_sym_extras_repeat1,
    STATE(194), 1,
      sym_space,
  [3239] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(108), 1,
      sym_linebreak,
    STATE(114), 1,
      aux_sym_extras_repeat1,
    STATE(194), 1,
      sym_space,
  [3264] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(109), 1,
      sym_linebreak,
    ACTIONS(375), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [3279] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(110), 1,
      sym_linebreak,
    ACTIONS(377), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [3294] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(111), 1,
      sym_linebreak,
    ACTIONS(379), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [3309] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(112), 1,
      sym_linebreak,
    ACTIONS(381), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [3324] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(107), 1,
      aux_sym_extras_repeat1,
    STATE(113), 1,
      sym_linebreak,
    STATE(205), 1,
      sym_space,
  [3349] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(114), 1,
      sym_linebreak,
    STATE(119), 1,
      aux_sym_extras_repeat1,
    STATE(201), 1,
      sym_space,
  [3374] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(359), 1,
      aux_sym_url_token1,
    ACTIONS(361), 1,
      aux_sym_url_token2,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(110), 1,
      sym_url,
    STATE(115), 1,
      sym_linebreak,
    STATE(187), 1,
      sym_space,
  [3399] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(387), 1,
      aux_sym_url_token3,
    ACTIONS(389), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(105), 1,
      aux_sym_url_repeat1,
    STATE(116), 1,
      sym_linebreak,
    STATE(154), 1,
      sym_env_var,
    ACTIONS(233), 2,
      aux_sym_file_token1,
      aux_sym_space_token1,
  [3422] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(155), 1,
      aux_sym_space_token1,
    ACTIONS(260), 1,
      anon_sym_and,
    ACTIONS(262), 1,
      anon_sym_or,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_space_repeat1,
    STATE(117), 1,
      sym_linebreak,
    STATE(189), 1,
      sym_space,
  [3447] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(387), 1,
      aux_sym_url_token3,
    ACTIONS(389), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(105), 1,
      aux_sym_url_repeat1,
    STATE(118), 1,
      sym_linebreak,
    STATE(154), 1,
      sym_env_var,
    ACTIONS(217), 2,
      aux_sym_file_token1,
      aux_sym_space_token1,
  [3470] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_RBRACK,
    ACTIONS(398), 1,
      aux_sym_space_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(222), 1,
      sym_space,
    STATE(119), 2,
      sym_linebreak,
      aux_sym_extras_repeat1,
  [3493] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(78), 1,
      sym_quoted_string,
    STATE(120), 1,
      sym_linebreak,
    STATE(184), 1,
      sym_space,
  [3518] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(121), 1,
      sym_linebreak,
    ACTIONS(401), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [3533] = 7,
    ACTIONS(182), 1,
      aux_sym_argument_token1,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    STATE(122), 1,
      sym_linebreak,
    STATE(146), 1,
      aux_sym_argument_repeat1,
    STATE(204), 2,
      sym_argument,
      sym_quoted_string,
  [3556] = 7,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    ACTIONS(348), 1,
      aux_sym_argument_token1,
    STATE(97), 1,
      aux_sym_argument_repeat1,
    STATE(123), 1,
      sym_linebreak,
    STATE(131), 2,
      sym_argument,
      sym_quoted_string,
  [3579] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(155), 1,
      aux_sym_space_token1,
    ACTIONS(260), 1,
      anon_sym_and,
    ACTIONS(262), 1,
      anon_sym_or,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_space_repeat1,
    STATE(124), 1,
      sym_linebreak,
    STATE(190), 1,
      sym_space,
  [3604] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(102), 1,
      aux_sym_extras_repeat1,
    STATE(125), 1,
      sym_linebreak,
    STATE(203), 1,
      sym_space,
  [3629] = 8,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(103), 1,
      aux_sym_extras_repeat1,
    STATE(126), 1,
      sym_linebreak,
    STATE(201), 1,
      sym_space,
  [3654] = 4,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    STATE(127), 1,
      sym_linebreak,
    ACTIONS(48), 2,
      aux_sym_url_token2,
      aux_sym_argument_token1,
    ACTIONS(50), 4,
      aux_sym_url_token1,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_space_token1,
  [3671] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(128), 1,
      sym_linebreak,
    ACTIONS(405), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [3686] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      aux_sym_url_token1,
    ACTIONS(15), 1,
      aux_sym_url_token2,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    STATE(129), 1,
      sym_linebreak,
    STATE(204), 2,
      sym_url,
      sym_quoted_string,
  [3709] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(130), 1,
      sym_linebreak,
    ACTIONS(407), 6,
      aux_sym_file_token1,
      anon_sym_SEMI,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [3724] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(131), 1,
      sym_linebreak,
    ACTIONS(409), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [3738] = 6,
    ACTIONS(44), 1,
      aux_sym_argument_token1,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    ACTIONS(245), 1,
      aux_sym_space_token1,
    STATE(132), 1,
      sym_linebreak,
    STATE(137), 1,
      aux_sym_space_repeat1,
    ACTIONS(46), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3758] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(165), 1,
      sym_version_cmp,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(133), 1,
      sym_linebreak,
    STATE(147), 1,
      sym_version_list,
    STATE(221), 1,
      sym_space,
  [3780] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(134), 1,
      sym_linebreak,
    ACTIONS(411), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [3794] = 7,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(165), 1,
      sym_version_cmp,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(135), 1,
      sym_linebreak,
    STATE(149), 1,
      sym_version_list,
    STATE(221), 1,
      sym_space,
  [3816] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(136), 1,
      sym_linebreak,
    ACTIONS(413), 5,
      aux_sym_file_token1,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
      aux_sym_space_token1,
  [3830] = 5,
    ACTIONS(37), 1,
      aux_sym_argument_token1,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    ACTIONS(415), 1,
      aux_sym_space_token1,
    ACTIONS(39), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
    STATE(137), 2,
      sym_linebreak,
      aux_sym_space_repeat1,
  [3848] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(418), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(138), 1,
      sym_linebreak,
    STATE(206), 1,
      sym_space,
  [3867] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(420), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(139), 1,
      sym_linebreak,
    STATE(192), 1,
      sym_space,
  [3886] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(422), 1,
      sym_package,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(140), 1,
      sym_linebreak,
    STATE(234), 1,
      sym_space,
  [3905] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(245), 1,
      aux_sym_space_token1,
    ACTIONS(424), 1,
      anon_sym_EQ,
    STATE(100), 1,
      sym_space,
    STATE(132), 1,
      aux_sym_space_repeat1,
    STATE(141), 1,
      sym_linebreak,
  [3924] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(321), 1,
      aux_sym_url_token3,
    STATE(142), 1,
      sym_linebreak,
    ACTIONS(319), 3,
      aux_sym_file_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_space_token1,
  [3939] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(426), 1,
      sym_package,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(143), 1,
      sym_linebreak,
    STATE(210), 1,
      sym_space,
  [3958] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(428), 1,
      sym_version,
    ACTIONS(430), 1,
      aux_sym_space_token1,
    STATE(144), 1,
      sym_linebreak,
    STATE(179), 1,
      aux_sym_space_repeat1,
    STATE(217), 1,
      sym_space,
  [3977] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(432), 1,
      sym_version_cmp,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(145), 1,
      sym_linebreak,
    STATE(237), 1,
      sym_space,
  [3996] = 5,
    ACTIONS(182), 1,
      aux_sym_argument_token1,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    STATE(146), 1,
      sym_linebreak,
    STATE(163), 1,
      aux_sym_argument_repeat1,
    ACTIONS(346), 2,
      aux_sym_file_token1,
      aux_sym_space_token1,
  [4013] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(147), 1,
      sym_linebreak,
    STATE(229), 1,
      sym_space,
  [4032] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(436), 1,
      sym_package,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(148), 1,
      sym_linebreak,
    STATE(236), 1,
      sym_space,
  [4051] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(149), 1,
      sym_linebreak,
    STATE(209), 1,
      sym_space,
  [4070] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(150), 1,
      sym_linebreak,
    ACTIONS(440), 4,
      sym_version_cmp,
      anon_sym_in,
      anon_sym_not,
      aux_sym_space_token1,
  [4083] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(337), 1,
      anon_sym_in,
    ACTIONS(339), 1,
      anon_sym_not,
    ACTIONS(442), 1,
      sym_version_cmp,
    STATE(120), 1,
      sym_marker_op,
    STATE(151), 1,
      sym_linebreak,
  [4102] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    STATE(152), 1,
      sym_linebreak,
    ACTIONS(295), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [4117] = 4,
    ACTIONS(48), 1,
      aux_sym_argument_token1,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    STATE(153), 1,
      sym_linebreak,
    ACTIONS(50), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_space_token1,
  [4132] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(333), 1,
      aux_sym_url_token3,
    STATE(154), 1,
      sym_linebreak,
    ACTIONS(331), 3,
      aux_sym_file_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_space_token1,
  [4147] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(329), 1,
      aux_sym_url_token3,
    STATE(155), 1,
      sym_linebreak,
    ACTIONS(327), 3,
      aux_sym_file_token1,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_space_token1,
  [4162] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(426), 1,
      sym_package,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(148), 1,
      sym_space,
    STATE(156), 1,
      sym_linebreak,
  [4181] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(444), 1,
      sym_version_cmp,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(157), 1,
      sym_linebreak,
    STATE(235), 1,
      sym_space,
  [4200] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(245), 1,
      aux_sym_space_token1,
    ACTIONS(446), 1,
      anon_sym_EQ,
    STATE(123), 1,
      sym_space,
    STATE(132), 1,
      aux_sym_space_repeat1,
    STATE(158), 1,
      sym_linebreak,
  [4219] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(430), 1,
      aux_sym_space_token1,
    ACTIONS(448), 1,
      sym_version,
    STATE(159), 1,
      sym_linebreak,
    STATE(179), 1,
      aux_sym_space_repeat1,
    STATE(224), 1,
      sym_space,
  [4238] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(430), 1,
      aux_sym_space_token1,
    ACTIONS(450), 1,
      sym_version,
    STATE(160), 1,
      sym_linebreak,
    STATE(179), 1,
      aux_sym_space_repeat1,
    STATE(220), 1,
      sym_space,
  [4257] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(430), 1,
      aux_sym_space_token1,
    ACTIONS(452), 1,
      sym_version,
    STATE(161), 1,
      sym_linebreak,
    STATE(179), 1,
      aux_sym_space_repeat1,
    STATE(215), 1,
      sym_space,
  [4276] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(454), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(162), 1,
      sym_linebreak,
    STATE(195), 1,
      sym_space,
  [4295] = 4,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    ACTIONS(456), 1,
      aux_sym_argument_token1,
    ACTIONS(341), 2,
      aux_sym_file_token1,
      aux_sym_space_token1,
    STATE(163), 2,
      sym_linebreak,
      aux_sym_argument_repeat1,
  [4310] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(459), 1,
      sym_package,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(143), 1,
      sym_space,
    STATE(164), 1,
      sym_linebreak,
  [4329] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(101), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(165), 1,
      sym_linebreak,
    STATE(200), 1,
      sym_space,
  [4348] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(219), 1,
      aux_sym_url_token3,
    ACTIONS(221), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(52), 1,
      aux_sym_url_repeat1,
    STATE(93), 1,
      sym_env_var,
    STATE(166), 1,
      sym_linebreak,
  [4367] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(461), 1,
      sym_package,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(167), 1,
      sym_linebreak,
    STATE(212), 1,
      sym_space,
  [4386] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(190), 1,
      aux_sym_space_token1,
    ACTIONS(463), 1,
      anon_sym_EQ,
    STATE(62), 1,
      sym_space,
    STATE(99), 1,
      aux_sym_space_repeat1,
    STATE(168), 1,
      sym_linebreak,
  [4405] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(430), 1,
      aux_sym_space_token1,
    ACTIONS(465), 1,
      sym_version,
    STATE(169), 1,
      sym_linebreak,
    STATE(179), 1,
      aux_sym_space_repeat1,
    STATE(207), 1,
      sym_space,
  [4424] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(467), 1,
      anon_sym_EQ,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(129), 1,
      sym_space,
    STATE(170), 1,
      sym_linebreak,
  [4443] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(219), 1,
      aux_sym_url_token3,
    ACTIONS(221), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(49), 1,
      aux_sym_url_repeat1,
    STATE(93), 1,
      sym_env_var,
    STATE(171), 1,
      sym_linebreak,
  [4462] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(245), 1,
      aux_sym_space_token1,
    ACTIONS(469), 1,
      anon_sym_EQ,
    STATE(122), 1,
      sym_space,
    STATE(132), 1,
      aux_sym_space_repeat1,
    STATE(172), 1,
      sym_linebreak,
  [4481] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(387), 1,
      aux_sym_url_token3,
    ACTIONS(389), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(118), 1,
      aux_sym_url_repeat1,
    STATE(154), 1,
      sym_env_var,
    STATE(173), 1,
      sym_linebreak,
  [4500] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(387), 1,
      aux_sym_url_token3,
    ACTIONS(389), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(116), 1,
      aux_sym_url_repeat1,
    STATE(154), 1,
      sym_env_var,
    STATE(174), 1,
      sym_linebreak,
  [4519] = 6,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    ACTIONS(471), 1,
      aux_sym_file_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(175), 1,
      sym_linebreak,
    STATE(196), 1,
      sym_space,
  [4538] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(176), 1,
      sym_linebreak,
    ACTIONS(473), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_space_token1,
  [4550] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(177), 1,
      sym_linebreak,
    ACTIONS(475), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_space_token1,
  [4562] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(39), 1,
      sym_version,
    ACTIONS(477), 1,
      aux_sym_space_token1,
    STATE(178), 2,
      sym_linebreak,
      aux_sym_space_repeat1,
  [4576] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(46), 1,
      sym_version,
    ACTIONS(430), 1,
      aux_sym_space_token1,
    STATE(178), 1,
      aux_sym_space_repeat1,
    STATE(179), 1,
      sym_linebreak,
  [4592] = 4,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    ACTIONS(371), 1,
      aux_sym_argument_token1,
    STATE(180), 1,
      sym_linebreak,
    ACTIONS(369), 2,
      aux_sym_file_token1,
      aux_sym_space_token1,
  [4606] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      aux_sym_url_token1,
    ACTIONS(361), 1,
      aux_sym_url_token2,
    STATE(110), 1,
      sym_url,
    STATE(181), 1,
      sym_linebreak,
  [4622] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(182), 1,
      sym_linebreak,
    ACTIONS(295), 3,
      anon_sym_DASH_DASHglobal_DASHoption,
      anon_sym_DASH_DASHconfig_DASHsettings,
      anon_sym_DASH_DASHhash,
  [4634] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(183), 1,
      sym_linebreak,
    ACTIONS(396), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_space_token1,
  [4646] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    STATE(81), 1,
      sym_quoted_string,
    STATE(184), 1,
      sym_linebreak,
  [4662] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(185), 1,
      sym_linebreak,
    ACTIONS(480), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      aux_sym_space_token1,
  [4674] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(186), 1,
      sym_linebreak,
    ACTIONS(482), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_space_token1,
  [4686] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(359), 1,
      aux_sym_url_token1,
    ACTIONS(361), 1,
      aux_sym_url_token2,
    STATE(109), 1,
      sym_url,
    STATE(187), 1,
      sym_linebreak,
  [4702] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(35), 1,
      aux_sym_space_token1,
    STATE(3), 1,
      aux_sym_space_repeat1,
    STATE(188), 1,
      sym_linebreak,
    STATE(227), 1,
      sym_space,
  [4718] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    ACTIONS(484), 1,
      anon_sym_and,
    ACTIONS(486), 1,
      anon_sym_or,
    STATE(189), 1,
      sym_linebreak,
  [4734] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      anon_sym_and,
    ACTIONS(486), 1,
      anon_sym_or,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      sym_linebreak,
  [4750] = 5,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    STATE(78), 1,
      sym_quoted_string,
    STATE(191), 1,
      sym_linebreak,
  [4766] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(490), 1,
      aux_sym_file_token1,
    ACTIONS(492), 1,
      sym_comment,
    STATE(192), 1,
      sym_linebreak,
  [4779] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
    STATE(193), 1,
      sym_linebreak,
  [4792] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      sym_linebreak,
  [4805] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(498), 1,
      aux_sym_file_token1,
    ACTIONS(500), 1,
      sym_comment,
    STATE(195), 1,
      sym_linebreak,
  [4818] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(502), 1,
      aux_sym_file_token1,
    ACTIONS(504), 1,
      sym_comment,
    STATE(196), 1,
      sym_linebreak,
  [4831] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(197), 1,
      sym_linebreak,
    ACTIONS(50), 2,
      sym_version,
      aux_sym_space_token1,
  [4842] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(198), 1,
      sym_linebreak,
    ACTIONS(506), 2,
      aux_sym_file_token1,
      aux_sym_space_token1,
  [4853] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(484), 1,
      anon_sym_and,
    ACTIONS(486), 1,
      anon_sym_or,
    STATE(199), 1,
      sym_linebreak,
  [4866] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(420), 1,
      aux_sym_file_token1,
    ACTIONS(508), 1,
      sym_comment,
    STATE(200), 1,
      sym_linebreak,
  [4879] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    STATE(201), 1,
      sym_linebreak,
  [4892] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(202), 1,
      sym_linebreak,
    ACTIONS(510), 2,
      aux_sym_file_token1,
      aux_sym_space_token1,
  [4903] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      sym_linebreak,
  [4916] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    STATE(204), 1,
      sym_linebreak,
    ACTIONS(512), 2,
      aux_sym_file_token1,
      aux_sym_space_token1,
  [4927] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      sym_linebreak,
  [4940] = 4,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(514), 1,
      aux_sym_file_token1,
    ACTIONS(516), 1,
      sym_comment,
    STATE(206), 1,
      sym_linebreak,
  [4953] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(452), 1,
      sym_version,
    STATE(207), 1,
      sym_linebreak,
  [4963] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(518), 1,
      aux_sym_file_token1,
    STATE(208), 1,
      sym_linebreak,
  [4973] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      sym_linebreak,
  [4983] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(436), 1,
      sym_package,
    STATE(210), 1,
      sym_linebreak,
  [4993] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(520), 1,
      aux_sym_env_var_token1,
    STATE(211), 1,
      sym_linebreak,
  [5003] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(422), 1,
      sym_package,
    STATE(212), 1,
      sym_linebreak,
  [5013] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(490), 1,
      aux_sym_file_token1,
    STATE(213), 1,
      sym_linebreak,
  [5023] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
    STATE(214), 1,
      sym_linebreak,
  [5033] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(524), 1,
      sym_version,
    STATE(215), 1,
      sym_linebreak,
  [5043] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(526), 1,
      anon_sym_DQUOTE,
    STATE(216), 1,
      sym_linebreak,
  [5053] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(465), 1,
      sym_version,
    STATE(217), 1,
      sym_linebreak,
  [5063] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(528), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_linebreak,
  [5073] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      sym_linebreak,
  [5083] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(448), 1,
      sym_version,
    STATE(220), 1,
      sym_linebreak,
  [5093] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(291), 1,
      sym_version_cmp,
    STATE(221), 1,
      sym_linebreak,
  [5103] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      sym_linebreak,
  [5113] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(532), 1,
      aux_sym_file_token1,
    STATE(223), 1,
      sym_linebreak,
  [5123] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(534), 1,
      sym_version,
    STATE(224), 1,
      sym_linebreak,
  [5133] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_linebreak,
  [5143] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(420), 1,
      aux_sym_file_token1,
    STATE(226), 1,
      sym_linebreak,
  [5153] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(538), 1,
      anon_sym_in,
    STATE(227), 1,
      sym_linebreak,
  [5163] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(540), 1,
      aux_sym_file_token1,
    STATE(228), 1,
      sym_linebreak,
  [5173] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      sym_linebreak,
  [5183] = 3,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    ACTIONS(544), 1,
      aux_sym_quoted_string_token2,
    STATE(230), 1,
      sym_linebreak,
  [5193] = 3,
    ACTIONS(188), 1,
      anon_sym_BSLASH,
    ACTIONS(546), 1,
      aux_sym_quoted_string_token1,
    STATE(231), 1,
      sym_linebreak,
  [5203] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(548), 1,
      aux_sym_env_var_token1,
    STATE(232), 1,
      sym_linebreak,
  [5213] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(550), 1,
      aux_sym_file_token1,
    STATE(233), 1,
      sym_linebreak,
  [5223] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(552), 1,
      sym_package,
    STATE(234), 1,
      sym_linebreak,
  [5233] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(432), 1,
      sym_version_cmp,
    STATE(235), 1,
      sym_linebreak,
  [5243] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(554), 1,
      sym_package,
    STATE(236), 1,
      sym_linebreak,
  [5253] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(556), 1,
      sym_version_cmp,
    STATE(237), 1,
      sym_linebreak,
  [5263] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(101), 1,
      aux_sym_file_token1,
    STATE(238), 1,
      sym_linebreak,
  [5273] = 3,
    ACTIONS(3), 1,
      anon_sym_BSLASH,
    ACTIONS(558), 1,
      ts_builtin_sym_end,
    STATE(239), 1,
      sym_linebreak,
  [5283] = 1,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
  [5287] = 1,
    ACTIONS(562), 1,
      ts_builtin_sym_end,
  [5291] = 1,
    ACTIONS(564), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 164,
  [SMALL_STATE(6)] = 242,
  [SMALL_STATE(7)] = 322,
  [SMALL_STATE(8)] = 387,
  [SMALL_STATE(9)] = 425,
  [SMALL_STATE(10)] = 463,
  [SMALL_STATE(11)] = 501,
  [SMALL_STATE(12)] = 539,
  [SMALL_STATE(13)] = 577,
  [SMALL_STATE(14)] = 615,
  [SMALL_STATE(15)] = 653,
  [SMALL_STATE(16)] = 691,
  [SMALL_STATE(17)] = 729,
  [SMALL_STATE(18)] = 767,
  [SMALL_STATE(19)] = 805,
  [SMALL_STATE(20)] = 850,
  [SMALL_STATE(21)] = 895,
  [SMALL_STATE(22)] = 940,
  [SMALL_STATE(23)] = 985,
  [SMALL_STATE(24)] = 1030,
  [SMALL_STATE(25)] = 1075,
  [SMALL_STATE(26)] = 1120,
  [SMALL_STATE(27)] = 1156,
  [SMALL_STATE(28)] = 1192,
  [SMALL_STATE(29)] = 1228,
  [SMALL_STATE(30)] = 1264,
  [SMALL_STATE(31)] = 1322,
  [SMALL_STATE(32)] = 1358,
  [SMALL_STATE(33)] = 1394,
  [SMALL_STATE(34)] = 1430,
  [SMALL_STATE(35)] = 1461,
  [SMALL_STATE(36)] = 1490,
  [SMALL_STATE(37)] = 1542,
  [SMALL_STATE(38)] = 1568,
  [SMALL_STATE(39)] = 1607,
  [SMALL_STATE(40)] = 1635,
  [SMALL_STATE(41)] = 1663,
  [SMALL_STATE(42)] = 1691,
  [SMALL_STATE(43)] = 1719,
  [SMALL_STATE(44)] = 1747,
  [SMALL_STATE(45)] = 1783,
  [SMALL_STATE(46)] = 1811,
  [SMALL_STATE(47)] = 1847,
  [SMALL_STATE(48)] = 1875,
  [SMALL_STATE(49)] = 1898,
  [SMALL_STATE(50)] = 1925,
  [SMALL_STATE(51)] = 1948,
  [SMALL_STATE(52)] = 1973,
  [SMALL_STATE(53)] = 2000,
  [SMALL_STATE(54)] = 2023,
  [SMALL_STATE(55)] = 2046,
  [SMALL_STATE(56)] = 2069,
  [SMALL_STATE(57)] = 2092,
  [SMALL_STATE(58)] = 2110,
  [SMALL_STATE(59)] = 2140,
  [SMALL_STATE(60)] = 2172,
  [SMALL_STATE(61)] = 2204,
  [SMALL_STATE(62)] = 2222,
  [SMALL_STATE(63)] = 2252,
  [SMALL_STATE(64)] = 2270,
  [SMALL_STATE(65)] = 2300,
  [SMALL_STATE(66)] = 2330,
  [SMALL_STATE(67)] = 2348,
  [SMALL_STATE(68)] = 2376,
  [SMALL_STATE(69)] = 2394,
  [SMALL_STATE(70)] = 2422,
  [SMALL_STATE(71)] = 2440,
  [SMALL_STATE(72)] = 2468,
  [SMALL_STATE(73)] = 2498,
  [SMALL_STATE(74)] = 2528,
  [SMALL_STATE(75)] = 2556,
  [SMALL_STATE(76)] = 2586,
  [SMALL_STATE(77)] = 2616,
  [SMALL_STATE(78)] = 2643,
  [SMALL_STATE(79)] = 2660,
  [SMALL_STATE(80)] = 2677,
  [SMALL_STATE(81)] = 2694,
  [SMALL_STATE(82)] = 2711,
  [SMALL_STATE(83)] = 2728,
  [SMALL_STATE(84)] = 2745,
  [SMALL_STATE(85)] = 2762,
  [SMALL_STATE(86)] = 2779,
  [SMALL_STATE(87)] = 2796,
  [SMALL_STATE(88)] = 2813,
  [SMALL_STATE(89)] = 2830,
  [SMALL_STATE(90)] = 2849,
  [SMALL_STATE(91)] = 2866,
  [SMALL_STATE(92)] = 2883,
  [SMALL_STATE(93)] = 2902,
  [SMALL_STATE(94)] = 2921,
  [SMALL_STATE(95)] = 2949,
  [SMALL_STATE(96)] = 2967,
  [SMALL_STATE(97)] = 2991,
  [SMALL_STATE(98)] = 3011,
  [SMALL_STATE(99)] = 3031,
  [SMALL_STATE(100)] = 3053,
  [SMALL_STATE(101)] = 3076,
  [SMALL_STATE(102)] = 3101,
  [SMALL_STATE(103)] = 3126,
  [SMALL_STATE(104)] = 3151,
  [SMALL_STATE(105)] = 3176,
  [SMALL_STATE(106)] = 3197,
  [SMALL_STATE(107)] = 3214,
  [SMALL_STATE(108)] = 3239,
  [SMALL_STATE(109)] = 3264,
  [SMALL_STATE(110)] = 3279,
  [SMALL_STATE(111)] = 3294,
  [SMALL_STATE(112)] = 3309,
  [SMALL_STATE(113)] = 3324,
  [SMALL_STATE(114)] = 3349,
  [SMALL_STATE(115)] = 3374,
  [SMALL_STATE(116)] = 3399,
  [SMALL_STATE(117)] = 3422,
  [SMALL_STATE(118)] = 3447,
  [SMALL_STATE(119)] = 3470,
  [SMALL_STATE(120)] = 3493,
  [SMALL_STATE(121)] = 3518,
  [SMALL_STATE(122)] = 3533,
  [SMALL_STATE(123)] = 3556,
  [SMALL_STATE(124)] = 3579,
  [SMALL_STATE(125)] = 3604,
  [SMALL_STATE(126)] = 3629,
  [SMALL_STATE(127)] = 3654,
  [SMALL_STATE(128)] = 3671,
  [SMALL_STATE(129)] = 3686,
  [SMALL_STATE(130)] = 3709,
  [SMALL_STATE(131)] = 3724,
  [SMALL_STATE(132)] = 3738,
  [SMALL_STATE(133)] = 3758,
  [SMALL_STATE(134)] = 3780,
  [SMALL_STATE(135)] = 3794,
  [SMALL_STATE(136)] = 3816,
  [SMALL_STATE(137)] = 3830,
  [SMALL_STATE(138)] = 3848,
  [SMALL_STATE(139)] = 3867,
  [SMALL_STATE(140)] = 3886,
  [SMALL_STATE(141)] = 3905,
  [SMALL_STATE(142)] = 3924,
  [SMALL_STATE(143)] = 3939,
  [SMALL_STATE(144)] = 3958,
  [SMALL_STATE(145)] = 3977,
  [SMALL_STATE(146)] = 3996,
  [SMALL_STATE(147)] = 4013,
  [SMALL_STATE(148)] = 4032,
  [SMALL_STATE(149)] = 4051,
  [SMALL_STATE(150)] = 4070,
  [SMALL_STATE(151)] = 4083,
  [SMALL_STATE(152)] = 4102,
  [SMALL_STATE(153)] = 4117,
  [SMALL_STATE(154)] = 4132,
  [SMALL_STATE(155)] = 4147,
  [SMALL_STATE(156)] = 4162,
  [SMALL_STATE(157)] = 4181,
  [SMALL_STATE(158)] = 4200,
  [SMALL_STATE(159)] = 4219,
  [SMALL_STATE(160)] = 4238,
  [SMALL_STATE(161)] = 4257,
  [SMALL_STATE(162)] = 4276,
  [SMALL_STATE(163)] = 4295,
  [SMALL_STATE(164)] = 4310,
  [SMALL_STATE(165)] = 4329,
  [SMALL_STATE(166)] = 4348,
  [SMALL_STATE(167)] = 4367,
  [SMALL_STATE(168)] = 4386,
  [SMALL_STATE(169)] = 4405,
  [SMALL_STATE(170)] = 4424,
  [SMALL_STATE(171)] = 4443,
  [SMALL_STATE(172)] = 4462,
  [SMALL_STATE(173)] = 4481,
  [SMALL_STATE(174)] = 4500,
  [SMALL_STATE(175)] = 4519,
  [SMALL_STATE(176)] = 4538,
  [SMALL_STATE(177)] = 4550,
  [SMALL_STATE(178)] = 4562,
  [SMALL_STATE(179)] = 4576,
  [SMALL_STATE(180)] = 4592,
  [SMALL_STATE(181)] = 4606,
  [SMALL_STATE(182)] = 4622,
  [SMALL_STATE(183)] = 4634,
  [SMALL_STATE(184)] = 4646,
  [SMALL_STATE(185)] = 4662,
  [SMALL_STATE(186)] = 4674,
  [SMALL_STATE(187)] = 4686,
  [SMALL_STATE(188)] = 4702,
  [SMALL_STATE(189)] = 4718,
  [SMALL_STATE(190)] = 4734,
  [SMALL_STATE(191)] = 4750,
  [SMALL_STATE(192)] = 4766,
  [SMALL_STATE(193)] = 4779,
  [SMALL_STATE(194)] = 4792,
  [SMALL_STATE(195)] = 4805,
  [SMALL_STATE(196)] = 4818,
  [SMALL_STATE(197)] = 4831,
  [SMALL_STATE(198)] = 4842,
  [SMALL_STATE(199)] = 4853,
  [SMALL_STATE(200)] = 4866,
  [SMALL_STATE(201)] = 4879,
  [SMALL_STATE(202)] = 4892,
  [SMALL_STATE(203)] = 4903,
  [SMALL_STATE(204)] = 4916,
  [SMALL_STATE(205)] = 4927,
  [SMALL_STATE(206)] = 4940,
  [SMALL_STATE(207)] = 4953,
  [SMALL_STATE(208)] = 4963,
  [SMALL_STATE(209)] = 4973,
  [SMALL_STATE(210)] = 4983,
  [SMALL_STATE(211)] = 4993,
  [SMALL_STATE(212)] = 5003,
  [SMALL_STATE(213)] = 5013,
  [SMALL_STATE(214)] = 5023,
  [SMALL_STATE(215)] = 5033,
  [SMALL_STATE(216)] = 5043,
  [SMALL_STATE(217)] = 5053,
  [SMALL_STATE(218)] = 5063,
  [SMALL_STATE(219)] = 5073,
  [SMALL_STATE(220)] = 5083,
  [SMALL_STATE(221)] = 5093,
  [SMALL_STATE(222)] = 5103,
  [SMALL_STATE(223)] = 5113,
  [SMALL_STATE(224)] = 5123,
  [SMALL_STATE(225)] = 5133,
  [SMALL_STATE(226)] = 5143,
  [SMALL_STATE(227)] = 5153,
  [SMALL_STATE(228)] = 5163,
  [SMALL_STATE(229)] = 5173,
  [SMALL_STATE(230)] = 5183,
  [SMALL_STATE(231)] = 5193,
  [SMALL_STATE(232)] = 5203,
  [SMALL_STATE(233)] = 5213,
  [SMALL_STATE(234)] = 5223,
  [SMALL_STATE(235)] = 5233,
  [SMALL_STATE(236)] = 5243,
  [SMALL_STATE(237)] = 5253,
  [SMALL_STATE(238)] = 5263,
  [SMALL_STATE(239)] = 5273,
  [SMALL_STATE(240)] = 5283,
  [SMALL_STATE(241)] = 5287,
  [SMALL_STATE(242)] = 5291,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_space_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_space_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_space_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_space, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_space, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_space_repeat1, 1, 0, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_space_repeat1, 1, 0, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(174),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(202),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(170),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 3, 0, 9),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 3, 0, 9),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 3, 0, 10),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 3, 0, 10),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 3, 0, 11),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 3, 0, 11),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 5, 0, 18),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 5, 0, 18),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 1, 0, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 1, 0, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 4, 0, 13),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 4, 0, 13),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 5, 0, 19),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 5, 0, 19),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 4, 0, 17),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 4, 0, 17),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 4, 0, 12),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 4, 0, 12),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2, 0, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2, 0, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_requirement, 1, 0, 0), SHIFT(4),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_space_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 2, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_requirement, 2, 0, 0), SHIFT(4),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_list_repeat1, 2, 0, 0),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_list_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_version_list_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_list, 4, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_list, 5, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_list, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 3, 0, 0),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_requirement, 3, 0, 0), SHIFT(4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_list, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_or, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2, 0, 7),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_and, 3, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2, 0, 6),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_or, 5, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_and, 5, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_and, 4, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_or, 4, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 4, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 5, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 3, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 4, 0, 0),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_requirement, 4, 0, 0), SHIFT(4),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 7, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 3, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 8, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_requirement_repeat1, 2, 0, 0),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirement_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_requirement_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extras, 6, 0, 0),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 4, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 5, 0, 0),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_requirement, 5, 0, 0), SHIFT(4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_spec, 2, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_expr, 4, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 15),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_paren, 4, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_expr, 5, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 16),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_expr, 3, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_paren, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_list_repeat1, 4, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_paren, 5, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_list_repeat1, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_env_var, 3, 0, 14),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_env_var, 3, 0, 14),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_list_repeat1, 6, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_version_list_repeat1, 5, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 1, 0, 5),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 1, 0, 5),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 1, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_space_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_repeat1, 2, 0, 0), SHIFT_REPEAT(232),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_repeat1, 1, 0, 8),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 1, 0, 8),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 4, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 1, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extras_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extras_repeat1, 2, 0, 0),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extras_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 5, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_spec, 2, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version_spec, 4, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement_opt, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_requirement_repeat1, 1, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement_opt, 4, 0, 0),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_space_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_var, 1, 0, 0),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argument_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extras_repeat1, 3, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 3, 0, 0),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_space_repeat1, 2, 0, 0), SHIFT_REPEAT(197),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extras_repeat1, 4, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_marker_op, 1, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 2, 0, 0),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 1, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_opt, 3, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [558] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 2, 0, 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 3, 0, 9),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linebreak, 4, 0, 12),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_requirements(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_package,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
