
##############################
# Country definition for PAR #
##############################

province =
{ id       = 837
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # Asunci�n

#####################
# Country main data #
#####################

country =
{ tag                    = PAR
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.2917 
  supply = 0.0417 
  production = 0.6666 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 837
  manpower               = 4.9 # 5 - building queue
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 3
    free_market       = 5
    professional_army = 5
    defense_lobby     = 8
    interventionism   = 8
  }
  nationalprovinces      = { 837 846 }
  ownedprovinces         = { 837 846 }
  controlledprovinces    = { 837 846 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6010 }
  diplomacy =
  { relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = BOL value = -50 }
    relation = { tag = CHL value = 35 }
    relation = { tag = COL value = 10 }
    relation = { tag = ECU value = 25 }
    relation = { tag = PRU value = 25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 10 }
  }
  headofstate            = { type = 9 id = 42001 }
  headofgovernment       = { type = 9 id = 42002 }
  foreignminister        = { type = 9 id = 42003 }
  armamentminister       = { type = 9 id = 42004 }
  ministerofsecurity     = { type = 9 id = 42005 }
  ministerofintelligence = { type = 9 id = 42006 }
  chiefofstaff           = { type = 9 id = 42007 }
  chiefofarmy            = { type = 9 id = 42008 }
  chiefofnavy            = { type = 9 id = 42009 }
  chiefofair             = { type = 9 id = 42010 }
  landunit =
  { id       = { type = 15600 id = 60 }
    name     = "Ejercito de Paraguay"
    location = 837
    division =
    { id       = { type = 15600 id = 6000 }
      name     = "I Divisi�n de Infanter�a"
      strength = 100
      type     = infantry
      extra    = anti_air
    }
    division =
    { id       = { type = 15600 id = 6001 }
      name     = "CVI Brigada de Policia Nacional"
      strength = 100
      type     = militia
    }
  } 
	province_development = { 
		id = { type = 15600 id = 61 } 
		name = "" 
		progress = 0.0000 
		location = 837 
		cost = 2.0000 
		date = { 
			year = 1941 
			month = may 
			day = 28 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2745 
		days_for_first = 106 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
}
