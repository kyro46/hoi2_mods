
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
  consumer = 0.2500 
  supply = 0.0656 
  production = 0.6844 
  reinforcement = 0.0000 
  upgrading = 0.0000 
  capital                = 752
  manpower               = 58.1 # 60 - building queue
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
  nationalprovinces      = { 737 738 739 740 741 742 743 744 745 747 749 750 751 752 753 754 755 756 }
  ownedprovinces         = { 737 738 739 740 741 742 743 744 745 747 749 750 751 752 753 754 755 756 }
  controlledprovinces    = { 737 738 739 740 741 742 743 744 745 747 749 750 751 752 753 754 755 756 }
  # Semi-Major Tech '36
  # Group D 1936 techs
  # ######################
  # GW fighter
  techapps               = { 1010 1020 1110 1190 2150 2290 2300 2310 2450 2460 2510 4010 5010 5080 5090 5190 6010 9010 }
  diplomacy =
  { relation = { tag = ENG value = 50 }
    relation = { tag = HOL value = 25 }
    relation = { tag = IRE value = 30 }
    relation = { tag = USA value = 125 }
	relation = { tag = CAN value = 4 }
	relation = { tag = AST value = 4 }
	relation = { tag = GUA value = -65 }
	relation = { tag = SCH value = 3 }
	relation = { tag = POR value = -21 }
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
      name     = "I Divisi�n de Infanter�a"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 29500 id = 4 }
      name     = "II Divisi�n de Infanter�a"
      strength = 100
      type     = infantry
    }
    division =
    { id       = { type = 29500 id = 5 }
      name     = "III Divisi�n de Infanter�a"
      strength = 100
      type     = infantry
      extra    = artillery
    }
  }
  landunit =
  { id       = { type = 29500 id = 6 }
    name     = "Caballer�a de Mexico"
    location = 742
    division =
    { id       = { type = 29500 id = 7 }
      name     = "I Divisi�n de Caballer�a"
      strength = 100
      type     = cavalry
    }
    division =
    { id       = { type = 29500 id = 8 }
      name     = "II Divisi�n de Caballer�a"
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
    name     = "Fuerza A�rea Mexicana"
    location = 754
    base     = 754
    division =
    { id       = { type = 29500 id = 10 }
      name     = "1a Grupo A�reo de Caza"
      type     = interceptor
      model    = 0
      strength = 50
    }
  } 
	province_development = { 
		id = { type = 29500 id = 13 } 
		name = "" 
		progress = 0.0000 
		location = 752 
		cost = 5.0000 
		date = { 
			year = 1945 
			month = august 
			day = 10 
			hour = 0 
			} 
		manpower = 1.0000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 10 
		done = 0 
		days = 3456 
		days_for_first = 346 
		gearing_bonus = 0.0000 
		type = ic 
		} 
	province_development = { 
		id = { type = 29500 id = 14 } 
		name = "" 
		progress = 0.0000 
		location = 752 
		cost = 2.0000 
		date = { 
			year = 1954 
			month = february 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2617 
		days_for_first = 287 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 29500 id = 15 } 
		name = "" 
		progress = 0.0000 
		location = 753 
		cost = 2.0000 
		date = { 
			year = 1945 
			month = january 
			day = 8 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2617 
		days_for_first = 143 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 29500 id = 16 } 
		name = "" 
		progress = 0.0000 
		location = 751 
		cost = 2.0000 
		date = { 
			year = 1945 
			month = january 
			day = 8 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2617 
		days_for_first = 143 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 29500 id = 17 } 
		name = "" 
		progress = 0.0000 
		location = 755 
		cost = 2.0000 
		date = { 
			year = 1954 
			month = february 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2617 
		days_for_first = 287 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 29500 id = 18 } 
		name = "" 
		progress = 0.0000 
		location = 750 
		cost = 2.0000 
		date = { 
			year = 1954 
			month = february 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2617 
		days_for_first = 287 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 29500 id = 19 } 
		name = "" 
		progress = 0.0000 
		location = 745 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = april 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2617 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 29500 id = 20 } 
		name = "" 
		progress = 0.0000 
		location = 749 
		cost = 2.0000 
		date = { 
			year = 1943 
			month = april 
			day = 2 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2617 
		days_for_first = 115 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 29500 id = 21 } 
		name = "" 
		progress = 0.0000 
		location = 742 
		cost = 2.0000 
		date = { 
			year = 1954 
			month = february 
			day = 9 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2617 
		days_for_first = 287 
		gearing_bonus = 0.0000 
		type = infrastructure 
		} 
	province_development = { 
		id = { type = 29500 id = 22 } 
		name = "" 
		progress = 0.0000 
		location = 740 
		cost = 2.0000 
		date = { 
			year = 1946 
			month = november 
			day = 7 
			hour = 0 
			} 
		manpower = 0.1000 
		close_when_finished = yes 
		waitingforclosure = no 
		total_progress = 0.0000 
		size = 28 
		done = 0 
		days = 2617 
		days_for_first = 172 
		gearing_bonus = 0.0000 
		type = infrastructure 
		}
}
