
##############################
# Country definition for CZE #
##############################

province = { id = 466 landfort = 5 } # Strakonice
province = { id = 467 landfort = 2 } # Tábor
province =
{ id       = 469
  anti_air = 2
  air_base = { size = 3 current_size = 3 }
}            # Prague
province = { id = 470 anti_air = 2 } # Pilsen
province = { id = 471 landfort = 5 } # Ústí
province = { id = 472 landfort = 6 } # Liberec
province = { id = 474 landfort = 6 } # Ostrava
province = { id = 475 landfort = 2 anti_air = 2 } # Brno
province =
{ id       = 476
  anti_air = 2
  air_base = { size = 1 current_size = 1 }
  landfort = 2
  ic       = 5
}            # Bratislava
province = { id = 477 landfort = 1 } # Banská Bystrica
province = { id = 490 ic = 3 } # Kosice

#####################
# Country main data #
#####################

country =
{ tag                    = CZE
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  manpower               = 150
  capital                = 469
  diplomacy =
  { relation = { tag = ENG value = 125 }
    relation = { tag = FIN value = 50 }
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = -25 }
    relation = { tag = HUN value = -50 }
    relation = { tag = ITA value = 15 }
    relation = { tag = POL value = -1 }
    relation = { tag = ROM value = 20 }
    relation = { tag = SOV value = 100 }
    relation = { tag = YUG value = 50 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "GER" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 3 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 1 }
  nationalprovinces      = { 471 472 466 467 470 469 468 474 475 478 477 490 499 476 }
  ownedprovinces         = { 471 472 466 467 470 469 468 474 475 478 477 490 499 476 }
  controlledprovinces    = { 471 472 466 467 470 469 468 474 475 478 477 490 499 476 }
  # Eastern Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 1010  1020  1110  1190  1310  14000 2010  2020  2030  2040  2150  2290  2300  2310  2450  2460  2510  4010  4020  4120 
                             5010  5020  5080  5090  5190  6010  6020  9010 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 3
    free_market       = 9
    freedom           = 8
    professional_army = 5
    defense_lobby     = 9
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 24001 }
  headofgovernment       = { type = 9 id = 24002 }
  foreignminister        = { type = 9 id = 24003 }
  armamentminister       = { type = 9 id = 24004 }
  ministerofsecurity     = { type = 9 id = 24005 }
  ministerofintelligence = { type = 9 id = 24006 }
  chiefofstaff           = { type = 9 id = 24007 }
  chiefofarmy            = { type = 9 id = 24008 }
  chiefofnavy            = { type = 9 id = 24009 }
  chiefofair             = { type = 9 id = 24010 }
  # ################################
  # Czech army
  # ################################
  # The 8th Corps, based as reserves in Slovakia
  landunit =
  { id       = { type = 26000 id = 1 }
    location = 490
    name     = "VIII Druh Vojenského Utvaru"
    division =
    { id       = { type = 26000 id = 2 }
      name     = "9. divize"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 26000 id = 3 }
      name     = "15. divize"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 26000 id = 4 }
      name     = "21. divize"
      type     = infantry
      strength = 100
      model    = 0
      extra    = anti_air
    }
  }
  # General Reserves, based in Moravia
  landunit =
  { id       = { type = 26000 id = 5 }
    location = 467
    name     = "Generálni Rezeny"
    division =
    { id       = { type = 26000 id = 6 }
      name     = "1. rychlá divize"
      type     = light_armor
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 26000 id = 7 }
      name     = "4. divize"
      type     = infantry
      strength = 100
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 26000 id = 8 }
      name     = "12. divize"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id    = { type = 26000 id = 9 }
      name  = "13. motostrelecká divize"
      type  = infantry
      model = 1
      extra = armored_car
    }
    division =
    { id       = { type = 26000 id = 10 }
      name     = "16. divize"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 26000 id = 11 }
      name     = "22. divize"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  # 1st Army - in Bohemia
  landunit =
  { id       = { type = 26000 id = 12 }
    location = 471
    name     = "I Armáda"
    division =
    { id       = { type = 26000 id = 13 }
      name     = "18. divize"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 26000 id = 14 }
      name     = "2. divize"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 26000 id = 15 }
      name     = "5. divize"
      type     = infantry
      strength = 100
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 26000 id = 16 }
      name     = "3. divize"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 26000 id = 17 }
      name     = "17. divize"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  # 2nd Army - N-Moravia
  landunit =
  { id       = { type = 26000 id = 18 }
    location = 472
    name     = "II Armáda"
    division =
    { id       = { type = 26000 id = 19 }
      name     = "1. horská brigáda"
      type     = bergsjaeger
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 26000 id = 20 }
      name     = "7. divize"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  # 4th Army - Slovakia
  landunit =
  { id       = { type = 26000 id = 21 }
    location = 477
    name     = "IV Armáda"
    division =
    { id       = { type = 26000 id = 22 }
      name     = "3. rychlá divize"
      type     = light_armor
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 26000 id = 23 }
      name     = "10. divize"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 26000 id = 24 }
      name     = "11. divize"
      type     = infantry
      strength = 100
      model    = 0
      extra    = anti_air
    }
  }
  # 3rd Army - S-Morawia
  landunit =
  { id       = { type = 26000 id = 25 }
    location = 467
    name     = "III Armáda"
    division =
    { id       = { type = 26000 id = 26 }
      name     = "2. rychlá divize"
      type     = light_armor
      model    = 1
      strength = 100
    }
    division =
    { id       = { type = 26000 id = 27 }
      name     = "4. rychlá divize"
      type     = light_armor
      model    = 0
      strength = 100
    }
    division =
    { id    = { type = 26000 id = 28 }
      name  = "14. motostrelecká divize"
      type  = infantry
      model = 1
      extra = armored_car
    }
    division =
    { id       = { type = 26000 id = 29 }
      name     = "19. divize"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 26000 id = 30 }
      name     = "6. divize"
      type     = infantry
      strength = 100
      model    = 0
      extra    = engineer
    }
    division =
    { id       = { type = 26000 id = 31 }
      name     = "20. divize"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
}
