
##############################
# Country definition for GUA #
##############################

province =
{ id         = 757
  anti_air   = 1
  air_base   = { size = 4 current_size = 4 }
  naval_base = { size = 4 current_size = 4 }
}              # Guatemala

#####################
# Country main data #
#####################

country =
{ tag                    = GUA
  manpower               = 7
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  capital                = 757
  transports             = 16
  escorts                = 2
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    free_market       = 6
    freedom           = 4
    professional_army = 1
    defense_lobby     = 5
    interventionism   = 4
  }
  nationalprovinces      = { 757 759 }
  ownedprovinces         = { 757 }
  controlledprovinces    = { 757 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }
  # San Salvador
  diplomacy =
  { relation = { tag = HON value = 100 }
    relation = { tag = USA value = 125 }
    relation = { tag = ENG value = 50 }
  }
  headofstate            = { type = 9 id = 46001 }
  headofgovernment       = { type = 9 id = 46002 }
  foreignminister        = { type = 9 id = 46003 }
  armamentminister       = { type = 9 id = 46004 }
  ministerofsecurity     = { type = 9 id = 46005 }
  ministerofintelligence = { type = 9 id = 46006 }
  chiefofstaff           = { type = 9 id = 46007 }
  chiefofarmy            = { type = 9 id = 46008 }
  chiefofnavy            = { type = 9 id = 46009 }
  chiefofair             = { type = 9 id = 46010 }
  landunit =
  { id       = { type = 16500 id = 65 }
    name     = "Ejercito de Guatemala"
    location = 757
    division =
    { id       = { type = 16500 id = 6500 }
      name     = "1a Brig. de Infant. 'Adolfo V. Hall'"
      strength = 100
      type     = infantry
      extra    = anti_air
    }
  }
}
