
##############################
# Country definition for COL #
##############################

province =
{ id         = 803
  anti_air   = 2
  air_base   = { size = 1 current_size = 1 }
  naval_base = { size = 2 current_size = 2 }
}              # Barranquilla
province = { id = 813 anti_air = 2 } # Bogotá

#####################
# Country main data #
#####################

country =
{ tag                    = COL
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  manpower               = 28
  capital                = 813
  transports             = 10
  escorts                = 2
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 7
    free_market       = 8
    freedom           = 7
    professional_army = 3
    defense_lobby     = 5
    interventionism   = 2
  }
  nationalprovinces      = { 803 812 813 890 867 819 868 }
  ownedprovinces         = { 803 812 813 890 867 819 868 }
  controlledprovinces    = { 803 812 813 890 867 819 868 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 5190 6210 6300 3010 8050 }
  diplomacy =
  { relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = 1 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = GER value = -20 }
    relation = { tag = PAN value = 50 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = -35 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }
  headofstate            = { type = 9 id = 37001 }
  headofgovernment       = { type = 9 id = 37002 }
  foreignminister        = { type = 9 id = 37003 }
  armamentminister       = { type = 9 id = 37004 }
  ministerofsecurity     = { type = 9 id = 37005 }
  ministerofintelligence = { type = 9 id = 37006 }
  chiefofstaff           = { type = 9 id = 37007 }
  chiefofarmy            = { type = 9 id = 37008 }
  chiefofnavy            = { type = 9 id = 37009 }
  chiefofair             = { type = 9 id = 37010 }
  landunit =
  { id       = { type = 23000 id = 40 }
    name     = "Ejercito de Colombia"
    location = 813
    division =
    { id       = { type = 23000 id = 4000 }
      name     = "1a División"
      strength = 80
      type     = infantry
      model    = 0
      extra    = anti_air
    }
    division =
    { id       = { type = 23000 id = 4001 }
      name     = "1a Brigada de Caballería 'Montería'"
      strength = 80
      type     = cavalry
      model    = 0
    }
  }
  navalunit =
  { id       = { type = 23000 id = 4002 }
    name     = "Armada de Colombia"
    location = 803
    base     = 803
    division =
    { id    = { type = 23000 id = 4003 }
      name  = "1a Flotilla de Torpedillos"
      type  = destroyer
      model = 0
    }
  }
}
