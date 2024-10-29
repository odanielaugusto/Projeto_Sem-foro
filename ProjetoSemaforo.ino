
const byte VERMELHO = 13; //LED Vermelho conectado no pino 13 
const byte AMARELO = 12;  //LED Amarelo conectado no pino 12 
const byte VERDE  = 11;    //LED Azul conectado no pino 11 


void setup() {
  
  pinMode(VERMELHO, OUTPUT); //Pino do LED vermelho definido como saída
  pinMode(AMARELO, OUTPUT);  //Pino do LED amarelo definido como saída
  pinMode(VERMELHO, OUTPUT); //Pino do LED azul definido como saída
}

void loop() {

  digitalWrite(VERMELHO, HIGH); // Liga o LED vermelho no Arduino  

  delay(6000);                  // Deixa o LED ligado por 5000 milissegundos (5 segundos).

  digitalWrite(VERMELHO, LOW);  //Desliga o LED vermelho no Arduino  

  digitalWrite(AMARELO, HIGH);  // Liga o LED amarelo no Arduino 

  delay(2000);                  // Deixa o LED amarelo ligado por 2000 milissegundos (2 segundos).

  digitalWrite(AMARELO, LOW);   //Desliga o LED amarelo no Arduino  

  digitalWrite(VERDE, HIGH);    // Liga o LED verde no Arduino 

  delay(4000);                  // Deixa o LED verde ligado por 4000 milissegundos (4 segundos).

  digitalWrite(VERDE, LOW);     //Desliga o LED verde no Arduino

  digitalWrite(AMARELO, HIGH);  // Liga o LED amarelo no Arduino  

  delay(2000);                  // Deixa o LED amarelo ligado por 2000 milissegundos (2 segundos).

  digitalWrite(AMARELO, LOW);   // Desliga o LED amarelo no Arduino

  }

