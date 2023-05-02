echo "Executing arm driver"
./scripts/run_arm_driver.sh &
sleep 30
echo "Executing moveit and talker"
./scripts/run_moveit.sh &
./scripts/run_talker.sh &

