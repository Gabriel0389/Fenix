save scre to A69
Do while .t.
   ARQ1()
   if comp = 'SERVIDOR'
      drt='C:'
      acess='rgvaz'
   else
      drt='T:'
      acess='T:\rgvaz'
   endi
   Unlock
   use &acess exclusive
   if neterr()
      set color to G+/r+
      @ 09,21 to 14,49
      @ 10,22 to 13,48
      @ 11,23 say '  * Acesso compartilhado!'
      @ 12,23 say '         Aguarde...      '
      @ 09,21 to 14,49
      tcor()
   else
      exit
   endi
Endd
rest scre from A69


