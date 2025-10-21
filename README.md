# cpp00

Esercizi introduttivi in C++ per la scuola 42.

## Struttura del progetto

- **ex00**: Megaphone
  - Programma che stampa in maiuscolo l'input ricevuto da linea di comando.
  - File: `Megaphone.cpp`, `Makefile`

- **ex01**: Phonebook
  - Rubrica da terminale: aggiungi, cerca e visualizza contatti (nome, cognome, nickname, telefono, segreto oscuro). Massimo 8 contatti, con sovrascrittura circolare.
  - File: `main.cpp`, `phonebook.cpp`, `phonebook.hpp`, `contact.cpp`, `contact.hpp`, `Makefile`

## Compilazione

Ogni esercizio ha il proprio `Makefile`. Per compilare:

```sh
cd ex00 && make
cd ex01 && make
```

## Esecuzione

### Megaphone
```sh
./megaphone "testo da urlare"
```

### Phonebook
```sh
./phonebook
```

Comandi disponibili:
- `ADD`    : aggiungi un contatto
- `SEARCH` : cerca e visualizza i contatti
- `EXIT`   : esci dal programma

## Autore
Progetto realizzato per la scuola 42.
