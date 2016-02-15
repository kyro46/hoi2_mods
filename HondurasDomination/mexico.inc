
##############################
# Country definition for MEX #
##############################

province = { id = 747 anti_air = 1 } # Monterrey
province = { id = 751 anti_air = 1 } # Guadalajara
province = { id = 752 anti_air = 2 } # Mexico City
province =
{ id         = 754
  anti_air   = 2
  air_base   = { size = 2 current_size = 2 }
  naval_base = { size = 4 current_size = 4 }
}              # Acapulco

#####################
# Country main data #
#####################

country =
{ tag                    = MEX
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  capital                = 752
  manpower               = 62
  transports             = 20
  escorts                = 3
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 8
    freedom           = 6
    free_market       = 6
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 3
  }
  nationalprovinces      = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  ownedprovinces         = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  controlledprovinces    = { 756 755 754 753 752 751 750 747 749 745 742 741 744 743 740 739 737 738 }
  # Semi-Major Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1020 1110 1190 2150 2290 2300 2310 2450 2460 2510 4010 5010 5080 5090 5190 6010 }
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = HOL value = 25 }
    relation = { tag = IRE value = 30 }
    relation = { tag = USA value = 125 }
  }
  headofstate            = { type = 9 id = 36001 }
  headofgovernment       = { type = 9 id = 36002 }
  foreignminister        = { type = 9 id = 36003 }
  armamentminister       = { type = 9 id = 36004 }
  ministerofsecurity     = { type = 9 id = 36005 }
  ministerofintelligence = { type = 9 id = 36006 }
  chiefofstaff           = { type = 9 id = 36007 }
  chiefofarmy            = { type = 9 id = 36008 }
  chiefofnavy            = { type = 9 id = 36009 }
  chiefofair             = { type = 9 id = 36010 }
  # Firepower
  landunit =
  { id       = { type = 29500 id = 1 }
    name     = "Ejercito de Mexico"
    location = 752
    division =
    { id       = { type = 29500 id = 2 }
      name     = "Guardia del Presidente"
      strength = 100
      type     = infantry
      model    = 1 # Special trained w. foreign eq.
    }
    division =
    { id       = { type = 29500 id = 3 }
      name     = "I División de Infantería"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 29500 id = 4 }
      name     = "II División de Infantería"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 29500 id = 5 }
      name     = "III División de Infantería"
      strength = 100
      type     = infantry
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 29500 id = 6 }
    name     = "Caballería de Mexico"
    location = 742
    division =
    { id       = { type = 29500 id = 7 }
      name     = "I División de Caballería"
      strength = 100
      type     = cavalry
    }
    division =
    { id       = { type = 29500 id = 8 }
      name     = "II División de Caballería"
      strength = 100
      type     = cavalry
    }
  }
  # navalunit = {
  # id = { type = 29500 id = 11 }
  # name = "Armada de Mexico"
  # location = 754
  # base = 754
  # division = { 
  # id = { type = 29500 id = 12 } 
  # name = "1a Flotilla de Destructores" 
  # type = destroyer 
  # model = 0 
  # }
  # }
  airunit =
  { id       = { type = 29500 id = 9 }
    name     = "Fuerza Aérea Mexicana"
    location = 754
    base     = 754
    division =
    { id       = { type = 29500 id = 10 }
      name     = "1a Grupo Aéreo de Caza"
      type     = interceptor
      model    = 0
      strength = 50
    }
  }
}
