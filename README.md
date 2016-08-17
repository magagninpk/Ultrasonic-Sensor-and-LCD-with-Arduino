### Sensor Ultrasonico e LCD com Arduino

> Este   projeto   tem   como   objetivo   o   estudo   do   arduino   e   sensor  
ultrassônico,   desenvolvendo   um   sensor   de   ré,   que   pode   ser   utilizado   em   vários  automóveis quando está estacionando, auxiliando na visibilidade.
Desenvolvido na disciplina de Comunicação de Dados, UNESC.


### codeblock
Configuração dos pinos do display LCD
``` cpp
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
```
cálculo do tempo do sinal emitido pelo sensor,  convertido para distância em centímetros e polegadas
``` cpp
distance_cm = time / 29.4 / 2;
distance_in = time / 74.7 / 2;
```
### Tabela dos Pinos LCD, Sensor e Arduino
| LCD      	|Função    | Ligação  |
| :-------- | --------:| :--: |
| 1		    | Vss      |  Pino 4 ArduinoGND |
| 2	        | Vdd 	   |  Vcc 5V  |
| 3         | V0       | Pino central Potenciômetro  |
| 4         | RS       | Pino 12 Arduino |
| 5         | RW       | GND  |
| 6         | E        | Pino 11 Arduino|
| 7         | D0       | Não Conctado |
| 8         | D1       | Não Conectado|
| 9         | D2       | Não Conectado|
| 10        | D3       | Não Conectado|
| 11        | D4       | Pino 5 Arduino|
| 12        | D5       | Pino 4 Arduino|
| 13        | D6       | Pino 3 Arduino|
| 14        | D7       | Pino 2 Arduino|
| 15        | A        | Vcc 5V |
| 16        | K        | GND    |

### Tabela de Pinos Sensor e Arduino
| Sensor |Arduino|
| :----  | :--:  |
| Echo   | Pino 8| 
| Trig   | Pino 9|
| GND    | GND   |
| Vcc    | Vcc 5V|

###Materiais Utilizados
