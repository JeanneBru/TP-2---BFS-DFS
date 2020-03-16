//
//  sommet.h
//  TP 2 - BFS & DFS
//
//  Created by Jeanne Alexandra Brunard on 13/03/2020.
//  Copyright © 2020 Jeanne Alexandra Brunard. All rights reserved.
//

#ifndef sommet_h
#define sommet_h

class Sommet
{
    private :
    
    friend class Graphe;
    
    int num;
    int marquage; // 0 si blanc 1 si gris 2 si noir
    int pred; // le pred est un autre sommet
    
    public:
    
    Sommet();
    
    
};





#endif /* sommet_h */
