#  Adressen von Objekten

Die Adresse eine Datenobjektes mit dem typ `t` z.B. `int x`:

- Kann mit `&x` geholt werden 
- hat den Datentypen `t*` zum Beispiel `int*`
- ist 4 Byte (32 Bit-Plattform) oder 8 Byte (64 Bit-Plattform) groß
- kann selbst wieder über einen Pointer referenziert werden `t**`, z. B. `int**`

Die Größe eines Datenobjekts mit dem Typ `t`, z. B. `int x` :

- kann über `sizeof(t)` oder `sizeof(x)` bestimmt werden 
- hat den Datentyp `size_t` (nicht `int`!)
- wird in Bytes gemessen 

