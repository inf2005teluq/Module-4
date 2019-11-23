// Fichier Figure.h
// Définition de la classe de base Figure
#ifndef FIGURE_H
#
define FIGURE_Hclass Figure {
  public: virtual float aire() const {
    return 0.0;
  }
  virtual float volume() const {
    return 0.0;
  }
  virtual void afficherNomFigures() const = 0;
  // Fonction virtuelle pure
  virtual void afficher() const = 0;
  // Fonction virtuelle pure};
  #endif
