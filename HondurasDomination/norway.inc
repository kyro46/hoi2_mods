
##############################
# Country definition for NOR #
##############################

province =
{ id          = 107
  anti_air    = 2
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 4 current_size = 4 }
  coastalfort = 3
}               # Oslo
province =
{ id          = 110
  anti_air    = 2
  naval_base  = { size = 10 current_size = 10 }
  air_base    = { size = 5 current_size = 5 }
  coastalfort = 3
}               # Bergen
province = { id = 118  coastalfort = 2 } # Trondheim
province =
{ id         = 125
  anti_air   = 1
  naval_base = { size = 3 current_size = 3 }
  air_base   = { size = 1 current_size = 1 }
}              # Narvik

#####################
# Country main data #
#####################

country =
{ tag                    = NOR
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 32
  capital                = 107
  # Norwegian merchant marine is INSANE!
  transports             = 200
  escorts                = 5
  diplomacy =
  { relation = { tag = BEL value = 100 }
    relation = { tag = DEN value = 150 }
    relation = { tag = ENG value = 90 }
    relation = { tag = FIN value = 75 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = 75 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 4 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 4 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 2 }
  SpyInfo                = { country = "POL" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 3 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "DEN" NumberOfSpies = 2 }
  SpyInfo                = { country = "HOL" NumberOfSpies = 1 }
  nationalprovinces      = { 107 108 109 110 111 116 117 118 124 125 128 129 }
  ownedprovinces         = { 107 108 109 110 111 116 117 118 124 125 128 129 }
  controlledprovinces    = { 107 108 109 110 111 116 117 118 124 125 128 129 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010 4020 4120 2150 2010 2020 2290 2300 2310 2450 2460 3130 2510 1010 1190 1110 9010 5010 5020 5080 5090 5190 6010 6020
                             3010 3070 3250 3400 3410 8020 8040 8050
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 9
    freedom           = 7
    free_market       = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 14001 }
  headofgovernment       = { type = 9 id = 14002 }
  foreignminister        = { type = 9 id = 14003 }
  armamentminister       = { type = 9 id = 14004 }
  ministerofsecurity     = { type = 9 id = 14005 }
  ministerofintelligence = { type = 9 id = 14006 }
  chiefofstaff           = { type = 9 id = 14007 }
  chiefofarmy            = { type = 9 id = 14008 }
  chiefofnavy            = { type = 9 id = 14009 }
  chiefofair             = { type = 9 id = 14010 }
  landunit =
  { location = 107
    name     = "Den Norske Hær"
    id       = { type = 12600 id = 1 }
    division =
    { id       = { type = 12600 id = 2 }
      name     = "1. Infanteridivisjon"
      type     = infantry
      strength = 60
    }
  }
  landunit =
  { location = 125
    name     = "6. Hærkorps"
    id       = { type = 12600 id = 3 }
    division =
    { id       = { type = 12600 id = 4 }
      name     = "6. Infanteridivisjon"
      type     = infantry
      strength = 35
    }
  }
  navalunit =
  { location = 107
    base     = 107
    name     = "1. Kystvaktdistrikt"
    id       = { type = 12600 id = 5 }
    division =
    { id    = { type = 12600 id = 6 }
      name  = "1. Undervannsbåteskadre"
      type  = submarine
      model = 0
    }
    division =
    { id    = { type = 12600 id = 7 }
      name  = "2. Undervannsbåteskadre"
      type  = submarine
      model = 0
    }
  }
  navalunit =
  { location = 125
    base     = 125
    name     = "3. Kystvaktdistrikt"
    id       = { type = 12600 id = 8 }
    division =
    { id    = { type = 12600 id = 9 }
      name  = "KNM Norge"
      type  = heavy_cruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division =
    { id    = { type = 12600 id = 10 }
      name  = "KNM Eidsvold"
      type  = heavy_cruiser
      model = 0
      extra1 = naval_sa_l
      extra2 = naval_anti_air_l
      extra3 = none
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
    }
    division =
    { id    = { type = 12600 id = 11 }
      name  = "KNM Tordenskjold"
      type  = light_cruiser
      model = 0
      extra1 = none
      extra2 = none
      brigade_model1 = 0
      brigade_model2 = 0
    }
    division =
    { id    = { type = 12600 id = 12 }
      name  = "KNM Harald Haarfagre"
      type  = light_cruiser
      model = 0
      extra1 = none
      extra2 = none
      brigade_model1 = 0
      brigade_model2 = 0
    }
  }
}
