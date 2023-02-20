class File:
    def __init__(self):
        self.file = []

    def filevide(self):
        return len(self.file) == 0

    def enfiler(self, element):
        self.file.append(element)

    def defiler(self):
        if self.filevide():
            print("La file est vide.")
        else:
            return self.file.pop(0)

    def printfile(self):
        print(self.file)

    def filepleine(self, taille):
        return len(self.file) == taille



# Création d'une file
f = File()

# Vérification si la file est vide
print(f.filevide())  # True

# Ajout d'éléments dans la file
f.enfiler(1)
f.enfiler(2)
f.enfiler(3)
f.enfiler(4)

# Affichage de la file
f.printfile()  # [1, 2, 3, 4]

# Retrait d'un élément de la file
print(f.defiler())  # 1

# Affichage de la file après le retrait
f.printfile()  # [2, 3, 4]

# Vérification si la file est pleine
print(f.filepleine(5))  # False

# Ajout d'un autre élément dans la file
f.enfiler(5)

# Vérification si la file est pleine après l'ajout
print(f.filepleine(5))  # True

# Affichage de la file complète
f.printfile()  # [2, 3, 4, 5]
