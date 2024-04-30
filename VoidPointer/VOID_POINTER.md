#  Void Pointer

Der Void Pointer `void*` entspricht in C dem was in Java die Klasse `Object` übernimmt. 
Nicht immer kennt man den Typ dessen worauf der Pointer zeigt, weshalb der `void*` der auf jedes beliebige Objekt zeigen kann notwendig ist.

- Void-Pointer `void*` ist der generische Pointer
- Kann mit Cast jedem pointer zugewiesen werden
- Jeder andere Pointer kann dem `void*` zugewiesen werden
- Verhält sich bei Pointer-Arithmetik wie ein `char*`

```C
int* ip;
void* vp = ip;
sizeof(*vp) == 1;
```

Mithilfe eines Cast kann dieser jedem anderen Pointer zugewiesen werden

```C
int i = 7;
void* vp = &i;
int* ip = (int*) vp; /* cast von void* auf int*
printf("%d\n", *ip); /* Ausgabe: 7 */
```


Da man den Wert der hinter dem Void-Pinter liegt nicht kennen kann, kann man diesen auch nicht dereferenzieren.
in dem obigen Beispiel würde `*vp = 5;` einen fehler ergeben. Nur mit dem entsprechenden Cast kann aus dem Void-Pointer ein Wert gelesen werden.

```C
int i = 7;
void* vp = &i;
printf("%d\n", *((int*)vp) ); /* Ausgabe: 7 */
```

Kommt ein `void*`-Pointer in einem Ausdruck der Pointer-Arithmetik vor, dann wird er wie ein char*-Pointer betrachtet, sodass z. B. ein ++ die Adresse um 1 erhöht.

```C
char s[] = "Hallo"; /* char[] ist identisch mit char* */
void* vp = s;
printf("%p\n", vp); /* 0x7ffd650d9126 */
vp++;
printf("%p\n", vp); /* 0x7ffd650d9127 */
```
