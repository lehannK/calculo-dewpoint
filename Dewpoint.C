// CALCULO DEWPOINT 

Numeric Input Temp, RH
Numeric Output Dewpoint
Numeric X, Y

IF Temp = null ! RH = null then     

// if não executa nada, mas é necessário para manter o programa em looping caso o servidor perca a referencia do sensor

Else
	X = ln(RH/100)
	X = X + ((17.625 * Temp) / (243.04 + Temp))
	X = X * 243.04 
	Y = 17.625 - (ln(RH/100))
	Y = Y - ((17.625 * Temp) / (243.04 + Temp))
	Dewpoint = X / Y 

Endif
