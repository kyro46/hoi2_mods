
##############################
# Country definition for CAN #
##############################

province =
{ id         = 541
  anti_air   = 3
  air_base   = { size = 10 current_size = 10 }
  naval_base = { size = 10 current_size = 10 }
}              # Vancouver
province =
{ id       = 569
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # Winnipeg
province =
{ id         = 579
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 10 current_size = 10 }
}              # Halifax
province =
{ id         = 581
  anti_air   = 2
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 4 current_size = 4 }
}              # Saint John
province =
{ id       = 585
  anti_air = 2
  air_base = { size = 4 current_size = 4 }
}            # Montréal
province =
{ id         = 586
  anti_air   = 4
  air_base   = { size = 6 current_size = 6 }
  naval_base = { size = 10 current_size = 10 }
}              # Québec City
province =
{ id       = 588
  anti_air = 3
  air_base = { size = 4 current_size = 4 }
}            # Ottawa
province = { id = 589 anti_air = 1 } # Toronto
province =
{ id       = 797
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # Calgary

#####################
# Country main data #
#####################

country =
{ tag                    = CAN
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  manpower               = 30
  capital                = 588
  transports             = 35
  escorts                = 3
  diplomacy =
  { relation = { tag = AST value = 200 } # was access = yes
    relation = { tag = BEL value = 150 }
    relation = { tag = BHU value = 200 }
    relation = { tag = ENG value = 200 } # was access = yes
    relation = { tag = FRA value = 150 }
    relation = { tag = GER value = 1 }
    relation = { tag = HOL value = 80 }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 100 }
    relation = { tag = ITA value = 1 }
    relation = { tag = NEP value = 200 }
    relation = { tag = NZL value = 200 } # was access = yes
    relation = { tag = OMN value = 150 }
    relation = { tag = SAF value = 200 } # was access = yes
    relation = { tag = USA value = 175 }
    relation = { tag = YEM value = 150 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 3 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 2 }
  SpyInfo                = { country = "USA" NumberOfSpies = 5 }
  nationalprovinces      = { 556  541  555  554  552  558  557  796  797  799  798  795  794  559  560  561  563  566  567  570  568  569  571  565 
                             572  588  589  590  591  587  585  584  573  586  574  564  581  580  579  578  1909
                           }
  ownedprovinces         = { 556  541  555  554  552  558  557  796  797  799  798  795  794  559  560  561  563  566  567  570  568  569  571  565 
                             572  588  589  590  591  587  585  584  573  586  574  564  581  580  579  578  1909
                           }
  controlledprovinces    = { 556  541  555  554  552  558  557  796  797  799  798  795  794  559  560  561  563  566  567  570  568  569  571  565 
                             572  588  589  590  591  587  585  584  573  586  574  564  581  580  579  578  1909
                           }
  # Commonwealth Tech '36
  # UK 1936 techs
  # ######################
  techapps               = { 1010  1020  1190  1200  1210  1220  14000 2010  2150  2290  2300  2310  2450  2460  2510  3010  3020  3070  4010  4020 
                             4120  4130  5010  5020  5080  5090  5190  5310  6010  6030  6110  6120  8010  8020  8030  8040  8050  8070  8100  8120 
                             9010  9020  9030  9140 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 2
    free_market       = 10
    freedom           = 10
    professional_army = 6
    defense_lobby     = 2
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 45001 }
  headofgovernment       = { type = 9 id = 45002 }
  foreignminister        = { type = 9 id = 45003 }
  armamentminister       = { type = 9 id = 45004 }
  ministerofsecurity     = { type = 9 id = 45005 }
  ministerofintelligence = { type = 9 id = 45006 }
  chiefofstaff           = { type = 9 id = 45007 }
  chiefofarmy            = { type = 9 id = 45008 }
  chiefofnavy            = { type = 9 id = 45009 }
  chiefofair             = { type = 9 id = 45010 }
  landunit =
  { id       = { type = 20000 id = 1 }
    name     = "Royal Canadian Army"
    location = 588
    division =
    { id       = { type = 20000 id = 2 }
      name     = "1st Canadian Infantry Div."
      strength = 1
      type     = infantry
      model    = 0
    }
  }
  navalunit =
  { id       = { type = 20000 id = 3 }
    location = 579
    base     = 579
    name     = "Canadian Transport Fleet"
    division =
    { id   = { type = 20000 id = 4 }
      name = "'Empress of Japan' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 20000 id = 5 }
      name = "'Empress of Australia' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 20000 id = 6 }
      name = "'Empress of Britain' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 20000 id = 9 }
      name = "'Empress of Canada' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 20000 id = 10 }
      name = "'Empress of Russia' Flotilla"
      type = transport
    }
    division =
    { id   = { type = 20000 id = 11 }
      name = "'Empress of Asia' Flotilla"
      type = transport
    }
  }
  navalunit =
  { id       = { type = 20000 id = 7 }
    name     = "Royal Canadian Navy"
    location = 579
    base     = 579
    division =
    { id       = { type = 20000 id = 8 }
      name     = "Destroyer Flotilla 1"
      strength = 100
      type     = destroyer
      model    = 0
      extra1 = naval_fire_controll_s
      brigade_model1 = 0
    }
  }
}
