(**
   Boilerplate to be used as a template when mapping the requirements CST
   to another type of tree.
*)

module R = Tree_sitter_run.Raw_tree

(* Disable warnings against unused variables *)
[@@@warning "-26-27"]

(* Disable warning against unused 'rec' *)
[@@@warning "-39"]

type env = unit

let token (env : env) (tok : Tree_sitter_run.Token.t) =
  R.Token tok

let blank (env : env) () =
  R.Tuple []

let map_package (env : env) (tok : CST.package) =
  (* pattern [a-zA-Z0-9]([a-zA-Z0-9._-]*[a-zA-Z0-9])? *) token env tok

let map_pat_7ef074c (env : env) (tok : CST.pat_7ef074c) =
  (* pattern "([^']|\\\\')+" *) token env tok

let map_pat_509ec78 (env : env) (tok : CST.pat_509ec78) =
  (* pattern \r?\n *) token env tok

let map_pat_5d0eb07 (env : env) (tok : CST.pat_5d0eb07) =
  (* pattern [A-Z0-9_]+ *) token env tok

let map_pat_1a808a5 (env : env) (tok : CST.pat_1a808a5) =
  (* pattern [bB][zZ][rR]\+[lL][pP]: *) token env tok

let map_version (env : env) (tok : CST.version) =
  (* pattern [a-zA-Z0-9*!+._-]+ *) token env tok

let map_pat_8166075 (env : env) (tok : CST.pat_8166075) =
  (* pattern "([^\"]|\\\\\")+" *) token env tok

let map_marker_var (env : env) (x : CST.marker_var) =
  (match x with
  | `Python_vers tok -> R.Case ("Python_vers",
      (* "python_version" *) token env tok
    )
  | `Python_full_vers tok -> R.Case ("Python_full_vers",
      (* "python_full_version" *) token env tok
    )
  | `Os_name tok -> R.Case ("Os_name",
      (* "os_name" *) token env tok
    )
  | `Sys_plat tok -> R.Case ("Sys_plat",
      (* "sys_platform" *) token env tok
    )
  | `Plat_rele tok -> R.Case ("Plat_rele",
      (* "platform_release" *) token env tok
    )
  | `Plat_system tok -> R.Case ("Plat_system",
      (* "platform_system" *) token env tok
    )
  | `Plat_vers tok -> R.Case ("Plat_vers",
      (* "platform_version" *) token env tok
    )
  | `Plat_mach tok -> R.Case ("Plat_mach",
      (* "platform_machine" *) token env tok
    )
  | `Plat_python_impl tok -> R.Case ("Plat_python_impl",
      (* "platform_python_implementation" *) token env tok
    )
  | `Impl_name tok -> R.Case ("Impl_name",
      (* "implementation_name" *) token env tok
    )
  | `Impl_vers tok -> R.Case ("Impl_vers",
      (* "implementation_version" *) token env tok
    )
  | `Extra tok -> R.Case ("Extra",
      (* "extra" *) token env tok
    )
  )

let map_comment (env : env) (tok : CST.comment) =
  (* pattern #[^\n]* *) token env tok

let map_pat_90320f7 (env : env) (tok : CST.pat_90320f7) =
  (* pattern [a-zA-Z+]+:\/\/ *) token env tok

let map_pat_3965d2a (env : env) (tok : CST.pat_3965d2a) =
  (* pattern (\S|\\ ) *) token env tok

let map_pat_a742575 (env : env) (tok : CST.pat_a742575) =
  (* pattern [ \t] *) token env tok

let map_version_cmp (env : env) (tok : CST.version_cmp) =
  (* version_cmp *) token env tok

let map_pat_d0b6c52 (env : env) (tok : CST.pat_d0b6c52) =
  (* pattern [./]\S* *) token env tok

let map_pat_09700b0 (env : env) (tok : CST.pat_09700b0) =
  (* pattern \S *) token env tok

let map_env_var (env : env) ((v1, v2, v3) : CST.env_var) =
  let v1 = (* "${" *) token env v1 in
  let v2 = map_pat_5d0eb07 env v2 in
  let v3 = (* "}" *) token env v3 in
  R.Tuple [v1; v2; v3]

let map_quoted_string (env : env) (x : CST.quoted_string) =
  (match x with
  | `DQUOT_pat_8166075_DQUOT (v1, v2, v3) -> R.Case ("DQUOT_pat_8166075_DQUOT",
      let v1 = (* "\"" *) token env v1 in
      let v2 = map_pat_8166075 env v2 in
      let v3 = (* "\"" *) token env v3 in
      R.Tuple [v1; v2; v3]
    )
  | `SQUOT_pat_7ef074c_SQUOT (v1, v2, v3) -> R.Case ("SQUOT_pat_7ef074c_SQUOT",
      let v1 = (* "'" *) token env v1 in
      let v2 = map_pat_7ef074c env v2 in
      let v3 = (* "'" *) token env v3 in
      R.Tuple [v1; v2; v3]
    )
  )

let map_argument (env : env) (xs : CST.argument) =
  R.List (List.map (fun x ->
    map_pat_3965d2a env x
  ) xs)

let map_space (env : env) (xs : CST.space) =
  R.List (List.map (fun x ->
    map_pat_a742575 env x
  ) xs)

let map_url (env : env) ((v1, v2) : CST.url) =
  let v1 =
    (match v1 with
    | `Pat_90320f7 x -> R.Case ("Pat_90320f7",
        map_pat_90320f7 env x
      )
    | `Pat_1a808a5 x -> R.Case ("Pat_1a808a5",
        map_pat_1a808a5 env x
      )
    )
  in
  let v2 =
    R.List (List.map (fun x ->
      (match x with
      | `Env_var x -> R.Case ("Env_var",
          map_env_var env x
        )
      | `Pat_09700b0 x -> R.Case ("Pat_09700b0",
          map_pat_09700b0 env x
        )
      )
    ) v2)
  in
  R.Tuple [v1; v2]

let map_anon_choice_arg_1722ecd (env : env) (x : CST.anon_choice_arg_1722ecd) =
  (match x with
  | `Arg x -> R.Case ("Arg",
      map_argument env x
    )
  | `Quoted_str x -> R.Case ("Quoted_str",
      map_quoted_string env x
    )
  )

let map_anon_opt_sp_COMMA_opt_sp_pack_70a3b35 (env : env) ((v1, v2, v3, v4) : CST.anon_opt_sp_COMMA_opt_sp_pack_70a3b35) =
  let v1 =
    (match v1 with
    | Some x -> R.Option (Some (
        map_space env x
      ))
    | None -> R.Option None)
  in
  let v2 = (* "," *) token env v2 in
  let v3 =
    (match v3 with
    | Some x -> R.Option (Some (
        map_space env x
      ))
    | None -> R.Option None)
  in
  let v4 =
    (* pattern [a-zA-Z0-9]([a-zA-Z0-9._-]*[a-zA-Z0-9])? *) token env v4
  in
  R.Tuple [v1; v2; v3; v4]

let map_marker_op (env : env) (x : CST.marker_op) =
  (match x with
  | `In tok -> R.Case ("In",
      (* "in" *) token env tok
    )
  | `Not_sp_in (v1, v2, v3) -> R.Case ("Not_sp_in",
      let v1 = (* "not" *) token env v1 in
      let v2 = map_space env v2 in
      let v3 = (* "in" *) token env v3 in
      R.Tuple [v1; v2; v3]
    )
  )

let map_version_list (env : env) ((v1, v2, v3, v4, v5) : CST.version_list) =
  let v1 =
    (match v1 with
    | Some x -> R.Option (Some (
        map_space env x
      ))
    | None -> R.Option None)
  in
  let v2 = (* version_cmp *) token env v2 in
  let v3 =
    (match v3 with
    | Some x -> R.Option (Some (
        map_space env x
      ))
    | None -> R.Option None)
  in
  let v4 = (* pattern [a-zA-Z0-9*!+._-]+ *) token env v4 in
  let v5 =
    R.List (List.map (fun (v1, v2, v3, v4, v5, v6) ->
      let v1 =
        (match v1 with
        | Some x -> R.Option (Some (
            map_space env x
          ))
        | None -> R.Option None)
      in
      let v2 = (* "," *) token env v2 in
      let v3 =
        (match v3 with
        | Some x -> R.Option (Some (
            map_space env x
          ))
        | None -> R.Option None)
      in
      let v4 = (* version_cmp *) token env v4 in
      let v5 =
        (match v5 with
        | Some x -> R.Option (Some (
            map_space env x
          ))
        | None -> R.Option None)
      in
      let v6 = (* pattern [a-zA-Z0-9*!+._-]+ *) token env v6 in
      R.Tuple [v1; v2; v3; v4; v5; v6]
    ) v5)
  in
  R.Tuple [v1; v2; v3; v4; v5]

let map_anon_choice_EQ_5f5a49e (env : env) (x : CST.anon_choice_EQ_5f5a49e) =
  (match x with
  | `EQ tok -> R.Case ("EQ",
      (* "=" *) token env tok
    )
  | `Sp x -> R.Case ("Sp",
      map_space env x
    )
  )

let map_end_of_line (env : env) (x : CST.end_of_line) =
  (match x with
  | `Sp_comm_pat_509ec78 (v1, v2, v3) -> R.Case ("Sp_comm_pat_509ec78",
      let v1 = map_space env v1 in
      let v2 = (* pattern #[^\n]* *) token env v2 in
      let v3 = map_pat_509ec78 env v3 in
      R.Tuple [v1; v2; v3]
    )
  | `Opt_sp_pat_509ec78 (v1, v2) -> R.Case ("Opt_sp_pat_509ec78",
      let v1 =
        (match v1 with
        | Some x -> R.Option (Some (
            map_space env x
          ))
        | None -> R.Option None)
      in
      let v2 = map_pat_509ec78 env v2 in
      R.Tuple [v1; v2]
    )
  )

let map_anon_choice_url_4458a7b (env : env) (x : CST.anon_choice_url_4458a7b) =
  (match x with
  | `Url x -> R.Case ("Url",
      map_url env x
    )
  | `Quoted_str x -> R.Case ("Quoted_str",
      map_quoted_string env x
    )
  )

let map_url_spec (env : env) ((v1, v2, v3, v4) : CST.url_spec) =
  let v1 =
    (match v1 with
    | Some x -> R.Option (Some (
        map_space env x
      ))
    | None -> R.Option None)
  in
  let v2 = (* "@" *) token env v2 in
  let v3 =
    (match v3 with
    | Some x -> R.Option (Some (
        map_space env x
      ))
    | None -> R.Option None)
  in
  let v4 = map_url env v4 in
  R.Tuple [v1; v2; v3; v4]

let map_anon_choice_arg_d518d88 (env : env) (x : CST.anon_choice_arg_d518d88) =
  (match x with
  | `Arg x -> R.Case ("Arg",
      map_argument env x
    )
  | `Quoted_str x -> R.Case ("Quoted_str",
      map_quoted_string env x
    )
  | `Url x -> R.Case ("Url",
      map_url env x
    )
  )

let map_extras_ (env : env) ((v1, v2, v3, v4, v5, v6, v7, v8) : CST.extras_) =
  let v1 =
    (match v1 with
    | Some x -> R.Option (Some (
        map_space env x
      ))
    | None -> R.Option None)
  in
  let v2 = (* "[" *) token env v2 in
  let v3 =
    (match v3 with
    | Some x -> R.Option (Some (
        map_space env x
      ))
    | None -> R.Option None)
  in
  let v4 =
    (match v4 with
    | Some x -> R.Option (Some (
        map_space env x
      ))
    | None -> R.Option None)
  in
  let v5 =
    (* pattern [a-zA-Z0-9]([a-zA-Z0-9._-]*[a-zA-Z0-9])? *) token env v5
  in
  let v6 =
    R.List (List.map (map_anon_opt_sp_COMMA_opt_sp_pack_70a3b35 env) v6)
  in
  let v7 =
    (match v7 with
    | Some x -> R.Option (Some (
        map_space env x
      ))
    | None -> R.Option None)
  in
  let v8 = (* "]" *) token env v8 in
  R.Tuple [v1; v2; v3; v4; v5; v6; v7; v8]

let map_version_spec (env : env) (x : CST.version_spec) =
  (match x with
  | `Vers_list x -> R.Case ("Vers_list",
      map_version_list env x
    )
  | `Opt_sp_LPAR_vers_list_opt_sp_RPAR (v1, v2, v3, v4, v5) -> R.Case ("Opt_sp_LPAR_vers_list_opt_sp_RPAR",
      let v1 =
        (match v1 with
        | Some x -> R.Option (Some (
            map_space env x
          ))
        | None -> R.Option None)
      in
      let v2 = (* "(" *) token env v2 in
      let v3 = map_version_list env v3 in
      let v4 =
        (match v4 with
        | Some x -> R.Option (Some (
            map_space env x
          ))
        | None -> R.Option None)
      in
      let v5 = (* ")" *) token env v5 in
      R.Tuple [v1; v2; v3; v4; v5]
    )
  )

let map_requirement_opt (env : env) ((v1, v2, v3, v4) : CST.requirement_opt) =
  let v1 =
    (match v1 with
    | Some x -> R.Option (Some (
        map_space env x
      ))
    | None -> R.Option None)
  in
  let v2 =
    (match v2 with
    | `DASH_cdf9ae5 tok -> R.Case ("DASH_cdf9ae5",
        (* "--global-option" *) token env tok
      )
    | `DASHDs tok -> R.Case ("DASHDs",
        (* "--config-settings" *) token env tok
      )
    | `DASH_c54adde tok -> R.Case ("DASH_c54adde",
        (* "--hash" *) token env tok
      )
    )
  in
  let v3 = map_anon_choice_EQ_5f5a49e env v3 in
  let v4 = map_anon_choice_arg_1722ecd env v4 in
  R.Tuple [v1; v2; v3; v4]

let map_global_opt (env : env) (x : CST.global_opt) =
  (match x with
  | `Choice_DASH_choice_EQ_choice_arg_61081d4 (v1, v2, v3) -> R.Case ("Choice_DASH_choice_EQ_choice_arg_61081d4",
      let v1 =
        (match v1 with
        | `DASH_0fd07b3 tok -> R.Case ("DASH_0fd07b3",
            (* "--no-binary" *) token env tok
          )
        | `DASH_7e0b961 tok -> R.Case ("DASH_7e0b961",
            (* "--only-binary" *) token env tok
          )
        | `DASH_c2015a3 tok -> R.Case ("DASH_c2015a3",
            (* "--trusted-host" *) token env tok
          )
        | `DASH_819a70f tok -> R.Case ("DASH_819a70f",
            (* "--use-feature" *) token env tok
          )
        )
      in
      let v2 = map_anon_choice_EQ_5f5a49e env v2 in
      let v3 = map_anon_choice_arg_1722ecd env v3 in
      R.Tuple [v1; v2; v3]
    )
  | `Choice_DASH x -> R.Case ("Choice_DASH",
      (match x with
      | `DASH_b141e1e tok -> R.Case ("DASH_b141e1e",
          (* "--no-index" *) token env tok
        )
      | `DASH_046c7ad tok -> R.Case ("DASH_046c7ad",
          (* "--prefer-binary" *) token env tok
        )
      | `DASHDs tok -> R.Case ("DASHDs",
          (* "--require-hashes" *) token env tok
        )
      | `DASH_a1cf4d5 tok -> R.Case ("DASH_a1cf4d5",
          (* "--pre" *) token env tok
        )
      )
    )
  | `Choice_DASHi_opt_sp_choice_url (v1, v2, v3) -> R.Case ("Choice_DASHi_opt_sp_choice_url",
      let v1 =
        (match v1 with
        | `DASHi tok -> R.Case ("DASHi",
            (* "-i" *) token env tok
          )
        )
      in
      let v2 =
        (match v2 with
        | Some x -> R.Option (Some (
            map_space env x
          ))
        | None -> R.Option None)
      in
      let v3 = map_anon_choice_url_4458a7b env v3 in
      R.Tuple [v1; v2; v3]
    )
  | `Choice_DASH_choice_EQ_choice_url (v1, v2, v3) -> R.Case ("Choice_DASH_choice_EQ_choice_url",
      let v1 =
        (match v1 with
        | `DASH_3199eac tok -> R.Case ("DASH_3199eac",
            (* "--index-url" *) token env tok
          )
        | `DASH_a88e2fb tok -> R.Case ("DASH_a88e2fb",
            (* "--extra-index-url" *) token env tok
          )
        )
      in
      let v2 = map_anon_choice_EQ_5f5a49e env v2 in
      let v3 = map_anon_choice_url_4458a7b env v3 in
      R.Tuple [v1; v2; v3]
    )
  | `Choice_DASHc_opt_sp_choice_arg (v1, v2, v3) -> R.Case ("Choice_DASHc_opt_sp_choice_arg",
      let v1 =
        (match v1 with
        | `DASHc tok -> R.Case ("DASHc",
            (* "-c" *) token env tok
          )
        | `DASHr tok -> R.Case ("DASHr",
            (* "-r" *) token env tok
          )
        )
      in
      let v2 =
        (match v2 with
        | Some x -> R.Option (Some (
            map_space env x
          ))
        | None -> R.Option None)
      in
      let v3 = map_anon_choice_arg_1722ecd env v3 in
      R.Tuple [v1; v2; v3]
    )
  | `Choice_DASH_choice_EQ_choice_arg_10363ea (v1, v2, v3) -> R.Case ("Choice_DASH_choice_EQ_choice_arg_10363ea",
      let v1 =
        (match v1 with
        | `DASH_2f2c9e5 tok -> R.Case ("DASH_2f2c9e5",
            (* "--constraint" *) token env tok
          )
        | `DASH_375114c tok -> R.Case ("DASH_375114c",
            (* "--requirement" *) token env tok
          )
        )
      in
      let v2 = map_anon_choice_EQ_5f5a49e env v2 in
      let v3 = map_anon_choice_arg_1722ecd env v3 in
      R.Tuple [v1; v2; v3]
    )
  | `Choice_DASHe_opt_sp_choice_arg (v1, v2, v3) -> R.Case ("Choice_DASHe_opt_sp_choice_arg",
      let v1 =
        (match v1 with
        | `DASHe tok -> R.Case ("DASHe",
            (* "-e" *) token env tok
          )
        | `DASHf tok -> R.Case ("DASHf",
            (* "-f" *) token env tok
          )
        )
      in
      let v2 =
        (match v2 with
        | Some x -> R.Option (Some (
            map_space env x
          ))
        | None -> R.Option None)
      in
      let v3 = map_anon_choice_arg_d518d88 env v3 in
      R.Tuple [v1; v2; v3]
    )
  | `Choice_DASH_choice_EQ_choice_arg_c5ea372 (v1, v2, v3) -> R.Case ("Choice_DASH_choice_EQ_choice_arg_c5ea372",
      let v1 =
        (match v1 with
        | `DASH tok -> R.Case ("DASH",
            (* "--editable" *) token env tok
          )
        | `DASHDs tok -> R.Case ("DASHDs",
            (* "--find-links" *) token env tok
          )
        )
      in
      let v2 = map_anon_choice_EQ_5f5a49e env v2 in
      let v3 = map_anon_choice_arg_d518d88 env v3 in
      R.Tuple [v1; v2; v3]
    )
  )

let rec map_marker (env : env) (x : CST.marker) =
  (match x with
  | `Marker_expr (v1, v2, v3, v4, v5) -> R.Case ("Marker_expr",
      let v1 = map_marker_var env v1 in
      let v2 =
        (match v2 with
        | Some x -> R.Option (Some (
            map_space env x
          ))
        | None -> R.Option None)
      in
      let v3 =
        (match v3 with
        | `Vers_cmp tok -> R.Case ("Vers_cmp",
            (* version_cmp *) token env tok
          )
        | `Marker_op x -> R.Case ("Marker_op",
            map_marker_op env x
          )
        )
      in
      let v4 =
        (match v4 with
        | Some x -> R.Option (Some (
            map_space env x
          ))
        | None -> R.Option None)
      in
      let v5 = map_quoted_string env v5 in
      R.Tuple [v1; v2; v3; v4; v5]
    )
  | `Marker_or (v1, v2, v3, v4, v5) -> R.Case ("Marker_or",
      let v1 = map_marker env v1 in
      let v2 =
        (match v2 with
        | Some x -> R.Option (Some (
            map_space env x
          ))
        | None -> R.Option None)
      in
      let v3 = (* "or" *) token env v3 in
      let v4 =
        (match v4 with
        | Some x -> R.Option (Some (
            map_space env x
          ))
        | None -> R.Option None)
      in
      let v5 = map_marker env v5 in
      R.Tuple [v1; v2; v3; v4; v5]
    )
  | `Marker_and (v1, v2, v3, v4, v5) -> R.Case ("Marker_and",
      let v1 = map_marker env v1 in
      let v2 =
        (match v2 with
        | Some x -> R.Option (Some (
            map_space env x
          ))
        | None -> R.Option None)
      in
      let v3 = (* "and" *) token env v3 in
      let v4 =
        (match v4 with
        | Some x -> R.Option (Some (
            map_space env x
          ))
        | None -> R.Option None)
      in
      let v5 = map_marker env v5 in
      R.Tuple [v1; v2; v3; v4; v5]
    )
  | `Marker_paren (v1, v2, v3, v4, v5) -> R.Case ("Marker_paren",
      let v1 = (* "(" *) token env v1 in
      let v2 =
        (match v2 with
        | Some x -> R.Option (Some (
            map_space env x
          ))
        | None -> R.Option None)
      in
      let v3 = map_marker env v3 in
      let v4 =
        (match v4 with
        | Some x -> R.Option (Some (
            map_space env x
          ))
        | None -> R.Option None)
      in
      let v5 = (* ")" *) token env v5 in
      R.Tuple [v1; v2; v3; v4; v5]
    )
  )

let map_marker_spec (env : env) ((v1, v2, v3, v4) : CST.marker_spec) =
  let v1 =
    (match v1 with
    | Some x -> R.Option (Some (
        map_space env x
      ))
    | None -> R.Option None)
  in
  let v2 = (* ";" *) token env v2 in
  let v3 =
    (match v3 with
    | Some x -> R.Option (Some (
        map_space env x
      ))
    | None -> R.Option None)
  in
  let v4 = map_marker env v4 in
  R.Tuple [v1; v2; v3; v4]

let map_requirement (env : env) ((v1, v2, v3, v4, v5) : CST.requirement) =
  let v1 =
    (* pattern [a-zA-Z0-9]([a-zA-Z0-9._-]*[a-zA-Z0-9])? *) token env v1
  in
  let v2 =
    (match v2 with
    | Some x -> R.Option (Some (
        map_extras_ env x
      ))
    | None -> R.Option None)
  in
  let v3 =
    (match v3 with
    | Some x -> R.Option (Some (
        (match x with
        | `Vers_spec x -> R.Case ("Vers_spec",
            map_version_spec env x
          )
        | `Url_spec x -> R.Case ("Url_spec",
            map_url_spec env x
          )
        )
      ))
    | None -> R.Option None)
  in
  let v4 =
    (match v4 with
    | Some x -> R.Option (Some (
        map_marker_spec env x
      ))
    | None -> R.Option None)
  in
  let v5 = R.List (List.map (map_requirement_opt env) v5) in
  R.Tuple [v1; v2; v3; v4; v5]

let map_file (env : env) (xs : CST.file) =
  R.List (List.map (fun x ->
    (match x with
    | `Opt_sp_opt_comm_pat_509ec78 (v1, v2, v3) -> R.Case ("Opt_sp_opt_comm_pat_509ec78",
        let v1 =
          (match v1 with
          | Some x -> R.Option (Some (
              map_space env x
            ))
          | None -> R.Option None)
        in
        let v2 =
          (match v2 with
          | Some tok -> R.Option (Some (
              (* pattern #[^\n]* *) token env tok
            ))
          | None -> R.Option None)
        in
        let v3 = map_pat_509ec78 env v3 in
        R.Tuple [v1; v2; v3]
      )
    | `Opt_sp_choice_requ_choice_sp_comm_pat_509ec78 (v1, v2, v3) -> R.Case ("Opt_sp_choice_requ_choice_sp_comm_pat_509ec78",
        let v1 =
          (match v1 with
          | Some x -> R.Option (Some (
              map_space env x
            ))
          | None -> R.Option None)
        in
        let v2 =
          (match v2 with
          | `Requ x -> R.Case ("Requ",
              map_requirement env x
            )
          | `Url x -> R.Case ("Url",
              map_url env x
            )
          | `Pat_d0b6c52 x -> R.Case ("Pat_d0b6c52",
              map_pat_d0b6c52 env x
            )
          | `Global_opt x -> R.Case ("Global_opt",
              map_global_opt env x
            )
          )
        in
        let v3 = map_end_of_line env v3 in
        R.Tuple [v1; v2; v3]
      )
    )
  ) xs)

let map_linebreak (env : env) ((v1, v2) : CST.linebreak) =
  let v1 = (* "\\" *) token env v1 in
  let v2 = map_end_of_line env v2 in
  R.Tuple [v1; v2]

let dump_tree root =
  map_file () root
  |> Tree_sitter_run.Raw_tree.to_channel stdout

let map_extra (env : env) (x : CST.extra) =
  match x with
  | `Linebreak (_loc, x) -> ("linebreak", "linebreak", map_linebreak env x)

let dump_extras (extras : CST.extras) =
  List.iter (fun extra ->
    let ts_rule_name, ocaml_type_name, raw_tree = map_extra () extra in
    let details =
      if ocaml_type_name <> ts_rule_name then
        Printf.sprintf " (OCaml type '%s')" ocaml_type_name
      else
        ""
    in
    Printf.printf "%s%s:\n" ts_rule_name details;
    Tree_sitter_run.Raw_tree.to_channel stdout raw_tree
  ) extras
