
##############################
# Country definition for BOL #
##############################

province =
{ id       = 832
  anti_air = 1
  air_base = { size = 4 current_size = 4 }
}            # La Paz

#####################
# Country main data #
#####################

country =
{ tag                    = BOL
  manpower               = 7.8 # 8 - building queue
  # Resource Reserves
  energy                 = 1000
  metal                  = 1000
  rare_materials         = 500
  oil                    = 500
  supplies               = 500
  money                  = 10
  consumer = 0.2186 
  supply = 0.0757 
  production = 0.7057 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 832
  policy =
  { date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 6
    free_market       = 8
    freedom           = 7
    professional_army = 7
    defense_lobby     = 8
    interventionism   = 5
  }
  nationalprovinces      = { 836 833 838 832 828 827 837 822 839 }
  ownedprovinces         = { 836 833 838 832 828 827 }
  controlledprovinces    = { 836 833 838 832 828 827 }
  # ROTW Minor Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 4010 2150 2290 2300 2310 1010 1190 1110 2450 2460 2510 5010 5080 5090 6210 6300 }
  diplomacy =
  { relation = { tag = ARG value = 50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = -50 }
    relation = { tag = COL value = 1 }
    relation = { tag = ECU value = -20 }
    relation = { tag = GER value = 15 }
    relation = { tag = PAR value = -50 }
    relation = { tag = PRU value = 30 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 85 }
    relation = { tag = VEN value = -15 }
  }
  headofstate            = { type = 9 id = 43001 }
  headofgovernment       = { type = 9 id = 43002 }
  foreignminister        = { type = 9 id = 43003 }
  armamentminister       = { type = 9 id = 43004 }
  ministerofsecurity     = { type = 9 id = 43005 }
  ministerofintelligence = { type = 9 id = 43006 }
  chiefofstaff           = { type = 9 id = 43007 }
  chiefofarmy            = { type = 9 id = 43008 }
  chiefofnavy            = { type = 9 id = 43009 }
  chiefofair             = { type = 9 id = 43010 }
  # Human Wave
  landunit =
  { id       = { type = 17000 id = 40 }
    name     = "Ejercito de Bolivia"
    location = 832
    division =
    { id       = { type = 17000 id = 4000 }
      name     = "1. Brigada de Infantería 'Bolivar'"
      strength = 100
      type     = infantry
      model    = 0
      extra    = artillery
    }
    division =
    { id       = { type = 17000 id = 4001 }
      name     = "1. Brigada de Milicia de Bolivia"
      strength = 100
      type     = militia
      model    = 0
    }
    division =
    { id       = { type = 17000 id = 4002 }
      name     = "2. Brigada de Milicia de Bolivia"
      strength = 100
      type     = militia
      model    = 0
    }
    division =
    { id       = { type = 17000 id = 4003 }
      name     = "1. Brigada de Caballería 'Chaco'"
      strength = 100
      type     = cavalry
      model    = 0
    }
  } 
	province_development = { 
		id = { type = 17000 id = 1 } 
		name = "" 
		progress = 0.0000 
		location = 832 
		cost = 2.0000 
		date = { 
			year = 1945 
			month = april 
			day = 17 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 1895 
		days_for_first = 205 
		gearing_bonus = 0.0000 
		speed_step = 1 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 17000 id = 2 } 
		name = "" 
		progress = 0.0000 
		location = 838 
		cost = 2.0000 
		date = { 
			year = 1950 
			month = december 
			day = 26 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 32 
		done = 0 
		days = 2161 
		days_for_first = 205 
		gearing_bonus = 0.0000 
		type = infrastructure 
		}
}
