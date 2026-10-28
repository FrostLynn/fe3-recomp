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

// Function: sub_01CA41D0
// Address: 0x1ca41d0 - 0x1ca42d0
void sub_01CA41D0_0x1ca41d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA41D0_0x1ca41d0");
#endif

    switch (ctx->pc) {
        case 0x1ca41ecu: goto label_1ca41ec;
        case 0x1ca41f4u: goto label_1ca41f4;
        case 0x1ca4208u: goto label_1ca4208;
        case 0x1ca420cu: goto label_1ca420c;
        case 0x1ca4248u: goto label_1ca4248;
        case 0x1ca4274u: goto label_1ca4274;
        case 0x1ca4280u: goto label_1ca4280;
        case 0x1ca428cu: goto label_1ca428c;
        case 0x1ca42a0u: goto label_1ca42a0;
        case 0x1ca42b0u: goto label_1ca42b0;
        default: break;
    }

    ctx->pc = 0x1ca41d0u;

    // 0x1ca41d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca41d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca41d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca41d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca41d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca41d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca41dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca41dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca41e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca41e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca41e4: 0xc7289d0  jal         func_1CA2740
    ctx->pc = 0x1CA41E4u;
    SET_GPR_U32(ctx, 31, 0x1CA41ECu);
    ctx->pc = 0x1CA41E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA41E4u;
    // 0x1ca41e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2740u, 0x1CA41E4u, 0x1CA41ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA41ECu;
label_1ca41ec:
    // 0x1ca41ec: 0xc7289d2  jal         func_1CA2748
    ctx->pc = 0x1CA41ECu;
    SET_GPR_U32(ctx, 31, 0x1CA41F4u);
    ctx->pc = 0x1CA41F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA41ECu;
    // 0x1ca41f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2748u, 0x1CA41ECu, 0x1CA41F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA41F4u;
label_1ca41f4:
    // 0x1ca41f4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ca41f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca41f8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA41F8u;
    {
        const bool branch_taken_0x1ca41f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CA41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA41F8u;
        // 0x1ca41fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca41f8) {
            ctx->pc = 0x1CA421Cu;
            goto label_1ca421c;
        }
    }
    ctx->pc = 0x1CA4200u;
    // 0x1ca4200: 0xc7289d4  jal         func_1CA2750
    ctx->pc = 0x1CA4200u;
    SET_GPR_U32(ctx, 31, 0x1CA4208u);
    ctx->pc = 0x1CA2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2750u, 0x1CA4200u, 0x1CA4208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4208u;
label_1ca4208:
    // 0x1ca4208: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ca4208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ca420c:
    // 0x1ca420c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca420cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4210: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca4210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca4214: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4214u;
        // 0x1ca4218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA421Cu;
label_1ca421c:
    // 0x1ca421c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CA421Cu;
    {
        const bool branch_taken_0x1ca421c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA421Cu;
        // 0x1ca4220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca421c) {
            ctx->pc = 0x1CA420Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca420c;
        }
    }
    ctx->pc = 0x1CA4224u;
    // 0x1ca4224: 0x0  nop
    ctx->pc = 0x1ca4224u;
    // NOP
    // 0x1ca4228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca4228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca422c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca422cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca4230: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ca4230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ca4234: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca4234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca4238: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca4238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca423c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1ca423cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ca4240: 0xc7289d8  jal         func_1CA2760
    ctx->pc = 0x1CA4240u;
    SET_GPR_U32(ctx, 31, 0x1CA4248u);
    ctx->pc = 0x1CA4244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4240u;
    // 0x1ca4244: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2760u, 0x1CA4240u, 0x1CA4248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4248u;
label_1ca4248:
    // 0x1ca4248: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ca4248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ca424c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca424cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4250: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca4250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4254: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1ca4254u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca4258: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ca4258u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca425c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ca425cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4260: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ca4260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca4264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca4264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4268: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca4268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca426c: 0xc7289e2  jal         func_1CA2788
    ctx->pc = 0x1CA426Cu;
    SET_GPR_U32(ctx, 31, 0x1CA4274u);
    ctx->pc = 0x1CA4270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA426Cu;
    // 0x1ca4270: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2788u, 0x1CA426Cu, 0x1CA4274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4274u;
label_1ca4274:
    // 0x1ca4274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca4274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4278: 0xc7289da  jal         func_1CA2768
    ctx->pc = 0x1CA4278u;
    SET_GPR_U32(ctx, 31, 0x1CA4280u);
    ctx->pc = 0x1CA427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4278u;
    // 0x1ca427c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2768u, 0x1CA4278u, 0x1CA4280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4280u;
label_1ca4280:
    // 0x1ca4280: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ca4280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca4284: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA4284u;
    SET_GPR_U32(ctx, 31, 0x1CA428Cu);
    ctx->pc = 0x1CA4288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4284u;
    // 0x1ca4288: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA4284u, 0x1CA428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA428Cu;
label_1ca428c:
    // 0x1ca428c: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1ca428cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1ca4290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca4290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4294: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ca4294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca4298: 0xc7289dc  jal         func_1CA2770
    ctx->pc = 0x1CA4298u;
    SET_GPR_U32(ctx, 31, 0x1CA42A0u);
    ctx->pc = 0x1CA429Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4298u;
    // 0x1ca429c: 0x240500c5  addiu       $a1, $zero, 0xC5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2770u, 0x1CA4298u, 0x1CA42A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA42A0u;
label_1ca42a0:
    // 0x1ca42a0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca42a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca42a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca42a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca42a8: 0xc7289d0  jal         func_1CA2740
    ctx->pc = 0x1CA42A8u;
    SET_GPR_U32(ctx, 31, 0x1CA42B0u);
    ctx->pc = 0x1CA42ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA42A8u;
    // 0x1ca42ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2740u, 0x1CA42A8u, 0x1CA42B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA42B0u;
label_1ca42b0:
    // 0x1ca42b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca42b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca42b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca42b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca42b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca42b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca42bc: 0x24050063  addiu       $a1, $zero, 0x63
    ctx->pc = 0x1ca42bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1ca42c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca42c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca42c4: 0x87289de  j           func_1CA2778
    ctx->pc = 0x1CA42C4u;
    ctx->pc = 0x1CA42C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA42C4u;
    // 0x1ca42c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2778u;
    sub_01CA2778_0x1ca2778(rdram, ctx, runtime); return;
    ctx->pc = 0x1CA42CCu;
    // 0x1ca42cc: 0x0  nop
    ctx->pc = 0x1ca42ccu;
    // NOP
    ctx->pc = 0x1ca42d0u;
}
