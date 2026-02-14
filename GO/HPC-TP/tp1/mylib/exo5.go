package mylib


import (
	"fmt"
)


func Exo5() {
	fmt.Println("-----exo 5 start-----")
	/*
	Ecrire un algorithme distribue compose de n processus diriges evenement connecte avec
	une topologie anneau chacun connais son successeur et predecesseur, le but de
	l'algorithme est d'implementer un client serveur sur l'anneau, il y a un seul processus qui
	joue le role du serveur et les autres clients. quand un client souhaite un service il envoie
	un message a son successeur qui le relai sur l'anneau jusqu'au serveur la reponse du
	serveur aussi suivre le chemin de l'anneau. utiliser les goroutines, les channels et
	waitGroups.
	*/





	fmt.Println("-----exo 5 finished-----")
}