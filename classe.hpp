class Personnage
{
    int m_vie;
    int m_mana;

    std::string m_nomArme;
    int m_degatsArme;
    
    public :
    Personnage();
};

Personnage::Personnage()
{
    m_vie = 100;
    m_mana = 100;
    m_nomArme = "Épée rouillée";
    m_degatsArme = 10;
}


