
##############################
# Country definition for AUS #
##############################

province =
{ id       = 377
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Innsbruck
province = { id = 461 anti_air = 1 } # Klagenfurt
province =
{ id       = 463
  anti_air = 4
  air_base = { size = 10 current_size = 10 }
}            # Vienna

#####################
# Country main data #
#####################

country =
{ tag                    = AUS
  # HACK to make sure that Germany gets the whole manpower pool, all units and resources on annex.
  # Unwanted side-effect: Will never accept peace with Germany.
  regular_id             = GER
  intrinsic_gov_type     = social_liberal
  manpower               = 65
  capital                = 463
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  diplomacy =
  { relation = { tag = ENG value = 75 }
    relation = { tag = FIN value = 55 }
    relation = { tag = FRA value = -10 }
    relation = { tag = GER value = 100 }
    relation =
    { tag        = HUN
      value      = 100
      guaranteed = { day = 17 month = march year = 1934 }
    }
    relation = { tag = IRE value = 10 }
    relation = { tag = ITA value = 125 }
    relation = { tag = SCH value = 50 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 1 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 1 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 4 }
  SpyInfo                = { country = "GER" NumberOfSpies = 4 }
  SpyInfo                = { country = "SPR" NumberOfSpies = 1 }
  SpyInfo                = { country = "POL" NumberOfSpies = 3 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 3 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 4 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 2 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }
  SpyInfo                = { country = "ALB" NumberOfSpies = 1 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  SpyInfo                = { country = "ITA" NumberOfSpies = 4 }
  nationalprovinces      = { 373 377 460 461 462 463 464 465 467 371 }
  ownedprovinces         = { 373 377 460 461 462 463 464 465 }
  controlledprovinces    = { 373 377 460 461 462 463 464 465 }
  # Western Minor Tech '36
  # Group C 1936 techs
  # ######################
  techapps               = { 4010  4020  4120  2150  2010  2020  2290  2300  2310  2450  2460  2510  1010  1190  1110  1310  9010  5010  5020  5080 
                             5090  5190  6010  6020  14000
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 1
    free_market       = 8
    freedom           = 7
    professional_army = 5
    defense_lobby     = 5
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 23001 }
  headofgovernment       = { type = 9 id = 23002 }
  foreignminister        = { type = 9 id = 23003 }
  armamentminister       = { type = 9 id = 23004 }
  ministerofsecurity     = { type = 9 id = 23005 }
  ministerofintelligence = { type = 9 id = 23006 }
  chiefofstaff           = { type = 9 id = 23007 }
  chiefofarmy            = { type = 9 id = 23008 }
  chiefofnavy            = { type = 9 id = 23009 }
  chiefofair             = { type = 9 id = 23010 }
  landunit =
  { id       = { type = 14000 id = 9000 }
    location = 463
    name     = "I. Korps"
    division =
    { id       = { type = 14000 id = 9015 }
      name     = "HQ des Generalstabs"
      type     = hq
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 14000 id = 9001 }
      name     = "1. Kavalleriedivision"
      type     = cavalry
      model    = 0
      strength = 70
    }
    division =
    { id       = { type = 14000 id = 9002 }
      name     = "1. Infantriedivision"
      type     = infantry
      model    = 0
      strength = 100
    }
    division =
    { id       = { type = 14000 id = 9003 }
      name     = "2. Infantriedivision"
      type     = infantry
      strength = 100
      model    = 0
    }
    division =
    { id       = { type = 14000 id = 9004 }
      name     = "3. Infantriedivision"
      type     = infantry
      extra    = artillery
      strength = 100
      model    = 0
    }
  }
  landunit =
  { id       = { type = 14000 id = 9005 }
    location = 463
    name     = "II. Korps"
    division =
    { id       = { type = 14000 id = 9006 }
      name     = "4. Infantriedivision"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { id       = { type = 14000 id = 9007 }
    location = 463
    name     = "III. Korps"
    division =
    { id       = { type = 14000 id = 9009 }
      name     = "5. Infantriedivision"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { id       = { type = 14000 id = 9008 }
    location = 463
    name     = "IV. Korps"
    division =
    { id       = { type = 14000 id = 9011 }
      name     = "6. Infantriedivision"
      type     = infantry
      extra    = engineer
      strength = 100
      model    = 0
    }
  }
  landunit =
  { id       = { type = 14000 id = 9010 }
    location = 463
    name     = "V. Korps"
    division =
    { id       = { type = 14000 id = 9012 }
      name     = "7. Infantriedivision"
      type     = infantry
      strength = 100
      model    = 0
    }
  }
  landunit =
  { id       = { type = 14000 id = 9013 }
    location = 463
    name     = "VI. Korps"
    division =
    { id       = { type = 14000 id = 9014 }
      name     = "1. Alpenjägerdivision"
      type     = bergsjaeger
      strength = 30
      model    = 0
    }
  }
}
