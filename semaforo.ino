
//PROTÓTIPO DE SEMÁFORO
//@author: Milênio Rocha

// DECLARA OS PINOS DOS LEDS
int ledVermelho = 10;
int ledAmarelo = 9;
int ledVerde = 8;

void setup() {
//DECLARA OS PINOS DOS LEDS COMO SAIDA
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
// LAÇO DE REPETIÇÃO

digitalWrite(ledVerde, HIGH); 	// LED VERDE INICIA LIGADO
delay(10000); 									// FICA 10 SEGUNDOS LIGADO
digitalWrite(ledVerde, LOW);  	// LED VERDE DESLIGA
digitalWrite(ledAmarelo, HIGH);	// LED AMARELO LIGA
delay(5000);  									// FICA 5 SEGUNDOS LIGADO
digitalWrite(ledAmarelo, LOW);	// LED AMARELO DESLIGA
digitalWrite(ledVermelho, HIGH);// LED VERMELHO LIGA
delay(10000);										// FICA 10 SEGUNDOS LIGADO
digitalWrite(ledVermelho, LOW);// LED VERMELHO DESLIGA
// RETORNA O LAÇO
}