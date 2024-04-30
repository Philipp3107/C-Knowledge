#  Strict Aliasing Rule

Die Strict Aliasing Rule besagt, das zwei Pointer unterschiedlichen Typs nicht auf den gleichen Bereich im Stack zeigen dürfen um so die Möglichkeit für den Compiler Codeoptimierungen vorzunehmen vereinfacht wird, da dieser weiß, dass keine Seiteneffekte entstehen.


Die einzige Ausnahme bilden `char*` und `unsigned char*`. Diese dürfen auf andere Typen zeigen.

## Verboten

```C
int i = 99;
float * fp =n (float*) &i;
*fp += 0.7f;
```

## Erlaubt

```C
int i = 99;
char* cp = (char*) &i;
*cp = 5;
```
