
Error starting at line : 1 in command -
DECLARE
EMP_NAME varchar(50);
EMP_NO number;
BEGIN
EMP_NAME := select empname from employee where empno = 35;
dbms_output.putline('The name is ' || EMP_NAME);
END;
Error report -
ORA-06550: line 5, column 13:
PLS-00103: Encountered the symbol "SELECT" when expecting one of the following:

   ( - + case mod new not null <an identifier>
   <a double-quoted delimited-identifier> <a bind variable>
   continue avg count current exists max min prior sql stddev
   sum variance execute forall merge time timestamp interval
   date <a string literal with character set specification>
   <a number> <a single-quoted SQL string> pipe
   <an alternatively-quoted string literal with character set specification>
   <an alternat
ORA-06550: line 6, column 1:
PLS-00103: Encountered the symbol "DBMS_OUTPUT" 
ORA-06550: line 6, column 48:
PLS-00103: Encountered the symbol ";" when expecting one of the following:

   . ( , * % & - + / at mod remainder rem <an identifier>
   <a double-quoted delimited-identifier> <an exponent (**)> as
   from into || multiset bulk
06550. 00000 -  "line %s, column %s:\n%s"
*Cause:    Usually a PL/SQL compilation error.
*Action:

Error starting at line : 1 in command -
BEGIN
dbms_output.putline('The name is ERIC');
END;
Error report -
ORA-06550: line 2, column 13:
PLS-00302: component 'PUTLINE' must be declared
ORA-06550: line 2, column 1:
PL/SQL: Statement ignored
06550. 00000 -  "line %s, column %s:\n%s"
*Cause:    Usually a PL/SQL compilation error.
*Action:

Error starting at line : 1 in command -
DECLARE
BEGIN
dbms_output.putline('The name is ERIC');
END;
Error report -
ORA-06550: line 3, column 13:
PLS-00302: component 'PUTLINE' must be declared
ORA-06550: line 3, column 1:
PL/SQL: Statement ignored
06550. 00000 -  "line %s, column %s:\n%s"
*Cause:    Usually a PL/SQL compilation error.
*Action:

Error starting at line : 1 in command -
DECLARE
BEGIN
dbms_output.putline('The name is ERIC');
END;
Error report -
ORA-06550: line 3, column 13:
PLS-00302: component 'PUTLINE' must be declared
ORA-06550: line 3, column 1:
PL/SQL: Statement ignored
06550. 00000 -  "line %s, column %s:\n%s"
*Cause:    Usually a PL/SQL compilation error.
*Action:

Error starting at line : 1 in command -
DECLARE
EMP_NAME varchar(50);
EMP_NO number;
BEGIN
dbms_output.putline('The name is ');
END;
Error report -
ORA-06550: line 5, column 13:
PLS-00302: component 'PUTLINE' must be declared
ORA-06550: line 5, column 1:
PL/SQL: Statement ignored
06550. 00000 -  "line %s, column %s:\n%s"
*Cause:    Usually a PL/SQL compilation error.
*Action:
