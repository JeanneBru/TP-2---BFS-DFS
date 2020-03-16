//
//  main.cpp
//  TP 2 - BFS & DFS
//
//  Created by Jeanne Alexandra Brunard on 13/03/2020.
//  Copyright © 2020 Jeanne Alexandra Brunard. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <iostream>
#include "graphe.h"
#include "sommet.h"
#include <fstream>
#include<vector>

Sommet::Sommet()
{
    num = 0;
    marquage = 0;
    pred = 0;

}

void Graphe::cree()
{
    // creation vector
    Sommet *p = new Sommet();
    l_sommets.push_back(p);
}

void Graphe :: chargement()
{
    std::ifstream ifs{"fichier.txt"};
    
    Graphe graphe;
    
        if(!ifs)
        {
            std::cout << "Probleme ouverture fichier"<<std::endl;
            ifs.close();
        }
    
        else
        {

            ifs>>orient; // orientation
            ifs>>ordre; // nombre de sommet
            ifs>>taille; // nombre d'arrete
            
            if(orient ==0)
            {
                std::cout<<"le graphe est non orienté"<<std::endl;
            }
            
            else
            {
                std::cout<<"le graphe est orienté"<<std::endl;
            }
            
            std::cout<<"la taille est "<<taille<<std::endl;
             
            
            for (size_t i=0; i<taille; i++)
            {
               
                 Sommet *nouv = new Sommet();
                l_sommets.push_back(nouv);
                
                ifs>>l_sommets[i]->num;// le premier caractere est le numero du sommet
                ifs>>l_sommets[i]->pred; // le deuxieme est le predecesseur

            }
            
           // Affichage liste
            
            for (size_t i=0; i<taille; i++)
            {
                std::cout<<"    sommet "<<l_sommets[i]->num << ":";
                std::cout<<l_sommets[i]->pred<<std::endl;
               
            }
           
             ifs.close(); // fermeture fichier
          
        }
   
}


void Graphe :: affichage() const
{
    
}





int main(int argc, const char * argv[]) {
    
    Graphe graphe;
    
    
    
    graphe.chargement();
    
    return 0;
}
