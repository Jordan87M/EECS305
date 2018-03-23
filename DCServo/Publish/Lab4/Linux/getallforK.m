k = input('What is the gain?','s');

eval(['RampPos' k  'time = RampPositionReferenceData.time;']);
eval(['RampPos' k ' = RampPositionReferenceData.signals(1).values;']);
eval(['RampPoserr' k ' = RampPositionReferenceData.signals(1).values - RampPositionReferenceData.signals(3).values;']);

eval(['ParaPos' k  'time = ParabolicPositionReferenceData.time;']);
eval(['ParaPos' k ' = ParabolicPositionReferenceData.signals(1).values;']);
eval(['ParaPoserr' k ' = ParabolicPositionReferenceData.signals(1).values - ParabolicPositionReferenceData.signals(3).values;']);

eval(['StepSpeed' k  'time = StepSpeedReferenceData.time;']);
eval(['StepSpeed' k ' = StepSpeedReferenceData.signals(2).values;']);
eval(['StepSpeederr' k ' = StepSpeedReferenceData.signals(2).values - StepSpeedReferenceData.signals(3).values;']);

eval(['RampSpeed' k  'time = RampSpeedReferenceData.time;']);
eval(['RampSpeed' k ' = RampSpeedReferenceData.signals(2).values;']);
eval(['RampSpeederr' k ' = RampSpeedReferenceData.signals(2).values - RampSpeedReferenceData.signals(3).values;']);

