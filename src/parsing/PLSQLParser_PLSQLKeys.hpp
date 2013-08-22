/** \file
 *  This C++ header file was generated by $ANTLR version 3.5.1-SNAPSHOT
 *
 *     -  From the grammar source file : PLSQLKeys.g
 *     -                            On : 2013-06-21 14:01:13
 *     -                for the parser : PLSQLParser_PLSQLKeysParser
 *
 * Editing it, at least manually, is not wise.
 *
 * C++ language generator and runtime by Gokulakannan Somasundaram ( heavy lifting from C Run-time by Jim Idle )
 *
 *
 * The parser PLSQLParser_PLSQLKeys has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 *
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Gokulakannan Somasundaram. 
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_PLSQLParser_PLSQLKeys_H
#define _PLSQLParser_PLSQLKeys_H
/* =============================================================================
 * Standard antlr3 C++ runtime definitions
 */
#include <antlr3.hpp>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */


 	#include "UserTraits.hpp"
// 	#include "PLSQLLexer.hpp"            




/**
 * Oracle(c) PL/SQL 11g Parser  
 *
 * Copyright (c) 2009-2011 Alexandre Porcelli <alexandre.porcelli@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifdef	WIN32
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/* ========================
 * BACKTRACKING IS ENABLED
 * ========================
 */

namespace 
         User
 {

// Include delegator definition classes
//
class PLSQLParser; 

typedef PLSQLParser_PLSQLKeysTraits PLSQLParser_PLSQLKeysImplTraits;


class PLSQLParser_PLSQLKeysTokens
{
public:
	/** Symbolic definitions of all the tokens that the parser will work with.
	 *
	 * Antlr will define EOF, but we can't use that as it it is too common in
	 * in C header files and that would be confusing. There is no way to filter this out at the moment
	 * so we just undef it here for now. That isn't the value we get back from C recognizers
	 * anyway. We are looking for ANTLR_TOKEN_EOF.
	 */
	enum Tokens 
	{
		EOF_TOKEN = PLSQLParser_PLSQLKeysImplTraits::CommonTokenType::TOKEN_EOF
		, AMPERSAND = 4 
		, APPROXIMATE_NUM_LIT = 5 
		, ASSIGN_OP = 6 
		, ASTERISK = 7 
		, AT_SIGN = 8 
		, BINDVAR = 9 
		, BIT_STRING_LIT = 10 
		, CARRET_OPERATOR_PART = 11 
		, CHAR_STRING = 12 
		, CHAR_STRING_PERL = 13 
		, COLON = 14 
		, COMMA = 15 
		, COMMENT = 16 
		, CONCATENATION_OP = 17 
		, DELIMITED_ID = 18 
		, DOUBLE_ASTERISK = 19 
		, DOUBLE_PERIOD = 20 
		, EQUALS_OP = 21 
		, EXACT_NUM_LIT = 22 
		, EXCLAMATION_OPERATOR_PART = 23 
		, FOR_NOTATION = 24 
		, GREATER_THAN_OP = 25 
		, GREATER_THAN_OR_EQUALS_OP = 26 
		, HEX_STRING_LIT = 27 
		, INTRODUCER = 28 
		, LEFT_BRACKET = 29 
		, LEFT_PAREN = 30 
		, LESS_THAN_OP = 31 
		, LESS_THAN_OR_EQUALS_OP = 32 
		, MINUS_SIGN = 33 
		, NATIONAL_CHAR_STRING_LIT = 34 
		, NEWLINE = 35 
		, NOT_EQUAL_OP = 36 
		, PERCENT = 37 
		, PERIOD = 38 
		, PLSQL_NON_RESERVED_CONNECT_BY_ROOT = 39 
		, PLSQL_NON_RESERVED_ELSIF = 40 
		, PLSQL_NON_RESERVED_MODEL = 41 
		, PLSQL_NON_RESERVED_PIVOT = 42 
		, PLSQL_NON_RESERVED_UNPIVOT = 43 
		, PLSQL_NON_RESERVED_USING = 44 
		, PLSQL_RESERVED_CLUSTERS = 45 
		, PLSQL_RESERVED_COLAUTH = 46 
		, PLSQL_RESERVED_COMPRESS = 47 
		, PLSQL_RESERVED_CRASH = 48 
		, PLSQL_RESERVED_EXCLUSIVE = 49 
		, PLSQL_RESERVED_IDENTIFIED = 50 
		, PLSQL_RESERVED_IF = 51 
		, PLSQL_RESERVED_INDEX = 52 
		, PLSQL_RESERVED_INDEXES = 53 
		, PLSQL_RESERVED_LOCK = 54 
		, PLSQL_RESERVED_MINUS = 55 
		, PLSQL_RESERVED_MODE = 56 
		, PLSQL_RESERVED_NOCOMPRESS = 57 
		, PLSQL_RESERVED_NOWAIT = 58 
		, PLSQL_RESERVED_RESOURCE = 59 
		, PLSQL_RESERVED_SHARE = 60 
		, PLSQL_RESERVED_START = 61 
		, PLSQL_RESERVED_TABAUTH = 62 
		, PLSQL_RESERVED_VIEWS = 63 
		, PLUS_SIGN = 64 
		, PROMPT = 65 
		, QS_ANGLE = 66 
		, QS_BRACE = 67 
		, QS_BRACK = 68 
		, QS_OTHER = 69 
		, QS_OTHER_CH = 70 
		, QS_PAREN = 71 
		, QUESTION_MARK = 72 
		, QUOTE = 73 
		, REGULAR_ID = 74 
		, RIGHT_BRACKET = 75 
		, RIGHT_PAREN = 76 
		, SEMICOLON = 77 
		, SEPARATOR = 78 
		, SIMPLE_LETTER = 79 
		, SOLIDUS = 80 
		, SPACE = 81 
		, SQL92_RESERVED_ALL = 82 
		, SQL92_RESERVED_ALTER = 83 
		, SQL92_RESERVED_AND = 84 
		, SQL92_RESERVED_ANY = 85 
		, SQL92_RESERVED_AS = 86 
		, SQL92_RESERVED_ASC = 87 
		, SQL92_RESERVED_BEGIN = 88 
		, SQL92_RESERVED_BETWEEN = 89 
		, SQL92_RESERVED_BY = 90 
		, SQL92_RESERVED_CASE = 91 
		, SQL92_RESERVED_CHECK = 92 
		, SQL92_RESERVED_CONNECT = 93 
		, SQL92_RESERVED_CREATE = 94 
		, SQL92_RESERVED_CURRENT = 95 
		, SQL92_RESERVED_CURSOR = 96 
		, SQL92_RESERVED_DATE = 97 
		, SQL92_RESERVED_DECLARE = 98 
		, SQL92_RESERVED_DEFAULT = 99 
		, SQL92_RESERVED_DELETE = 100 
		, SQL92_RESERVED_DESC = 101 
		, SQL92_RESERVED_DISTINCT = 102 
		, SQL92_RESERVED_DROP = 103 
		, SQL92_RESERVED_ELSE = 104 
		, SQL92_RESERVED_END = 105 
		, SQL92_RESERVED_EXCEPTION = 106 
		, SQL92_RESERVED_EXISTS = 107 
		, SQL92_RESERVED_FALSE = 108 
		, SQL92_RESERVED_FETCH = 109 
		, SQL92_RESERVED_FOR = 110 
		, SQL92_RESERVED_FROM = 111 
		, SQL92_RESERVED_GOTO = 112 
		, SQL92_RESERVED_GRANT = 113 
		, SQL92_RESERVED_GROUP = 114 
		, SQL92_RESERVED_HAVING = 115 
		, SQL92_RESERVED_IN = 116 
		, SQL92_RESERVED_INSERT = 117 
		, SQL92_RESERVED_INTERSECT = 118 
		, SQL92_RESERVED_INTO = 119 
		, SQL92_RESERVED_IS = 120 
		, SQL92_RESERVED_LIKE = 121 
		, SQL92_RESERVED_NOT = 122 
		, SQL92_RESERVED_NULL = 123 
		, SQL92_RESERVED_OF = 124 
		, SQL92_RESERVED_ON = 125 
		, SQL92_RESERVED_OPTION = 126 
		, SQL92_RESERVED_OR = 127 
		, SQL92_RESERVED_ORDER = 128 
		, SQL92_RESERVED_OVERLAPS = 129 
		, SQL92_RESERVED_PRIOR = 130 
		, SQL92_RESERVED_PROCEDURE = 131 
		, SQL92_RESERVED_PUBLIC = 132 
		, SQL92_RESERVED_REVOKE = 133 
		, SQL92_RESERVED_SELECT = 134 
		, SQL92_RESERVED_SIZE = 135 
		, SQL92_RESERVED_TABLE = 136 
		, SQL92_RESERVED_THE = 137 
		, SQL92_RESERVED_THEN = 138 
		, SQL92_RESERVED_TO = 139 
		, SQL92_RESERVED_TRUE = 140 
		, SQL92_RESERVED_UNION = 141 
		, SQL92_RESERVED_UNIQUE = 142 
		, SQL92_RESERVED_UPDATE = 143 
		, SQL92_RESERVED_VALUES = 144 
		, SQL92_RESERVED_VIEW = 145 
		, SQL92_RESERVED_WHEN = 146 
		, SQL92_RESERVED_WHERE = 147 
		, SQL92_RESERVED_WITH = 148 
		, TILDE_OPERATOR_PART = 149 
		, UNDERSCORE = 150 
		, UNSIGNED_INTEGER = 151 
		, VERTICAL_BAR = 152 
		, ZV = 153 
	};

	const ANTLR_UINT8* getTokenName(ANTLR_INT32 index) const;

protected:
	static ANTLR_UINT8* TokenNames[];
};

/** Context tracking structure for PLSQLParser_PLSQLKeys
 */
class PLSQLParser_PLSQLKeys : public PLSQLParser_PLSQLKeysImplTraits::BaseParserType
    , public PLSQLParser_PLSQLKeysTokens
    , PLSQLParser_PLSQLKeysImplTraits::TreeAdaptorType
{
public:
	typedef PLSQLParser_PLSQLKeysImplTraits ImplTraits;
	typedef PLSQLParser_PLSQLKeys ComponentType;
	typedef ComponentType::StreamType StreamType;
	typedef PLSQLParser_PLSQLKeysImplTraits::BaseParserType BaseType;
	typedef ImplTraits::RecognizerSharedStateType<StreamType> RecognizerSharedStateType;
	typedef StreamType InputType;
	typedef PLSQLParser_PLSQLKeysImplTraits::CommonTokenType CommonTokenType;
	typedef PLSQLParser_PLSQLKeysImplTraits::TreeAdaptorType TreeAdaptorType;

	static const bool IsFiltered = false;


private:	
	PLSQLParser*	 m_gPLSQLParser;
public:
    PLSQLParser_PLSQLKeys(InputType* instream, PLSQLParser* gPLSQLParser);
    PLSQLParser_PLSQLKeys(InputType* instream, RecognizerSharedStateType* state, PLSQLParser* gPLSQLParser);

    void init(InputType* instream , PLSQLParser* gPLSQLParser );


     void create_key (); 
     void replace_key (); 
     void package_key (); 
     void body_key (); 
     void begin_key (); 
     void exit_key (); 
     void declare_key (); 
     void exception_key (); 
     void serveroutput_key (); 
     void off_key (); 
     void constant_key (); 
     void subtype_key (); 
     void cursor_key (); 
     void nextval_key (); 
     void goto_key (); 
     void execute_key (); 
     void immediate_key (); 
     void return_key (); 
     void procedure_key (); 
     void function_key (); 
     void pragma_key (); 
     void exception_init_key (); 
     void type_key (); 
     void record_key (); 
     void indexed_key (); 
     void index_key (); 
     void percent_notfound_key (); 
     void percent_found_key (); 
     void percent_isopen_key (); 
     void percent_rowcount_key (); 
     void percent_rowtype_key (); 
     void percent_type_key (); 
     void out_key (); 
     void inout_key (); 
     void extend_key (); 
     void raise_key (); 
     void while_key (); 
     void loop_key (); 
     void commit_key (); 
     void work_key (); 
     void if_key (); 
     void elsif_key (); 
     void authid_key (); 
     void definer_key (); 
     void external_key (); 
     void language_key (); 
     void java_key (); 
     void name_key (); 
     void deterministic_key (); 
     void parallel_enable_key (); 
     void result_cache_key (); 
     void pipelined_key (); 
     void aggregate_key (); 
     void alter_key (); 
     void compile_key (); 
     void debug_key (); 
     void reuse_key (); 
     void settings_key (); 
     void specification_key (); 
     void drop_key (); 
     void trigger_key (); 
     void force_key (); 
     void validate_key (); 
     void ref_key (); 
     void array_key (); 
     void varray_key (); 
     void pls_integer_key (); 
     void serially_reusable_key (); 
     void autonomous_transaction_key (); 
     void inline_key (); 
     void restrict_references_key (); 
     void exceptions_key (); 
     void save_key (); 
     void forall_key (); 
     void continue_key (); 
     void indices_key (); 
     void values_key (); 
     void case_key (); 
     void bulk_key (); 
     void collect_key (); 
     void committed_key (); 
     void use_key (); 
     void level_key (); 
     void isolation_key (); 
     void serializable_key (); 
     void segment_key (); 
     void write_key (); 
     void wait_key (); 
     void corrupt_xid_all_key (); 
     void corrupt_xid_key (); 
     void batch_key (); 
     void session_key (); 
     void role_key (); 
     void constraint_key (); 
     void constraints_key (); 
     void call_key (); 
     void explain_key (); 
     void merge_key (); 
     void plan_key (); 
     void system_key (); 
     void subpartition_key (); 
     void partition_key (); 
     void matched_key (); 
     void reject_key (); 
     void log_key (); 
     void unlimited_key (); 
     void limit_key (); 
     void errors_key (); 
     void timestamp_tz_unconstrained_key (); 
     void urowid_key (); 
     void binary_float_min_subnormal_key (); 
     void binary_double_min_normal_key (); 
     void binary_float_max_normal_key (); 
     void positiven_key (); 
     void timezone_abbr_key (); 
     void binary_double_min_subnormal_key (); 
     void binary_float_max_subnormal_key (); 
     void binary_double_key (); 
     void bfile_key (); 
     void binary_double_infinity_key (); 
     void timezone_region_key (); 
     void timestamp_ltz_unconstrained_key (); 
     void naturaln_key (); 
     void simple_integer_key (); 
     void binary_double_max_subnormal_key (); 
     void byte_key (); 
     void binary_float_infinity_key (); 
     void binary_float_key (); 
     void range_key (); 
     void nclob_key (); 
     void clob_key (); 
     void dsinterval_unconstrained_key (); 
     void yminterval_unconstrained_key (); 
     void rowid_key (); 
     void binary_double_nan_key (); 
     void timestamp_unconstrained_key (); 
     void binary_float_min_normal_key (); 
     void signtype_key (); 
     void blob_key (); 
     void nvarchar2_key (); 
     void binary_double_max_normal_key (); 
     void binary_float_nan_key (); 
     void string_key (); 
     void c_key (); 
     void library_key (); 
     void context_key (); 
     void parameters_key (); 
     void agent_key (); 
     void cluster_key (); 
     void hash_key (); 
     void relies_on_key (); 
     void returning_key (); 
     void statement_id_key (); 
     void deferred_key (); 
     void advise_key (); 
     void resumable_key (); 
     void timeout_key (); 
     void parallel_key (); 
     void ddl_key (); 
     void query_key (); 
     void dml_key (); 
     void guard_key (); 
     void nothing_key (); 
     void enable_key (); 
     void database_key (); 
     void disable_key (); 
     void link_key (); 
     void identified_key (); 
     void none_key (); 
     void before_key (); 
     void referencing_key (); 
     void logon_key (); 
     void after_key (); 
     void schema_key (); 
     void grant_key (); 
     void truncate_key (); 
     void startup_key (); 
     void statistics_key (); 
     void noaudit_key (); 
     void suspend_key (); 
     void audit_key (); 
     void disassociate_key (); 
     void shutdown_key (); 
     void compound_key (); 
     void servererror_key (); 
     void parent_key (); 
     void follows_key (); 
     void nested_key (); 
     void old_key (); 
     void statement_key (); 
     void db_role_change_key (); 
     void each_key (); 
     void logoff_key (); 
     void analyze_key (); 
     void instead_key (); 
     void associate_key (); 
     void new_key (); 
     void revoke_key (); 
     void rename_key (); 
     void customdatum_key (); 
     void oradata_key (); 
     void constructor_key (); 
     void sqldata_key (); 
     void member_key (); 
     void self_key (); 
     void object_key (); 
     void variable_key (); 
     void instantiable_key (); 
     void final_key (); 
     void static_key (); 
     void oid_key (); 
     void result_key (); 
     void under_key (); 
     void map_key (); 
     void overriding_key (); 
     void add_key (); 
     void modify_key (); 
     void including_key (); 
     void substitutable_key (); 
     void attribute_key (); 
     void cascade_key (); 
     void data_key (); 
     void invalidate_key (); 
     void element_key (); 
     void first_key (); 
     void check_key (); 
     void option_key (); 
     void nocycle_key (); 
     void locked_key (); 
     void block_key (); 
     void xml_key (); 
     void pivot_key (); 
     void prior_key (); 
     void sequential_key (); 
     void single_key (); 
     void skip_key (); 
     void model_key (); 
     void updated_key (); 
     void increment_key (); 
     void exclude_key (); 
     void reference_key (); 
     void sets_key (); 
     void until_key (); 
     void seed_key (); 
     void maxvalue_key (); 
     void siblings_key (); 
     void cube_key (); 
     void nulls_key (); 
     void dimension_key (); 
     void scn_key (); 
     void snapshot_key (); 
     void decrement_key (); 
     void unpivot_key (); 
     void keep_key (); 
     void measures_key (); 
     void rows_key (); 
     void sample_key (); 
     void upsert_key (); 
     void versions_key (); 
     void rules_key (); 
     void iterate_key (); 
     void minvalue_key (); 
     void rollup_key (); 
     void nav_key (); 
     void automatic_key (); 
     void last_key (); 
     void main_key (); 
     void grouping_key (); 
     void include_key (); 
     void ignore_key (); 
     void respect_key (); 
     void unique_key (); 
     void submultiset_key (); 
     void at_key (); 
     void a_key (); 
     void empty_key (); 
     void likec_key (); 
     void nan_key (); 
     void infinite_key (); 
     void like2_key (); 
     void like4_key (); 
     void present_key (); 
     void dbtimezone_key (); 
     void sessiontimezone_key (); 
     void nchar_cs_key (); 
     void decompose_key (); 
     void following_key (); 
     void first_value_key (); 
     void preceding_key (); 
     void within_key (); 
     void canonical_key (); 
     void compatibility_key (); 
     void over_key (); 
     void multiset_key (); 
     void connect_by_root_key (); 
     void last_value_key (); 
     void current_key (); 
     void unbounded_key (); 
     void dense_rank_key (); 
     void cost_key (); 
     void char_cs_key (); 
     void auto_key (); 
     void treat_key (); 
     void content_key (); 
     void xmlparse_key (); 
     void xmlelement_key (); 
     void entityescaping_key (); 
     void standalone_key (); 
     void wellformed_key (); 
     void xmlexists_key (); 
     void version_key (); 
     void xmlcast_key (); 
     void yes_key (); 
     void no_key (); 
     void evalname_key (); 
     void xmlpi_key (); 
     void xmlcolattval_key (); 
     void document_key (); 
     void xmlforest_key (); 
     void passing_key (); 
     void columns_key (); 
     void indent_key (); 
     void hide_key (); 
     void xmlagg_key (); 
     void path_key (); 
     void xmlnamespaces_key (); 
     void size_key (); 
     void noschemacheck_key (); 
     void noentityescaping_key (); 
     void xmlquery_key (); 
     void xmltable_key (); 
     void xmlroot_key (); 
     void schemacheck_key (); 
     void xmlattributes_key (); 
     void encoding_key (); 
     void show_key (); 
     void xmlserialize_key (); 
     void ordinality_key (); 
     void defaults_key (); 
     void sqlerror_key (); 
     void oserror_key (); 
     void success_key (); 
     void warning_key (); 
     void failure_key (); 
     void insert_key (); 
     void order_key (); 
     void minus_key (); 
     void row_key (); 
     void mod_key (); 
     void raw_key (); 
     void power_key (); 
     void lock_key (); 
     void exists_key (); 
     void having_key (); 
     void any_key (); 
     void with_key (); 
     void transaction_key (); 
     void rawtohex_key (); 
     void number_key (); 
     void nocopy_key (); 
     void to_key (); 
     void abs_key (); 
     void rollback_key (); 
     void share_key (); 
     void greatest_key (); 
     void vsize_key (); 
     void exclusive_key (); 
     void varchar2_key (); 
     void rowidtochar_key (); 
     void open_key (); 
     void comment_key (); 
     void sqrt_key (); 
     void instr_key (); 
     void nowait_key (); 
     void lpad_key (); 
     void boolean_key (); 
     void rpad_key (); 
     void savepoint_key (); 
     void decode_key (); 
     void reverse_key (); 
     void least_key (); 
     void nvl_key (); 
     void variance_key (); 
     void start_key (); 
     void desc_key (); 
     void concat_key (); 
     void dump_key (); 
     void soundex_key (); 
     void positive_key (); 
     void union_key (); 
     void ascii_key (); 
     void connect_key (); 
     void asc_key (); 
     void hextoraw_key (); 
     void to_date_key (); 
     void floor_key (); 
     void sign_key (); 
     void update_key (); 
     void trunc_key (); 
     void rtrim_key (); 
     void close_key (); 
     void to_char_key (); 
     void ltrim_key (); 
     void mode_key (); 
     void uid_key (); 
     void chr_key (); 
     void intersect_key (); 
     void chartorowid_key (); 
     void mlslabel_key (); 
     void userenv_key (); 
     void stddev_key (); 
     void length_key (); 
     void fetch_key (); 
     void group_key (); 
     void sysdate_key (); 
     void binary_integer_key (); 
     void to_number_key (); 
     void substr_key (); 
     void ceil_key (); 
     void initcap_key (); 
     void round_key (); 
     void long_key (); 
     void read_key (); 
     void only_key (); 
     void set_key (); 
     void nullif_key (); 
     void coalesce_key (); 
     void count_key (); 
     void avg_key (); 
     void max_key (); 
     void min_key (); 
     void sum_key (); 
     void unknown_key (); 
     void escape_key (); 
     void some_key (); 
     void match_key (); 
     void cast_key (); 
     void full_key (); 
     void partial_key (); 
     void character_key (); 
     void except_key (); 
     void char_key (); 
     void varying_key (); 
     void varchar_key (); 
     void national_key (); 
     void nchar_key (); 
     void bit_key (); 
     void float_key (); 
     void real_key (); 
     void double_key (); 
     void precision_key (); 
     void interval_key (); 
     void time_key (); 
     void zone_key (); 
     void timestamp_key (); 
     void date_key (); 
     void numeric_key (); 
     void decimal_key (); 
     void dec_key (); 
     void integer_key (); 
     void int_key (); 
     void smallint_key (); 
     void corresponding_key (); 
     void cross_key (); 
     void join_key (); 
     void left_key (); 
     void right_key (); 
     void inner_key (); 
     void natural_key (); 
     void outer_key (); 
     void using_key (); 
     void indicator_key (); 
     void user_key (); 
     void current_user_key (); 
     void session_user_key (); 
     void system_user_key (); 
     void value_key (); 
     void substring_key (); 
     void upper_key (); 
     void lower_key (); 
     void convert_key (); 
     void translate_key (); 
     void trim_key (); 
     void leading_key (); 
     void trailing_key (); 
     void both_key (); 
     void collate_key (); 
     void position_key (); 
     void extract_key (); 
     void second_key (); 
     void timezone_hour_key (); 
     void timezone_minute_key (); 
     void char_length_key (); 
     void octet_length_key (); 
     void character_length_key (); 
     void bit_length_key (); 
     void local_key (); 
     void current_timestamp_key (); 
     void current_date_key (); 
     void current_time_key (); 
     void module_key (); 
     void global_key (); 
     void year_key (); 
     void month_key (); 
     void day_key (); 
     void hour_key (); 
     void minute_key (); 
     void whenever_key (); 
     void is_key (); 
     void else_key (); 
     void table_key (); 
     void the_key (); 
     void then_key (); 
     void end_key (); 
     void all_key (); 
     void on_key (); 
     void or_key (); 
     void and_key (); 
     void not_key (); 
     void true_key (); 
     void false_key (); 
     void default_key (); 
     void distinct_key (); 
     void into_key (); 
     void by_key (); 
     void as_key (); 
     void in_key (); 
     void of_key (); 
     void null_key (); 
     void for_key (); 
     void select_key (); 
     void when_key (); 
     void delete_key (); 
     void between_key (); 
     void like_key (); 
     void from_key (); 
     void where_key (); 
     void sequence_key (); 
     void noorder_key (); 
     void cycle_key (); 
     void cache_key (); 
     void nocache_key (); 
     void nomaxvalue_key (); 
     void nominvalue_key (); 
     void search_key (); 
     void depth_key (); 
     void breadth_key (); 
    // Delegated rules

    const char *    getGrammarFileName();
    void            reset();
    ~PLSQLParser_PLSQLKeys();

};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
extern ANTLR_UINT8*   PLSQLParserTokenNames[];


/* End of token definitions for PLSQLParser_PLSQLKeys
 * =============================================================================
 */

}

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */