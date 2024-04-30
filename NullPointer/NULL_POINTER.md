#  Null Pointer

Welchen Wert hat ein Pointer, der auf nichts zeigt? Java verwendet hier für seine Referenzen den Wert `null`, C einfach den Zahlenwert `0`, da `0` keine gültige Adresse ist. Da aber `0` keine Adresse ist, ist der technisch korrekte Wert des sogenannten Null-Pointers `(void*) 0`:

```C
int *xp = (void*) 0;
```

Da man allerdings nicht immer `(void*) 0` schreiben will, liefert C ein eingebautes Präprozessormakro ->

```C
int *xp = NULL;
```
