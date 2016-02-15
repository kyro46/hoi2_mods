
##############################
# Country definition for POL #
##############################

province = { id = 208 anti_air = 1 } # Wilno
province =
{ id       = 211
  air_base = { size = 3 current_size = 3 }
  anti_air = 3
}            # Lida
province =
{ id       = 229
  air_base = { size = 4 current_size = 4 }
}            # Stanislawow
province =
{ id         = 303
  anti_air   = 2
  naval_base = { size = 8 current_size = 8 }
  air_base   = { size = 4 current_size = 4 }
}              # Danzig
province = { id = 305 anti_air = 1 } # Torun
province = { id = 307 anti_air = 2 } # Poznan
province = { id = 479 anti_air = 2 } # Cracow
province =
{ id       = 483
  anti_air = 4
  air_base = { size = 4 current_size = 4 }
}            # Lodz
province =
{ id       = 485
  anti_air = 2
  air_base = { size = 6 current_size = 6 }
}            # Warsaw
province =
{ id       = 504
  air_base = { size = 3 current_size = 3 }
}            # Brest Litovsk
province = { id = 509 anti_air = 1 } # Suwalki

#####################
# Country main data #
#####################

country =
{ tag                    = POL
  capital                = 485
  manpower               = 275
  transports             = 32
  escorts                = 6
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 20
  diplomacy =
  { relation =
    { tag        = CZE
      value      = -1
      guaranteed = { day = 30 month = december year = 1934 }
    }
    relation = { tag = ENG value = 50 }
    relation = { tag = EST value = 75 }
    relation = { tag = FIN value = 100 }
    relation = { tag = FRA value = 100 }
    relation = { tag = GER value = -10 }
    relation = { tag = GRE value = 35 }
    relation = { tag = HUN value = 50 }
    relation = { tag = LAT value = 75 }
    relation = { tag = LIT value = -75 }
    relation =
    { tag        = ROM
      value      = 40
      guaranteed = { day = 30 month = december year = 1934 }
    }
    relation = { tag = SOV value = -50 }
  }
  SpyInfo                = { country = "ENG" NumberOfSpies = 1 }
  SpyInfo                = { country = "FRA" NumberOfSpies = 2 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 3 }
  SpyInfo                = { country = "CZE" NumberOfSpies = 2 }
  SpyInfo                = { country = "AUS" NumberOfSpies = 1 }
  SpyInfo                = { country = "GER" NumberOfSpies = 3 }
  SpyInfo                = { country = "LAT" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 1 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 1 }
  SpyInfo                = { country = "YUG" NumberOfSpies = 1 }
  SpyInfo                = { country = "HUN" NumberOfSpies = 1 }
  SpyInfo                = { country = "BUL" NumberOfSpies = 1 }
  SpyInfo                = { country = "EST" NumberOfSpies = 1 }
  SpyInfo                = { country = "LIT" NumberOfSpies = 3 }
  SpyInfo                = { country = "USA" NumberOfSpies = 1 }
  SpyInfo                = { country = "ROM" NumberOfSpies = 2 }
  nationalprovinces      = { 303 306 307 479 480 481 483 484 305 485 486 487 489 488 500 501 502 503 504 505 506 507 508 509 209 208 213 211 210 222
                             229 562 214 212 221 225 226 227 228 231 218
                           }
  ownedprovinces         = { 303 306 307 479 480 481 483 484 305 485 486 487 489 488 500 501 502 503 504 505 506 507 508 509 209 208 213 211 210 222
                             229 562 214
                           }
  controlledprovinces    = { 303 306 307 479 480 481 483 484 305 485 486 487 489 488 500 501 502 503 504 505 506 507 508 509 209 208 213 211 210 222
                             229 562 214
                           }
  # Air Doctrines
  techapps               = { 1010  1020  1110  1190  1200  1310  14000 2010  2020  2150  2290  2300  2310  2400  2450  2460  2510  3010  3020  3400 
                             3410  4010  4020  4120  4130  5010  5080  5090  5190  6010  6030  8040  8050  9010  9020 
                           }
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 1
    freedom           = 4
    free_market       = 5
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 13001 }
  headofgovernment       = { type = 9 id = 13002 }
  foreignminister        = { type = 9 id = 13003 }
  armamentminister       = { type = 9 id = 13004 }
  ministerofsecurity     = { type = 9 id = 13005 }
  ministerofintelligence = { type = 9 id = 13006 }
  chiefofstaff           = { type = 9 id = 13007 }
  chiefofarmy            = { type = 9 id = 13008 }
  chiefofnavy            = { type = 9 id = 13009 }
  chiefofair             = { type = 9 id = 13010 }
  landunit =
  { id       = { type = 18600 id = 1 }
    location = 479
    name     = "Armia Krakow"
    division =
    { id   = { type = 18600 id = 2 }
      name = "6 Dywizja Piechoty"
      type = infantry
    }
    division =
    { id    = { type = 18600 id = 3 }
      name  = "7 Dywizja Piechoty"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 18600 id = 4 }
      name = "22 Dywizja Piechoty Górskiej"
      type = bergsjaeger
    }
    division =
    { id   = { type = 18600 id = 5 }
      name = "21 Dywizja Piechoty Górskiej"
      type = bergsjaeger
    }
    division =
    { id   = { type = 18600 id = 6 }
      name = "23 Dywizja Piechoty"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 18600 id = 7 }
    location = 483
    name     = "Armia Lodz"
    division =
    { id   = { type = 18600 id = 8 }
      name = "2 Dywizja Piechoty"
      type = infantry
    }
    division =
    { id    = { type = 18600 id = 9 }
      name  = "10 Dywizja Piechoty"
      type  = infantry
      extra = anti_air
    }
    division =
    { id   = { type = 18600 id = 10 }
      name = "29 Dywizja Piechoty"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 18600 id = 11 }
    location = 487
    name     = "Armia Lublin"
    division =
    { id   = { type = 18600 id = 12 }
      name = "18 Dywizja Piechoty"
      type = infantry
    }
    division =
    { id   = { type = 18600 id = 13 }
      name = "28 Dywizja Piechoty"
      type = infantry
    }
    division =
    { id    = { type = 18600 id = 14 }
      name  = "30 Dywizja Piechoty"
      type  = infantry
      extra = anti_tank
    }
  }
  landunit =
  { id       = { type = 18600 id = 15 }
    location = 486
    name     = "Armia Modlin"
    division =
    { id   = { type = 18600 id = 16 }
      name = "8 Dywizja Piechoty"
      type = infantry
    }
    division =
    { id    = { type = 18600 id = 17 }
      name  = "20 Dywizja Piechoty"
      type  = infantry
      extra = engineer
    }
  }
  landunit =
  { id       = { type = 18600 id = 18 }
    location = 303
    name     = "Armia Pomorze"
    division =
    { id   = { type = 18600 id = 19 }
      name = "4 Dywizja Piechoty"
      type = infantry
    }
    division =
    { id   = { type = 18600 id = 20 }
      name = "16 Dywizja Piechoty"
      type = infantry
    }
    division =
    { id    = { type = 18600 id = 21 }
      name  = "9 Dywizja Piechoty"
      type  = infantry
      extra = artillery
    }
    division =
    { id   = { type = 18600 id = 22 }
      name = "15 Dywizja Piechoty"
      type = infantry
    }
    division =
    { id   = { type = 18600 id = 23 }
      name = "27 Dywizja Piechoty"
      type = infantry
    }
    division =
    { id   = { type = 18600 id = 58 }
      name = "Nowogródzka B.K."
      type = cavalry
    }
  }
  landunit =
  { id       = { type = 18600 id = 24 }
    location = 307
    name     = "Armia Poznan"
    division =
    { id   = { type = 18600 id = 25 }
      name = "14 Dywizja Piechoty"
      type = infantry
    }
    division =
    { id   = { type = 18600 id = 26 }
      name = "17 Dywizja Piechoty"
      type = infantry
    }
    division =
    { id   = { type = 18600 id = 27 }
      name = "25 Dywizja Piechoty"
      type = infantry
    }
    division =
    { id    = { type = 18600 id = 28 }
      name  = "26 Dywizja Piechoty"
      type  = infantry
      extra = anti_air
    }
    division =
    { id   = { type = 18600 id = 57 }
      name = "Krakowska B.K."
      type = cavalry
    }
  }
  landunit =
  { id       = { type = 18600 id = 29 }
    location = 305
    name     = "Armia Prusy"
    division =
    { id   = { type = 18600 id = 30 }
      name = "3 Dywizja Piechoty Legionów"
      type = infantry
    }
    division =
    { id   = { type = 18600 id = 31 }
      name = "12 Dywizja Piechoty"
      type = infantry
    }
    division =
    { id    = { type = 18600 id = 32 }
      name  = "13 Dywizja Piechoty"
      type  = infantry
      extra = anti_tank
    }
    division =
    { id   = { type = 18600 id = 33 }
      name = "19 Dywizja Piechoty"
      type = infantry
    }
    division =
    { id   = { type = 18600 id = 56 }
      name = "Kresowa B.K."
      type = cavalry
    }
  }
  landunit =
  { id       = { type = 18600 id = 34 }
    location = 485
    name     = "Armia Warszawa"
    division =
    { id       = { type = 18600 id = 63 }
      name     = "Army HQ"
      type     = hq
      model    = 0
      strength = 100
    }
    division =
    { id    = { type = 18600 id = 35 }
      name  = "Mazowiecka B.K."
      type  = cavalry
      extra = engineer
    }
    division =
    { id   = { type = 18600 id = 36 }
      name = "1 DP Legionów im. Pilsudskiego"
      type = infantry
    }
    division =
    { id   = { type = 18600 id = 37 }
      name = "5 Dywizja Piechoty"
      type = infantry
    }
    division =
    { id   = { type = 18600 id = 38 }
      name = "11 Karpacka Dywizja Piechoty"
      type = infantry
    }
    division =
    { id   = { type = 18600 id = 39 }
      name = "24 Dywizja Piechoty"
      type = infantry
    }
  }
  landunit =
  { id       = { type = 18600 id = 40 }
    name     = "Armia Rezerwa"
    location = 487
    division =
    { id       = { type = 18600 id = 41 }
      name     = "31 D. Piechoty (Rezerwowa)"
      strength = 30
      type     = infantry
    }
    division =
    { id       = { type = 18600 id = 42 }
      name     = "33 D. Piechoty (Rezerwowa)"
      strength = 30
      type     = infantry
    }
    division =
    { id       = { type = 18600 id = 43 }
      name     = "35 D. Piechoty (Rezerwowa)"
      strength = 30
      type     = infantry
      extra    = artillery
    }
    division =
    { id       = { type = 18600 id = 44 }
      name     = "36 D. Piechoty (Rezerwowa)"
      strength = 30
      type     = infantry
    }
    division =
    { id       = { type = 18600 id = 45 }
      name     = "38 D. Piechoty (Rezerwowa)"
      strength = 30
      type     = infantry
    }
    division =
    { id       = { type = 18600 id = 46 }
      name     = "39 D. Piechoty (Rezerwowa)"
      strength = 30
      type     = infantry
    }
    division =
    { id       = { type = 18600 id = 47 }
      name     = "41 D. Piechoty (Rezerwowa)"
      strength = 30
      type     = infantry
      extra    = anti_air
    }
    division =
    { id       = { type = 18600 id = 48 }
      name     = "44 D. Piechoty (Rezerwowa)"
      strength = 30
      type     = infantry
    }
    division =
    { id       = { type = 18600 id = 49 }
      name     = "45 D. Piechoty (Rezerwowa)"
      strength = 30
      type     = infantry
    }
    division =
    { id       = { type = 18600 id = 50 }
      name     = "55 D. Piechoty (Rezerwowa)"
      strength = 30
      type     = infantry
    }
    division =
    { id       = { type = 18600 id = 51 }
      name     = "53 D. Piechoty (Rezerwowa)"
      strength = 30
      type     = infantry
    }
    division =
    { id       = { type = 18600 id = 52 }
      name     = "54 D. Piechoty (Rezerwowa)"
      strength = 30
      type     = infantry
    }
  }
  navalunit =
  { id       = { type = 18600 id = 53 }
    name     = "Polska Flota Wojenna"
    location = 303
    base     = 303
    division =
    { id       = { type = 18600 id = 54 }
      name     = "1 Flotylla Niszczycieli"
      type     = destroyer
      model    = 1
      strength = 40
    }
    division =
    { id    = { type = 18600 id = 55 }
      name  = "1 Flotylla Okretow Podwodnych"
      type  = submarine
      model = 0
    }
  }
  airunit =
  { id       = { type = 18600 id = 59 }
    name     = "III/1 Dyon Brygady Poscigowej"
    location = 485
    base     = 485
    division =
    { id    = { type = 18600 id = 60 }
      name  = "III/1 Dyon Brygady Poscigowej"
      type  = interceptor
      model = 0
    }
    division =
    { id    = { type = 18600 id = 61 }
      name  = "IV/1 Dyon Brygady Poscigowej"
      type  = interceptor
      model = 0
    }
    division =
    { id    = { type = 18600 id = 62 }
      name  = "1 Dywizjon Bombowców Ciezkich"
      type  = tactical_bomber
      model = 0
    }
  }
}
