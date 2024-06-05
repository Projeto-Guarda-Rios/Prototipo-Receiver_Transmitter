# Projeto Guarda Rios

## Protótipos Incluídos

### Transmitter(Transmissor dos Valores Arrecadados Pelos Sensores Na Sonda)
### Receiver(Recetor dos Valores Enviados pelo Transmitter)

## Como Aplicar

### Transmitter

Criar um ficheiro novo no ***Arduino IDE*** e colar o código do [**receiver**](https://github.com/Projeto-Guarda-Rios/Prototipo-Receiver_Transmitter/blob/main/PGR-Receiver.ino).
Asseguir deve-se incluir todas as **bibliotecas** do projeto, para isso vá a **Sketch -> Include Library -> Manage Libraries...**, agora ponha o nome das bibliotecas, primeiro a biblioteca **"Wire"** depois clique em ***Install***, agora a biblioteca **"ADS1X15"** e clique em ***Install***! Para a biblioteca **"EBYTE"** comece por dar [*download*](https://github.com/KrisKasprzak/EBYTE) a esta Biblioteca, asseguir clique em **Sketch -> Include Library -> Add *.ZIP* Library** e selecione o ficheiro ***.ZIP*** que acabou de descarregar!
Asseguir ligar as **ESP32** ao computador e clicar em ***Upload***, enquanto o código estiver a ser ***Uploaded*** deve-se clicar e segurar no botão ***Boot*** da **ESP32** até terminar o *Upload*! 
Por fim é recomendado clicar no botão ***EN*** da **ESP32**, para dar **reset** à placa!

### Receiver

Criar um ficheiro novo no ***Arduino IDE*** e colar o código do [**transmitter**](https://github.com/Projeto-Guarda-Rios/Prototipo-Receiver_Transmitter/blob/main/PGR-Transmitter.ino).
Asseguir deve-se incluir todas as **bibliotecas** do projeto, para a biblioteca **"EBYTE"** comece por dar [*download*](https://github.com/KrisKasprzak/EBYTE) a esta Biblioteca, asseguir clique em **Sketch -> Include Library -> Add *.ZIP* Library** e selecione o ficheiro ***.ZIP*** que acabou de descarregar!
Asseguir ligar as **ESP32** ao computador e clicar em ***Upload***, enquanto o código estiver a ser ***Uploaded*** deve-se clicar e segurar no botão ***Boot*** da **ESP32** até terminar o *Upload*! 
Por fim é recomendado clicar no botão ***EN*** da **ESP32**, para dar **reset** à placa!



## Lista de Materiais

### Transmitter

* **ESP32**
* **Antena LoRe EBYTE E220**

### Receiver

* **ESP32**
* **Antena LoRe EBYTE E220**
* **Sensor de Turbidez**

## Ficheiros dos Códigos

* ### [Transmitter](https://github.com/Projeto-Guarda-Rios/Prototipo-Receiver_Transmitter/blob/main/PGR-Transmitter.ino)
* ### [Receiver](https://github.com/Projeto-Guarda-Rios/Prototipo-Receiver_Transmitter/blob/main/PGR-Receiver.ino)

## Bibliotecas *.ZIP*

* ### [EBYTE](https://github.com/KrisKasprzak/EBYTE)

#

## Diagrama de Montagem

![This is an alt text.](https://abacasstorageaccnt.blob.core.windows.net/cirkit/8bed7a91-538c-44fd-947a-6181d806945b.png)

#

![This is an alt text.](https://guarda-rios.pt/wp-content/uploads/2024/04/guarda_rios-removebg-preview-10.png)
