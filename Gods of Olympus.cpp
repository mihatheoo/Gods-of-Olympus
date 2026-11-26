#include <stdio.h> 
#include <windows.h>

int main () {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
	int x;
	int score;

	dias:
		score=0;
		printf ("Ποιος ήταν ο πατέρας του Δία;\n");
		printf ("1)Ουρανός\n2)Κρόνος\n3)Ωκεανός\n4)Άτλας\n");
		scanf ("%d",&x);
		if (x==2) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto dias;
		}
		printf ("Ποια ήταν η μητέρα του Δία;\n");
		printf ("1)Ήρα\n2)Γαία\n3)Ρέα\n4)Δήμητρα\n");
		scanf ("%d",&x);
		if (x==3) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto dias;
		}
		printf ("Ποιο ήταν το όπλο του Δία;\n");
		printf ("1)Κεραυνός\n2)Τρίαινα\n3)Τόξο\n4)Σφυρί\n");
		scanf ("%d",&x);
		if (x==1) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto dias;
		}
		printf ("Που μένει ο Δίας;\n");
		printf ("1)Παρνασσός\n2)Πήλιο\n3)Όλυμπος\n4)Ταΰγετος\n");
		scanf ("%d",&x);
		if (x==3) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto dias;
		}
		printf ("Πόσα αδέλφια είχε ο Δίας;\n");
		printf ("1)3\n2)5\n3)7\n4)10\n");
		scanf ("%d",&x);
		if (x==2) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto dias;
		}
		if (score==5) {
		printf ("Πέρασες στον επόμενο θεό: Ποσειδώνας\n");
		}

	Poseidon:
		score=0;
		printf ("Θεός τίνος ήταν;\n");
		printf ("1)Της φωτιάς\n2)Της θάλασσας\n3)Του ουρανού\n4)Της γεωργίας\n");
		scanf ("%d",&x);
		if (x==2) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Poseidon;
		}
		printf ("Ποιο είναι το όπλο του;\n");
		printf ("1)Τρίαινα\n2)Δόρυ\n3)Τόξο\n4)Σφυρί\n");
		scanf ("%d",&x);
		if (x==1) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Poseidon;
		}
		printf ("Ποιος είναι αδελφός του;\n");
		printf ("1)Άρης\n2)Ερμής\n3)Άδης\n4)Απόλλωνας\n");
		scanf ("%d",&x);
		if (x==3) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Poseidon;
		}
		printf ("Πού βρίσκεται το παλάτι του;\n");
		printf ("1)Στον Όλυμπο\n2)Στον βυθό της θάλασσας\n3)Στον Άδη\n4)Στους Δελφούς\n");
		scanf ("%d",&x);
		if (x==2) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Poseidon;
		}
		printf ("Με ποια θεά διεκδίκησε την προστασία της Αθήνας;\n");
		printf ("1)Ήρα\n2)Άρτεμις\n3)Αθηνά\n4)Δήμητρα\n");
		scanf ("%d",&x);
		if (x==3) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Poseidon;
		}
		if (score==5) {
		printf ("Πέρασες στον επόμενο θεό: Ήρα\n");
		}

	Hera:
		score=0;
		printf ("Ποιος είναι ο σύζυγός της;\n");
		printf ("1)Ποσειδώνας\n2)Δίας\n3)Άδης\n4)Ήφαιστος\n");
		scanf ("%d",&x);
		if (x==2) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hera;
		}
		printf ("Θεά τίνος είναι;\n");
		printf ("1)Του κυνηγιού\n2)Του πολέμου\n3)Της θάλασσας\n4)Του γάμου\n");
		scanf ("%d",&x);
		if (x==4) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hera;
		}
		printf ("Ποιο πουλί ήταν ιερό για αυτήν;\n");
		printf ("1)Κουκουβάγια\n2)Αετός\n3)Περιστέρι\n4)Παγώνι\n");
		scanf ("%d",&x);
		if (x==4) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hera;
		}
		printf ("Ποιος από τους παρακάτω ήταν γιος της και του Δία;\n");
		printf ("1)Ερμής\n2)Άρης\n3)Απόλλωνας\n4)Διόνυσος\n");
		scanf ("%d",&x);
		if (x==2) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hera;
		}
		printf ("Ποιον ήρωα καταδίωξε η Ήρα;\n");
		printf ("1)Οδυσσέα\n2)Περσέα\n3)Ηρακλή\n4)Θησέα\n");
		scanf ("%d",&x);
		if (x==3) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hera;
		}
		if (score==5) {
		printf ("Πέρασες στον επόμενο θεό: Δήμητρα\n");
		}

	Demeter:
		score=0;
		printf ("Θεά τίνος ήταν η Δήμητρα;\n");
		printf ("1)Της σοφίας\n2)Του έρωτα\n3)Της γεωργίας\n4)Της μουσικής\n");
		scanf ("%d",&x);
		if (x==3) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Demeter;
		}
		printf ("Πώς λεγόταν η κόρη της;\n");
		printf ("1)Περσεφόνη\n2)Αθηνά\n3)Άρτεμη\n4)Εστία\n");
		scanf ("%d",&x);
		if (x==1) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Demeter;
		}
		printf ("Ποιος θεός άρπαξε την κόρη της;\n");
		printf ("1)Ποσειδώνας\n2)Άρης\n3)Ερμής\n4)Άδης\n");
		scanf ("%d",&x);
		if (x==4) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Demeter;
		}
		printf ("Ποια μυστήρια σχετίζονται με τη λατρεία της;\n");
		printf ("1)Ολυμπιακά\n2)Ελευσίνια\n3)Πυθικά\n4)Νέμεα\n");
		scanf ("%d",&x);
		if (x==2) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Demeter;
		}
		printf ("Ποιο ήταν σύμβολό της;\n");
		printf ("1)Λύρα\n2)Κράνος\n3)Στάχυ\n4)Τόξο\n");
		scanf ("%d",&x);
		if (x==3) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Demeter;
		}
		if (score==5) {
		printf ("Πέρασες στον επόμενο θεό: Αθηνά\n");
		}

	Athina:
		score=0;
		printf ("Πώς γεννήθηκε η Αθηνά;\n");
		printf ("1)Από τον αφρό\n2)Από ένα αυγό\n3)Από το κεφάλι του Δία\n4)Από τη θάλασσα\n");
		scanf ("%d",&x);
		if (x==3) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Athina;
		}
		printf ("Θεά τίνος ήταν η Αθηνά;\n");
		printf ("1)Της σοφίας\n2)Του κυνηγιού\n3)Της αγάπης\n4)Της γεωργίας\n");
		scanf ("%d",&x);
		if (x==1) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Athina;
		}
		printf ("Ποιο πουλί είναι σύμβολό της;\n");
		printf ("1)Παγώνι\n2)Αετός\n3)Κουκουβάγια\n4)Κοράκι\n");
		scanf ("%d",&x);
		if (x==3) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Athina;
		}
		printf ("Ποιο δέντρο χάρισε στην Αθήνα;\n");
		printf ("1)Συκιά\n2)Πεύκο\n3)Δάφνη\n4)Ελιά\n");
		scanf ("%d",&x);
		if (x==4) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Athina;
		}
		printf ("Ποιος ήταν ο πατέρας της;\n");
		printf ("1)Ποσειδώνας\n2)Δίας\n3)Άρης\n4)Κρόνος\n");
		scanf ("%d",&x);
		if (x==2) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Athina;
		}
		if (score==5) {
		printf ("Πέρασες στον επόμενο θεό: Απόλλωνας\n");
		}

	Apollo:
		score=0;
		printf ("Ποια ήταν η δίδυμη αδελφή του Απόλλωνα;\n");
		printf ("1)Αθηνά\n2)Άρτεμη\n3)Ήρα\n4)Αφροδίτη\n");
		scanf ("%d",&x);
		if (x==2) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Apollo;
		}
		printf ("Ποια ήταν η μητέρα του;\n");
		printf ("1)Ρέα\n2)Ήρα\n3)Λητώ\n4)Μαία\n");
		scanf ("%d",&x);
		if (x==3) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Apollo;
		}
		printf ("Ποιο μαντείο ήταν δικό του;\n");
		printf ("1)Δωδώνη\n2)Ολυμπία\n3)Νεμέα\n4)Δελφοί\n");
		scanf ("%d",&x);
		if (x==4) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Apollo;
		}
		printf ("Ποιο όργανο έπαιζε;\n");
		printf ("1)Λύρα\n2)Τύμπανο\n3)Σάλπιγγα\n4)Αυλό\n");
		scanf ("%d",&x);
		if (x==1) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Apollo;
		}
		printf ("Ποιο φυτό ήταν ιερό για αυτόν;\n");
		printf ("1)Ελιά\n2)Δάφνη\n3)Αμπέλι\n4)Κυπαρίσσι\n");
		scanf ("%d",&x);
		if (x==2) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Apollo;
		}
		if (score==5) {
		printf ("Πέρασες στον επόμενο θεό: Άρτεμη\n");
		}

	Artemis:
		score=0;
		printf ("Θεά τίνος ήταν η Άρτεμη;\n");
		printf ("1)Της θάλασσας\n2)Του γάμου\n3)Του κυνηγιού\n4)Της φωτιάς\n");
		scanf ("%d",&x);
		if (x==3) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Artemis;
		}
		printf ("Ποιος ήταν ο δίδυμος αδελφός της;\n");
		printf ("1)Ερμής\n2)Άρης\n3)Ήφαιστος\n4)Απόλλωνας\n");
		scanf ("%d",&x);
		if (x==4) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Artemis;
		}
		printf ("Ποιο ήταν το όπλο της;\n");
		printf ("1)Τόξο\n2)Τρίαινα\n3)Σφυρί\n4)Κεραυνός\n");
		scanf ("%d",&x);
		if (x==1) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Artemis;
		}
		printf ("Με ποιο ουράνιο σώμα συνδέεται;\n");
		printf ("1)Ήλιος\n2)Σελήνη\n3)Αυγερινός\n4)Κομήτης\n");
		scanf ("%d",&x);
		if (x==2) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Artemis;
		}
		printf ("Ποιο ζώο ήταν ιερό για αυτήν;\n");
		printf ("1)Λιοντάρι\n2)Φίδι\n3)Ελάφι\n4)Άλογο\n");
		scanf ("%d",&x);
		if (x==3) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Artemis;
		}
		if (score==5) {
		printf ("Πέρασες στον επόμενο θεό: Άρης\n");
		}

	Ares:
		score=0;
		printf ("Θεός τίνος ήταν ο Άρης;\n");
		printf ("1)Της μουσικής\n2)Του πολέμου\n3)Της θάλασσας\n4)Της σοφίας\n");
		scanf ("%d",&x);
		if (x==2) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Ares;
		}
		printf ("Ποιοι ήταν οι γονείς του;\n");
		printf ("1)Δίας και Λητώ\n2)Κρόνος και Ρέα\n3)Δίας και Μαία\n4)Δίας και Ήρα\n");
		scanf ("%d",&x);
		if (x==4) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Ares;
		}
		printf ("Ποια θεά ήταν ερωμένη του;\n");
		printf ("1)Αθηνά\n2)Άρτεμη\n3)Αφροδίτη\n4)Δήμητρα\n");
		scanf ("%d",&x);
		if (x==3) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Ares;
		}
		printf ("Πώς λέγονταν οι γιοι του που τον ακολουθούσαν στη μάχη;\n");
		printf ("1)Δείμος και Φόβος\n2)Κάστορας και Πολυδεύκης\n3)Ύπνος και Θάνατος\n4)Ορφέας και Λίνος\n");
		scanf ("%d",&x);
		if (x==1) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Ares;
		}
		printf ("Ποιο ήταν το ρωμαϊκό του όνομα;\n");
		printf ("1)Ιούπιτερ\n2)Μάρς\n3)Απόλλο\n4)Βούλκανος\n");
		scanf ("%d",&x);
		if (x==2) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Ares;
		}
		if (score==5) {
		printf ("Πέρασες στον επόμενο θεό: Αφροδίτη\n");
		}

	Aphrodite:
		score=0;
		printf ("Θεά τίνος ήταν η Αφροδίτη;\n");
		printf ("1)Του πολέμου\n2)Της γεωργίας\n3)Του κυνηγιού\n4)Της αγάπης και της ομορφιάς\n");
		scanf ("%d",&x);
		if (x==4) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Aphrodite;
		}
		printf ("Πώς γεννήθηκε σύμφωνα με τον Ησίοδο;\n");
		printf ("1)Από τον αφρό της θάλασσας\n2)Από το κεφάλι του Δία\n3)Από ένα δέντρο\n4)Από τη γη\n");
		scanf ("%d",&x);
		if (x==1) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Aphrodite;
		}
		printf ("Ποιος ήταν ο σύζυγός της;\n");
		printf ("1)Άρης\n2)Ερμής\n3)Απόλλωνας\n4)Ήφαιστος\n");
		scanf ("%d",&x);
		if (x==4) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Aphrodite;
		}
		printf ("Πώς λεγόταν ο γιος της;\n");
		printf ("1)Φόβος\n2)Έρωτας\n3)Ύπνος\n4)Πάνας\n");
		scanf ("%d",&x);
		if (x==2) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Aphrodite;
		}
		printf ("Ποιο πουλί ήταν σύμβολό της;\n");
		printf ("1)Κοράκι\n2)Παγώνι\n3)Περιστέρι\n4)Κουκουβάγια\n");
		scanf ("%d",&x);
		if (x==3) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Aphrodite;
		}
		if (score==5) {
		printf ("Πέρασες στον επόμενο θεό: Ήφαιστος\n");
		}

	Hephaestus:
		score=0;
		printf ("Θεός τίνος ήταν ο Ήφαιστος;\n");
		printf ("1)Της θάλασσας\n2)Της φωτιάς και της μεταλλουργίας\n3)Των ανέμων\n4)Της μουσικής\n");
		scanf ("%d",&x);
		if (x==2) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hephaestus;
		}
		printf ("Ποια θεά ήταν η σύζυγός του;\n");
		printf ("1)Ήρα\n2)Αθηνά\n3)Αφροδίτη\n4)Εστία\n");
		scanf ("%d",&x);
		if (x==3) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hephaestus;
		}
		printf ("Ποια ήταν η σωματική του ιδιαιτερότητα;\n");
		printf ("1)Ήταν τυφλός\n2)Ήταν γίγαντας\n3)Είχε τρία κεφάλια\n4)Ήταν χωλός\n");
		scanf ("%d",&x);
		if (x==4) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hephaestus;
		}
		printf ("Πού βρισκόταν το εργαστήριό του;\n");
		printf ("1)Στη θάλασσα\n2)Στον ουρανό\n3)Στα Τάρταρα\n4)Στο ηφαίστειο\n");
		scanf ("%d",&x);
		if (x==4) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hephaestus;
		}
		printf ("Ποια πρώτη γυναίκα έπλασε από πηλό;\n");
		printf ("1)Ελένη\n2)Πανδώρα\n3)Αντιγόνη\n4)Ιοκάστη\n");
		scanf ("%d",&x);
		if (x==2) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hephaestus;
		}
		if (score==5) {
		printf ("Πέρασες στον επόμενο θεό: Ερμής\n");
		}

	Hermes:
		score=0;
		printf ("Ποιος ήταν ο ρόλος του Ερμή μεταξύ των θεών;\n");
		printf ("1)Στρατηγός\n2)Γιατρός\n3)Αγγελιοφόρος\n4)Μάγειρας\n");
		scanf ("%d",&x);
		if (x==3) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hermes;
		}
		printf ("Τι φορούσε στα πόδια του;\n");
		printf ("1)Χάλκινες περικνημίδες\n2)Φτερωτά σανδάλια\n3)Γούνινες μπότες\n4)Τίποτα\n");
		scanf ("%d",&x);
		if (x==2) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hermes;
		}
		printf ("Πώς λέγεται η ράβδος του;\n");
		printf ("1)Θύρσος\n2)Σκήπτρο\n3)Τρίαινα\n4)Κηρύκειο\n");
		scanf ("%d",&x);
		if (x==4) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hermes;
		}
		printf ("Ποια ήταν η μητέρα του;\n");
		printf ("1)Μαία\n2)Ήρα\n3)Δήμητρα\n4)Λητώ\n");
		scanf ("%d",&x);
		if (x==1) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hermes;
		}
		printf ("Από τι έφτιαξε την πρώτη του λύρα;\n");
		printf ("1)Από κέρατο ταύρου\n2)Από καύκαλο χελώνας\n3)Από ξύλο ελιάς\n4)Από χρυσό\n");
		scanf ("%d",&x);
		if (x==2) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hermes;
		}
		if (score==5) {
		printf ("Πέρασες στον επόμενο θεό: Εστία\n");
		}

	Hestia:
		score=0;
		printf ("Θεά τίνος ήταν η Εστία;\n");
		printf ("1)Της θάλασσας\n2)Του πολέμου\n3)Της εστίας και του σπιτιού\n4)Των ονείρων\n");
		scanf ("%d",&x);
		if (x==3) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hestia;
		}
		printf ("Ποιο στοιχείο ήταν ιερό για αυτήν;\n");
		printf ("1)Νερό\n2)Άνεμος\n3)Πάγος\n4)Φωτιά\n");
		scanf ("%d",&x);
		if (x==4) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hestia;
		}
		printf ("Ποια ήταν η σχέση της με τον Δία;\n");
		printf ("1)Σύζυγος\n2)Αδελφή\n3)Κόρη\n4)Θεία\n");
		scanf ("%d",&x);
		if (x==2) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hestia;
		}
		printf ("Ποιος θεός πήρε τη θέση της στους 12 Ολύμπιους, σύμφωνα με κάποιες παραδόσεις;\n");
		printf ("1)Άρης\n2)Ερμής\n3)Διόνυσος\n4)Άδης\n");
		scanf ("%d",&x);
		if (x==3) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hestia;
		}
		printf ("Ποιο ήταν το ρωμαϊκό της όνομα;\n");
		printf ("1)Βέστα\n2)Ιουνώ\n3)Μινέρβα\n4)Βενέρα\n");
		scanf ("%d",&x);
		if (x==1) {
		printf ("Σωστό\n");
		score++;
		}
		else {
		printf ("Λάθος προσπάθησε ξανά\n");
		goto Hestia;
		}
		if (score==5) {
		printf ("Συγχαρητήρια!\n");
		}

	return 0;
}