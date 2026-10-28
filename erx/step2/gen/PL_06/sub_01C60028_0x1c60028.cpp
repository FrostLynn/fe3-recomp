#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01C60028
// Address: 0x1c60028 - 0x1c60138
void sub_01C60028_0x1c60028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C60028_0x1c60028");
#endif

    switch (ctx->pc) {
        case 0x1c60044u: goto label_1c60044;
        case 0x1c6004cu: goto label_1c6004c;
        case 0x1c60060u: goto label_1c60060;
        case 0x1c60064u: goto label_1c60064;
        case 0x1c600bcu: goto label_1c600bc;
        case 0x1c600ccu: goto label_1c600cc;
        case 0x1c600e0u: goto label_1c600e0;
        case 0x1c600f4u: goto label_1c600f4;
        case 0x1c60104u: goto label_1c60104;
        default: break;
    }

    ctx->pc = 0x1c60028u;

    // 0x1c60028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c60028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6002c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c6002cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c60030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c60030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c60034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c60034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60038: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c60038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6003c: 0xc717d50  jal         func_1C5F540
    ctx->pc = 0x1C6003Cu;
    SET_GPR_U32(ctx, 31, 0x1C60044u);
    ctx->pc = 0x1C60040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6003Cu;
    // 0x1c60040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F540u, 0x1C6003Cu, 0x1C60044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60044u;
label_1c60044:
    // 0x1c60044: 0xc717d52  jal         func_1C5F548
    ctx->pc = 0x1C60044u;
    SET_GPR_U32(ctx, 31, 0x1C6004Cu);
    ctx->pc = 0x1C60048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60044u;
    // 0x1c60048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F548u, 0x1C60044u, 0x1C6004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6004Cu;
label_1c6004c:
    // 0x1c6004c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6004cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c60050: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C60050u;
    {
        const bool branch_taken_0x1c60050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C60054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60050u;
        // 0x1c60054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60050) {
            ctx->pc = 0x1C60074u;
            goto label_1c60074;
        }
    }
    ctx->pc = 0x1C60058u;
    // 0x1c60058: 0xc717d54  jal         func_1C5F550
    ctx->pc = 0x1C60058u;
    SET_GPR_U32(ctx, 31, 0x1C60060u);
    ctx->pc = 0x1C5F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F550u, 0x1C60058u, 0x1C60060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60060u;
label_1c60060:
    // 0x1c60060: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c60060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c60064:
    // 0x1c60064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c60064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c60068: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c60068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6006c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6006Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C60070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6006Cu;
        // 0x1c60070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6006Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C60074u;
label_1c60074:
    // 0x1c60074: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C60074u;
    {
        const bool branch_taken_0x1c60074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C60078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60074u;
        // 0x1c60078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60074) {
            ctx->pc = 0x1C60064u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c60064;
        }
    }
    ctx->pc = 0x1C6007Cu;
    // 0x1c6007c: 0x0  nop
    ctx->pc = 0x1c6007cu;
    // NOP
    // 0x1c60080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c60080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c60084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c60084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c60088: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c60088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c6008c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c6008cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c60090: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c60090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60094: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c60094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c60098: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1c60098u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6009c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c6009cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c600a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c600a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c600a4: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1c600a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1c600a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c600a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c600ac: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c600acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c600b0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c600b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c600b4: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C600B4u;
    SET_GPR_U32(ctx, 31, 0x1C600BCu);
    ctx->pc = 0x1C600B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C600B4u;
    // 0x1c600b8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C600B4u, 0x1C600BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C600BCu;
label_1c600bc:
    // 0x1c600bc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c600bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c600c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c600c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c600c4: 0xc717d58  jal         func_1C5F560
    ctx->pc = 0x1C600C4u;
    SET_GPR_U32(ctx, 31, 0x1C600CCu);
    ctx->pc = 0x1C600C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C600C4u;
    // 0x1c600c8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F560u, 0x1C600C4u, 0x1C600CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C600CCu;
label_1c600cc:
    // 0x1c600cc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c600ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c600d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1c600d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c600d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c600d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c600d8: 0xc717d5a  jal         func_1C5F568
    ctx->pc = 0x1C600D8u;
    SET_GPR_U32(ctx, 31, 0x1C600E0u);
    ctx->pc = 0x1C600DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C600D8u;
    // 0x1c600dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F568u, 0x1C600D8u, 0x1C600E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C600E0u;
label_1c600e0:
    // 0x1c600e0: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1c600e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1c600e4: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1c600e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1c600e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c600e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c600ec: 0xc717d5c  jal         func_1C5F570
    ctx->pc = 0x1C600ECu;
    SET_GPR_U32(ctx, 31, 0x1C600F4u);
    ctx->pc = 0x1C600F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C600ECu;
    // 0x1c600f0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F570u, 0x1C600ECu, 0x1C600F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C600F4u;
label_1c600f4:
    // 0x1c600f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c600f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c600f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c600f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c600fc: 0xc717d50  jal         func_1C5F540
    ctx->pc = 0x1C600FCu;
    SET_GPR_U32(ctx, 31, 0x1C60104u);
    ctx->pc = 0x1C60100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C600FCu;
    // 0x1c60100: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F540u, 0x1C600FCu, 0x1C60104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60104u;
label_1c60104:
    // 0x1c60104: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1c60104u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1c60108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c60108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6010c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c6010cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c60110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c60114: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c60114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c60118: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c60118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6011c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c6011cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c60120: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c60120u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c60124: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c60124u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c60128: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c60128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6012c: 0x8717d5e  j           func_1C5F578
    ctx->pc = 0x1C6012Cu;
    ctx->pc = 0x1C60130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6012Cu;
    // 0x1c60130: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F578u;
    sub_01C5F578_0x1c5f578(rdram, ctx, runtime); return;
    ctx->pc = 0x1C60134u;
    // 0x1c60134: 0x0  nop
    ctx->pc = 0x1c60134u;
    // NOP
    ctx->pc = 0x1c60138u;
}
