// Procédure pour échanger les valeurs de deux entiers a et b
Procédure Permut(var a: Entier, var b: Entier)
    Déclarer temp de Entier
    temp <- a // Stocker la valeur de a dans temp
    a <- b   // Affecter la valeur de b à a
    b <- temp // Affecter la valeur de temp (ancien a) à b
Fin Procédure

// Procédure principale pour tester la procédure Permut
Procédure Main
    Déclarer a, b de Entier

    // Saisir les valeurs de a et b
    Afficher "Saisir la valeur de a : "
    Lire a
    Afficher "Saisir la valeur de b : "
    Lire b

    // Afficher les valeurs avant permutation
    Afficher "Avant permutation : a = ", a, ", b = ", b

    // Appeler la procédure Permut
    Permut(a, b)

    // Afficher les valeurs après permutation
    Afficher "Après permutation : a = ", a, ", b = ", b
Fin Procédure

// Appel de la procédure principale
Main()
