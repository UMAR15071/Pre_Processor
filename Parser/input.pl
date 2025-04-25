prolog_c([
declaration([void], [function(Greet, [])]), 

declaration([int], [function(Add, [param([int], A), param([int], B)])]), 

declaration([void], [function(Print_message, [param([char], ptr_decl(pointer, Message))])]), 
function([int], function(Main, []), [], 
cmp_stmts([
stmt(function_call(Greet, [])), 
declaration([int], [initialised(Result, function_call(Add, [int(5), int(3)]))]), 
stmt(function_call(Printf, ["Sum of 5 and 3 is: %d\n", Result])), 
stmt(function_call(Print_message, ["This is a user-defined message!"])), 
return_stmt(int(0))

])), 
function([void], function(Greet, []), [], 
cmp_stmts([
stmt(function_call(Printf, ["Hello! Welcome to the C program.\n"]))
])), 
function([int], function(Add, [param([int], A), param([int], B)]), [], 
cmp_stmts([
return_stmt(plus_op(A, B))

])), 
function([void], function(Print_message, [param([char], ptr_decl(pointer, Message))]), [], 
cmp_stmts([
stmt(function_call(Printf, ["%s\n", Message]))
]))
]).